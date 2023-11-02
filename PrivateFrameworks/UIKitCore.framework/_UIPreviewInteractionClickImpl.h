
@interface _UIPreviewInteractionClickImpl : NSObject <UIGestureRecognizerDelegate, UIInteraction, UIInteraction_Private, _UIClickInteractionDelegate, _UIPreviewInteractionImpl> {
    UIDragInteraction * _associatedDragInteraction;
    _UIClickInteraction * _commitClickInteraction;
    unsigned long long  _currentState;
    <UIPreviewInteractionDelegate> * _delegate;
    struct { 
        bool shouldBegin; 
        bool didUpdateCommitTransition; 
        bool highlighterForPreviewTransition; 
        bool viewControllerPresentationForPresentingViewController; 
        bool shouldFinishTransitionToPreview; 
        bool targetedPreviewForPreviewingAtLocation; 
        bool overrideViewForCommitPhase; 
    }  _delegateImplements;
    _UIRelationshipGestureRecognizer * _exclusionRelationshipGestureRecognizer;
    _UIPreviewInteractionHighlighter * _highlighter;
    <UIInteractionEffect> * _interactionEffect;
    _UIPreviewInteractionPresentationAssistant * _presentationAssistant;
    _UIClickInteraction * _previewClickInteraction;
    UIPreviewInteraction * _previewInteraction;
    <UIPreviewInteractionDelegatePrivate> * _privateDelegate;
    <_UIPreviewInteractionTouchForceProviding> * _touchForceProvider;
    UIView * _view;
}

@property (nonatomic) UIDragInteraction *associatedDragInteraction;
@property (nonatomic, retain) _UIClickInteraction *commitClickInteraction;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIPreviewInteractionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _UIRelationshipGestureRecognizer *exclusionRelationshipGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UIPreviewInteractionHighlighter *highlighter;
@property (nonatomic, retain) <UIInteractionEffect> *interactionEffect;
@property (nonatomic, retain) _UIPreviewInteractionPresentationAssistant *presentationAssistant;
@property (nonatomic, retain) _UIClickInteraction *previewClickInteraction;
@property (nonatomic) UIPreviewInteraction *previewInteraction;
@property (nonatomic, readonly) <UIPreviewInteractionDelegatePrivate> *privateDelegate;
@property (readonly) Class superclass;
@property (nonatomic, retain) <_UIPreviewInteractionTouchForceProviding> *touchForceProvider;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (bool)_canPerformPresentation;
- (void)_endInteractionEffectIfNeeded;
- (id)_gestureRecognizerForExclusionRelationship;
- (bool)_performPresentationIfPossible;
- (void)_prepareInteractionEffect;
- (void)_startPreviewAtLocation:(struct CGPoint { double x1; double x2; })arg1 inCoordinateSpace:(id)arg2;
- (id)associatedDragInteraction;
- (void)cancelInteraction;
- (void)clickInteractionDidClickDown:(id)arg1;
- (void)clickInteractionDidClickUp:(id)arg1;
- (void)clickInteractionDidEnd:(id)arg1;
- (bool)clickInteractionShouldBegin:(id)arg1;
- (id)commitClickInteraction;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToView:(id)arg1;
- (id)exclusionRelationshipGestureRecognizer;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)highlightEffectForClickInteraction:(id)arg1;
- (id)highlighter;
- (id)initWithView:(id)arg1 previewInteraction:(id)arg2;
- (id)interactionEffect;
- (struct CGPoint { double x1; double x2; })locationInCoordinateSpace:(id)arg1;
- (id)presentationAssistant;
- (id)previewClickInteraction;
- (id)previewInteraction;
- (id)privateDelegate;
- (void)setAssociatedDragInteraction:(id)arg1;
- (void)setCommitClickInteraction:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExclusionRelationshipGestureRecognizer:(id)arg1;
- (void)setHighlighter:(id)arg1;
- (void)setInteractionEffect:(id)arg1;
- (void)setPresentationAssistant:(id)arg1;
- (void)setPreviewClickInteraction:(id)arg1;
- (void)setPreviewInteraction:(id)arg1;
- (void)setTouchForceProvider:(id)arg1;
- (id)touchForceProvider;
- (id)view;
- (void)willMoveToView:(id)arg1;

@end
