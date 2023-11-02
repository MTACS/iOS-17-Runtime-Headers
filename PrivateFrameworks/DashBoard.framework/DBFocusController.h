
@interface DBFocusController : NSObject {
    NSMutableArray * _assertions;
    NSString * _displayID;
    <BSInvalidatable> * _focusDeferral;
    UIWindow * _focusWindow;
    DBFocusAssertion * _lastFocusAssertion;
    UIScreen * _screen;
}

@property (nonatomic, retain) NSMutableArray *assertions;
@property (nonatomic, copy) NSString *displayID;
@property (nonatomic, retain) <BSInvalidatable> *focusDeferral;
@property (nonatomic) UIWindow *focusWindow;
@property (nonatomic, retain) DBFocusAssertion *lastFocusAssertion;
@property (nonatomic, retain) UIScreen *screen;

- (void).cxx_destruct;
- (void)_applyAssertion:(id)arg1 withHeading:(unsigned long long)arg2 focusedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)_updateEventFocusWithHeading:(unsigned long long)arg1 focusedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)assertions;
- (void)dealloc;
- (id)description;
- (id)displayID;
- (void)dropReason:(id)arg1;
- (void)dropReason:(id)arg1 withHeading:(unsigned long long)arg2 focusedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)focusDeferral;
- (id)focusWindow;
- (int)focusedPid;
- (id)initWithScreen:(id)arg1;
- (void)invalidate;
- (id)lastFocusAssertion;
- (id)screen;
- (void)setAssertions:(id)arg1;
- (void)setDisplayID:(id)arg1;
- (void)setFocusDeferral:(id)arg1;
- (void)setFocusWindow:(id)arg1;
- (void)setLastFocusAssertion:(id)arg1;
- (void)setScreen:(id)arg1;
- (void)takeWithPriority:(double)arg1 reason:(id)arg2 forWindow:(id)arg3 bundleIdentifier:(id)arg4 pid:(int)arg5 scene:(id)arg6;
- (void)takeWithPriority:(double)arg1 reason:(id)arg2 forWindow:(id)arg3 bundleIdentifier:(id)arg4 pid:(int)arg5 scene:(id)arg6 heading:(unsigned long long)arg7 focusedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg8;

@end
