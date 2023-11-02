
@protocol AFUISiriSessionListener <NSObject>

@optional

- (void)siriSessionDidFinishRequestWithError:(NSError *)arg1;
- (void)siriSessionDidInitializeSessionInfo:(SRUIFSiriSessionInfo *)arg1;
- (void)siriSessionDidUpdateSessionInfo:(SRUIFSiriSessionInfo *)arg1;

@end
