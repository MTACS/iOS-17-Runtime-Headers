
@interface _UINavigationBarTitleRenameTextField : UITextField <_UINavigationBarTitleRenamerContentView, _UIPassthroughScrollInteractionDelegate> {
    id /* block */  _horizontalTextInsetDidChangeCallback;
    NSLayoutConstraint * _iconHeightConstraint;
    FBSSceneIdentityToken * _layeringSceneIdentity;
    _UIPassthroughScrollInteraction * _passthroughInteraction;
    _UINavigationBarTitleRenamerSession * _session;
}

@property (setter=_setLayeringSceneIdentity:, nonatomic, retain) FBSSceneIdentityToken *_layeringSceneIdentity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double horizontalTextInset;
@property (nonatomic, copy) id /* block */ horizontalTextInsetDidChangeCallback;
@property (nonatomic, readonly) NSLayoutConstraint *iconHeightConstraint;
@property (nonatomic, retain) _UIPassthroughScrollInteraction *passthroughInteraction;
@property (nonatomic, readonly) _UINavigationBarTitleRenamerSession *session;
@property (readonly) Class superclass;
@property (nonatomic) long long textAlignment;

- (void).cxx_destruct;
- (void)_becomeFirstResponder;
- (id)_layeringSceneIdentity;
- (void)_resignFirstResponder;
- (void)_setLayeringSceneIdentity:(id)arg1;
- (void)_setupIconViewIfNecessary;
- (bool)_shouldEndEditingOnReturn;
- (bool)canResignFirstResponder;
- (void)didMoveToWindow;
- (double)horizontalTextInset;
- (id /* block */)horizontalTextInsetDidChangeCallback;
- (id)iconHeightConstraint;
- (id)initWithSession:(id)arg1;
- (void)layoutSubviews;
- (id)passthroughInteraction;
- (bool)passthroughScrollInteraction:(id)arg1 shouldInteractAtLocation:(struct CGPoint { double x1; double x2; })arg2 withEvent:(id)arg3;
- (bool)passthroughScrollInteractionDidRecognize:(id)arg1;
- (id)session;
- (void)setHorizontalTextInsetDidChangeCallback:(id /* block */)arg1;
- (void)setPassthroughInteraction:(id)arg1;
- (bool)supportsImagePaste;
- (void)willMoveToWindow:(id)arg1;

@end
