
@interface _UIDefaultFocusHapticFeedbackGenerator : NSObject <_UIFocusHapticFeedbackGenerator> {
    unsigned long long  _currentSenderID;
    CARInputDeviceTouchpad * _currentTouchpad;
    CARSessionStatus * _sessionStatus;
}

@property (nonatomic) unsigned long long currentSenderID;
@property (nonatomic, retain) CARInputDeviceTouchpad *currentTouchpad;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CARSessionStatus *sessionStatus;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)currentSenderID;
- (id)currentTouchpad;
- (id)initWithScreen:(id)arg1;
- (void)performHapticFeedbackForFocusUpdateInContext:(id)arg1;
- (id)sessionStatus;
- (void)setCurrentSenderID:(unsigned long long)arg1;
- (void)setCurrentTouchpad:(id)arg1;
- (void)setSessionStatus:(id)arg1;

@end
