
@protocol IMEventListenerResponse <NSObject>

@required

- (bool)didSucceed;
- (NSError *)error;
- (NSDictionary *)userInfo;

@end
