
@protocol PLVideoRemakerDelegate <NSObject>

@optional

- (void)videoRemaker:(PLVideoRemaker *)arg1 progressDidChange:(float)arg2;
- (void)videoRemakerDidBeginRemaking:(PLVideoRemaker *)arg1;
- (void)videoRemakerDidEndRemaking:(PLVideoRemaker *)arg1 temporaryPath:(NSString *)arg2;

@end
