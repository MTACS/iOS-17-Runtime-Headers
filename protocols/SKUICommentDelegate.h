
@protocol SKUICommentDelegate <NSObject>

@required

- (void)commentPostBarView:(SKUICommentPostBarView *)arg1 changeCommenter:(UIButton *)arg2;
- (void)commentPostBarView:(SKUICommentPostBarView *)arg1 text:(NSString *)arg2 as:(NSString *)arg3;

@end
