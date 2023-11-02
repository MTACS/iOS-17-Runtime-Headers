
@interface PXAssetSupportChecker : NSObject

+ (void)_alertTitleAndMessageForAsset:(id)arg1 type:(long long)arg2 title:(id*)arg3 message:(id*)arg4;
+ (void)_presentAlertWithTitle:(id)arg1 message:(id)arg2 knowledgeBaseURL:(id)arg3 alertControllerPresenter:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
+ (void)checkIsSupportedAndPresentAlertForAsset:(id)arg1 type:(long long)arg2 alertControllerPresenter:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
+ (void)checkIsSupportedAsset:(id)arg1 type:(long long)arg2 completionHandler:(id /* block */)arg3;
+ (void)checkIsSupportedAsset:(id)arg1 type:(long long)arg2 completionHandlerWithReason:(id /* block */)arg3;
+ (bool)isSupportedAsset:(id)arg1 type:(long long)arg2;
+ (void)presentAlertForAsset:(id)arg1 type:(long long)arg2 alertControllerPresenter:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
+ (void)presentAlertWithTitle:(id)arg1 message:(id)arg2 uti:(id)arg3 codecName:(id)arg4 alertControllerPresenter:(id /* block */)arg5 completionHandler:(id /* block */)arg6;

@end
