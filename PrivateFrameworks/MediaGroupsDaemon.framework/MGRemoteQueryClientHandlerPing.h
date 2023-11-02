
@interface MGRemoteQueryClientHandlerPing : NSObject <MGRemoteQueryClientHandlerProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)handler;

- (id)description;
- (id)handleCompleteResponse:(id)arg1 jsonPayload:(id)arg2;
- (void)prepareRequest:(id)arg1;
- (void)prepareURL:(id)arg1;

@end
