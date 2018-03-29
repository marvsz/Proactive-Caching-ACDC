//
// Generated file, do not edit! Created by nedtool 5.2 from src/simulation/SegmentRequest.msg.
//

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#ifndef __SEGMENTREQUEST_M_H
#define __SEGMENTREQUEST_M_H

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0502
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



/**
 * Class generated from <tt>src/simulation/SegmentRequest.msg:19</tt> by nedtool.
 * <pre>
 * //
 * // TODO generated message class
 * //
 * message SegmentRequest
 * {
 *     int clientId = 1;
 *     string videoId = "";
 *     int segmentId = 1;
 *     string uploader = "";
 *     string category = "";
 *     int size = 75;
 * }
 * </pre>
 */
class SegmentRequest : public ::omnetpp::cMessage
{
  protected:
    int clientId;
    ::omnetpp::opp_string videoId;
    int segmentId;
    ::omnetpp::opp_string uploader;
    ::omnetpp::opp_string category;
    int size;

  private:
    void copy(const SegmentRequest& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const SegmentRequest&);

  public:
    SegmentRequest(const char *name=nullptr, short kind=0);
    SegmentRequest(const SegmentRequest& other);
    virtual ~SegmentRequest();
    SegmentRequest& operator=(const SegmentRequest& other);
    virtual SegmentRequest *dup() const override {return new SegmentRequest(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual int getClientId() const;
    virtual void setClientId(int clientId);
    virtual const char * getVideoId() const;
    virtual void setVideoId(const char * videoId);
    virtual int getSegmentId() const;
    virtual void setSegmentId(int segmentId);
    virtual const char * getUploader() const;
    virtual void setUploader(const char * uploader);
    virtual const char * getCategory() const;
    virtual void setCategory(const char * category);
    virtual int getSize() const;
    virtual void setSize(int size);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const SegmentRequest& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, SegmentRequest& obj) {obj.parsimUnpack(b);}


#endif // ifndef __SEGMENTREQUEST_M_H

