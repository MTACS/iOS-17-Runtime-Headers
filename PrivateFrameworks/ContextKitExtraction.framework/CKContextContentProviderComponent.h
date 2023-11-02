
@interface CKContextContentProviderComponent : CKContextContentProvider {
    UIView * _view;
}

@property (setter=setView:, nonatomic) UIView *view;

+ (id)_UIElementsForWebViewContentString:(id)arg1 withSceneIdentifier:(id)arg2;
+ (id)_bestVisibleStringForView:(id)arg1 usingExecutor:(id)arg2;
+ (id)_decendantsRelevantForExtractionFromParentView:(id)arg1;
+ (void)_donateContentsOfParentView:(id)arg1 usingExecutor:(id)arg2 withOptions:(unsigned long long)arg3;
+ (void)_donateText:(id)arg1 withTitle:(id)arg2 debugText:(id)arg3 debugUrlString:(id)arg4 leadImage:(id)arg5 snapshot:(id)arg6 uiElements:(id)arg7 usingContextFromExecutor:(id)arg8;
+ (void)_extractContentFromWebView:(id)arg1 includingUIBoundingBox:(bool)arg2 withCompletionHandler:(id /* block */)arg3;
+ (double)_fontSizeOfView:(id)arg1 usingExecutor:(id)arg2;
+ (id)_getNotableSuperviewClassNamesForView:(id)arg1;
+ (id)_handleWKWebView:(id)arg1 withExecutor:(id)arg2;
+ (bool)_isSensitiveTextContentType:(id)arg1;
+ (void)initialize;

- (void).cxx_destruct;
- (void)extractUsingExecutor:(id)arg1 withOptions:(unsigned long long)arg2;
- (id)init;
- (void)setView:(id)arg1;
- (id)view;

@end
