
@protocol AFCommandExecutionInfoMutating <NSObject>

@required

- (void)setCurrentHomeInfo:(AFHomeInfo *)arg1;
- (void)setDeviceRestrictions:(NSArray *)arg1;
- (void)setEndpointInfo:(AFEndpointInfo *)arg1;
- (void)setExecutionID:(NSString *)arg1;
- (void)setInstanceInfo:(AFInstanceInfo *)arg1;
- (void)setOriginPeerInfo:(AFPeerInfo *)arg1;
- (void)setRequestHandlingContextSnapshot:(AFRequestHandlingContext *)arg1;
- (void)setRequestID:(NSString *)arg1;
- (void)setSpeechInfo:(AFSpeechInfo *)arg1;
- (void)setTurnId:(NSUUID *)arg1;
- (void)setUserInfo:(NSDictionary *)arg1;

@end
