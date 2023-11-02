
@interface HMDDataStreamBulkSendOpenSessionResult : NSObject {
    NSDictionary * _payload;
    <HMDDataStreamBulkSendSession> * _session;
}

@property (nonatomic, readonly) NSDictionary *payload;
@property (nonatomic, readonly) <HMDDataStreamBulkSendSession> *session;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithSession:(id)arg1 payload:(id)arg2;
- (id)payload;
- (id)session;

@end
