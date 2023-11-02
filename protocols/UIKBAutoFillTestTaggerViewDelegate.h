
@protocol UIKBAutoFillTestTaggerViewDelegate <NSObject>

@optional

- (void)taggerView:(UIKBAutoFillTestTaggerView *)arg1 didTagFormRequest:(UIKBAutoFillTestTagRequest *)arg2 withSelectedType:(long long)arg3;
- (void)taggerView:(UIKBAutoFillTestTaggerView *)arg1 didTagTextFieldRequest:(UIKBAutoFillTestTagRequest *)arg2 withSelectedType:(long long)arg3;
- (long long)taggerView:(UIKBAutoFillTestTaggerView *)arg1 selectedTypeForFormRequest:(UIKBAutoFillTestTagRequest *)arg2;
- (long long)taggerView:(UIKBAutoFillTestTaggerView *)arg1 selectedTypeForTextFieldRequest:(UIKBAutoFillTestTagRequest *)arg2;
- (void)taggerView:(UIKBAutoFillTestTaggerView *)arg1 willTagRequest:(UIKBAutoFillTestTagRequest *)arg2;
- (void)taggerViewDidFinish:(UIKBAutoFillTestTaggerView *)arg1;

@end
