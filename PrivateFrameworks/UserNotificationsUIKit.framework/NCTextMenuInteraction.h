
@interface NCTextMenuInteraction : NSObject <UIEditMenuInteractionDelegate, UIGestureRecognizerDelegate, UIInteraction> {
    UIColor * _defaultTextColor;
    UIEditMenuInteraction * _editMenuInteraction;
    UIImpactFeedbackGenerator * _haptic;
    bool  _hapticPrepared;
    UILongPressGestureRecognizer * _longPressGestureRecognizer;
    UIView<NCTextSupporting> * _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) UIView<NCTextSupporting> *view;

- (void).cxx_destruct;
- (id)_editMenuInteraction:(id)arg1 menuForConfiguration:(id)arg2 suggestedActions:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_editMenuInteraction:(id)arg1 targetRectForConfiguration:(id)arg2;
- (void)_editMenuInteraction:(id)arg1 willDismissMenuForConfiguration:(id)arg2;
- (void)_editMenuInteraction:(id)arg1 willPresentMenuForConfiguration:(id)arg2;
- (void)_handleLongPress:(id)arg1;
- (void)_performHaptic;
- (void)_prepareHaptic;
- (void)_tearDownHaptic;
- (void)dealloc;
- (void)didMoveToView:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)init;
- (void)setView:(id)arg1;
- (id)view;
- (void)willMoveToView:(id)arg1;

@end
