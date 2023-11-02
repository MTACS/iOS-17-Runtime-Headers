
@protocol SUUICommentDelegate <NSObject>

@required

- (void)commentPostBarView:(SUUICommentPostBarView *)arg1 changeCommenter:(UIButton *)arg2;
- (void)commentPostBarView:(SUUICommentPostBarView *)arg1 text:(NSString *)arg2 as:(NSString *)arg3;

@end
