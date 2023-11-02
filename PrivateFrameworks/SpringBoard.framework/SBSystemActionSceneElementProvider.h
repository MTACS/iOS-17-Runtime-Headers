
@interface SBSystemActionSceneElementProvider : NSObject <SBSystemApertureSceneElementPlaceholderContentProviding, SBUISystemApertureContentViewContaining> {
    <SAInvalidatable> * _elementAssertion;
    <SAElementIdentifying> * _elementIdentification;
    UIColor * _keyColor;
    <SBUISystemApertureContentViewProviding> * _leadingPlaceholderContentViewProvider;
    UIView * _leadingView;
    <SBSystemActionPreviewContextProviding> * _previewContext;
    SBSystemApertureSceneElement * _sceneElement;
    SBSystemAction * _systemAction;
    SBSystemApertureController * _systemApertureController;
    <SBUISystemApertureContentViewProviding> * _trailingPlaceholderContentViewProvider;
    UIView * _trailingView;
}

@property (nonatomic, readonly, copy) NSString *clientIdentifier;
@property (nonatomic, readonly) long long contentRole;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *elementIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } intrinsicCompactContainerSize;
@property (nonatomic, readonly) UIColor *keyColor;
@property (nonatomic, readonly) UIView *leadingView;
@property (nonatomic, readonly) UIView *minimalView;
@property (nonatomic, readonly) unsigned long long presentationBehaviors;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *trailingView;

- (void).cxx_destruct;
- (id)clientIdentifier;
- (long long)contentRole;
- (id)elementIdentifier;
- (struct CGSize { double x1; double x2; })intrinsicCompactContainerSize;
- (id)keyColor;
- (id)leadingView;
- (id)minimalView;
- (void)noteSceneClientWantsControlOfElementWithAssertionTransferBlock:(id /* block */)arg1;
- (void)preferredContentSizeDidInvalidateForContentViewProvider:(id)arg1;
- (unsigned long long)presentationBehaviors;
- (id)trailingView;

@end
