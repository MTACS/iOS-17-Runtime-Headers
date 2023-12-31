
@interface CARSessionScreenBorrowToken : NSObject {
    NSString * _client;
    NSString * _reason;
    CARSession * _session;
}

@property (nonatomic, readonly, copy) NSString *client;
@property (nonatomic, readonly, copy) NSString *reason;
@property (nonatomic, readonly) CARSession *session;

- (void).cxx_destruct;
- (id)client;
- (void)dealloc;
- (id)initWithSession:(id)arg1 client:(id)arg2 reason:(id)arg3;
- (id)reason;
- (id)session;
- (void)unborrowToken;

@end
