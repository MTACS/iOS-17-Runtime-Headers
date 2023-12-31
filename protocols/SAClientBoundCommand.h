
@protocol SAClientBoundCommand <SAAceCommand, SAAceReferable>

@required

- (NSString *)appId;
- (NSArray *)callbacks;
- (bool)requiresResponse;
- (void)setAppId:(NSString *)arg1;
- (void)setCallbacks:(NSArray *)arg1;

@end
