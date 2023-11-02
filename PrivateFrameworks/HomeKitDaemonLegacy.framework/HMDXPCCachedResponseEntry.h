
@interface HMDXPCCachedResponseEntry : NSObject {
    NSMutableArray * _messages;
    HMReportContext * _reportContext;
    HMFTimer * _reportTimer;
    HMFTimer * _retrievalTimer;
    HMFMessageTransport * _transport;
}

@property (readonly) NSMutableArray *messages;
@property (readonly, copy) HMReportContext *reportContext;
@property (retain) HMFTimer *reportTimer;
@property (retain) HMFTimer *retrievalTimer;
@property HMFMessageTransport *transport;

- (void).cxx_destruct;
- (id)initWithReportContext:(id)arg1 transport:(id)arg2;
- (id)messages;
- (id)reportContext;
- (id)reportTimer;
- (id)retrievalTimer;
- (void)setReportTimer:(id)arg1;
- (void)setRetrievalTimer:(id)arg1;
- (void)setTransport:(id)arg1;
- (id)transport;

@end
