
@protocol NUErrorMessageFactory <NSObject>

@required

- (NUErrorMessage *)errorMessageForArticleView;
- (NUErrorMessage *)errorMessageForArticleViewWithOfflineReason:(long long)arg1;

@end
