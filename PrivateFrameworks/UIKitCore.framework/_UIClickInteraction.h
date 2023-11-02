
@interface _UIClickInteraction : NSObject <UIInteraction, UIInteraction_Internal, UIInteraction_Private, _UIClickInteractionDriverDelegate> {
    double  _allowableMovement;
    <_UIClickInteractionDelegate> * _delegate;
    <_UIClickInteractionDriving> * _driver;
    _UIClickFeedbackGenerator * _feedbackGenerator;
    bool  _hapticsEnabled;
    <UIInteractionEffect> * _interactionEffect;
    Class  _overrideDriverClass;
    UIView * _view;
}

@property (nonatomic) double allowableMovement;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UIClickInteractionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <_UIClickInteractionDriving> *driver;
@property (nonatomic) bool driverCancelsTouchesInView;
@property (nonatomic, retain) _UIClickFeedbackGenerator *feedbackGenerator;
@property (nonatomic) bool hapticsEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <UIInteractionEffect> *interactionEffect;
@property (setter=_setOverrideDriverClass:, nonatomic) Class overrideDriverClass;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (void)_beginInteraction;
- (void)_createFeedbackGenerator;
- (Class)_driverClass;
- (void)_endInteraction;
- (void)_setOverrideDriverClass:(Class)arg1;
- (void)_updateDriver;
- (void)_viewTraitCollectionDidChange:(id)arg1;
- (double)allowableMovement;
- (void)cancelInteraction;
- (void)clickDriver:(id)arg1 didPerformEvent:(unsigned long long)arg2;
- (void)clickDriver:(id)arg1 didUpdateHighlightProgress:(double)arg2;
- (void)clickDriver:(id)arg1 shouldBegin:(id /* block */)arg2;
- (id)delegate;
- (void)didMoveToView:(id)arg1;
- (id)driver;
- (bool)driverCancelsTouchesInView;
- (id)feedbackGenerator;
- (bool)hapticsEnabled;
- (id)init;
- (id)interactionEffect;
- (struct CGPoint { double x1; double x2; })locationInCoordinateSpace:(id)arg1;
- (Class)overrideDriverClass;
- (void)setAllowableMovement:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDriver:(id)arg1;
- (void)setDriverCancelsTouchesInView:(bool)arg1;
- (void)setFeedbackGenerator:(id)arg1;
- (void)setHapticsEnabled:(bool)arg1;
- (void)setInteractionEffect:(id)arg1;
- (id)view;
- (void)willMoveToView:(id)arg1;

@end
