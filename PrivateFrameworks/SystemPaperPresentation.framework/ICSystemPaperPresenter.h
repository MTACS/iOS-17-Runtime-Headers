
@interface ICSystemPaperPresenter : NSObject

+ (void)initialize;
+ (bool)isSystemPaperAvailable;
+ (id)makeExtensionHostViewControllerWithUserActivityData:(id)arg1 completion:(id /* block */)arg2;
+ (void)presentSystemPaperWithUserActivityData:(id)arg1 presentingViewController:(id)arg2 completion:(id /* block */)arg3;

- (id)init;

@end
