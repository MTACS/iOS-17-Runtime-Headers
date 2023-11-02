
@protocol EDRemoteSearchDelegate <NSObject>

@required

- (void)remoteSearchDidFindMessages:(NSArray *)arg1;
- (void)remoteSearchDidFinish;

@end
