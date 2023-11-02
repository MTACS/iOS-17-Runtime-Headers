
@protocol _SFWebBookmarkActionHandler <NSObject>

@required

- (void)bookmark:(WebBookmark *)arg1 didProduceNavigationIntent:(_SFNavigationIntent *)arg2 userInfo:(id)arg3;
- (void)deleteBookmark:(WebBookmark *)arg1 userInfo:(id)arg2;
- (void)editBookmark:(WebBookmark *)arg1 userInfo:(id)arg2;

@optional

- (void)bookmark:(WebBookmark *)arg1 shareItems:(NSArray *)arg2 userInfo:(id)arg3;

@end
