
@interface SBFluidSwitcherGesture : NSObject <BSDescriptionProviding> {
    id /* block */  _eventProvider;
    UIGestureRecognizer * _gestureRecognizerForStudyLog;
    SBAppLayout * _selectedAppLayout;
    long long  _selectedLayoutRole;
    long long  _state;
    long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (setter=_setGestureRecognizerForStudyLog:, nonatomic, retain) UIGestureRecognizer *gestureRecognizerForStudyLog;
@property (readonly) unsigned long long hash;
@property (setter=_setSelectedAppLayout:, nonatomic, retain) SBAppLayout *selectedAppLayout;
@property (setter=_setSelectedLayoutRole:, nonatomic) long long selectedLayoutRole;
@property (setter=_setState:, nonatomic) long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (void)_setGestureRecognizerForStudyLog:(id)arg1;
- (void)_setSelectedAppLayout:(id)arg1;
- (void)_setSelectedLayoutRole:(long long)arg1;
- (void)_setState:(long long)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)gestureEvent;
- (id)gestureRecognizerForStudyLog;
- (id)initWithType:(long long)arg1 eventProvider:(id /* block */)arg2;
- (id)selectedAppLayout;
- (long long)selectedLayoutRole;
- (long long)state;
- (id)studyLogData;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (long long)type;

@end
