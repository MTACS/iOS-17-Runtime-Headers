
@interface _UIRemoteKeyboardsEventObserver : NSObject <_UIEventObserver> {
    <_UIRemoteKeyboardsEventObserverDelegate> * _delegate;
    bool  _hasTextInputResponder;
    bool  _keyboardIsVisible;
    NSMutableDictionary * _touchTracker;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UIRemoteKeyboardsEventObserverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasTextInputResponder;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool keyboardIsVisible;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelTrackingForTouch:(id)arg1;
- (void)_endTrackingForTouch:(id)arg1;
- (void)_gestureRecognizer:(id)arg1 didTransitionToState:(long long)arg2;
- (bool)_hasTextAlternativesForTouch:(id)arg1;
- (void)_invalidateTrackingForTouch:(id)arg1;
- (bool)_isTrackingPencilTouch;
- (void)_markTrackingForTouch:(id)arg1 withGesture:(id)arg2;
- (long long)_preferredEventSourceForTouch:(id)arg1 tracking:(id)arg2 shouldUpdateOut:(bool*)arg3;
- (bool)_shouldTrackTouch:(id)arg1;
- (void)_startTrackingForTouch:(id)arg1;
- (void)_trackTouch:(id)arg1;
- (void)_updateTrackingForTouch:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (bool)hasTextInputResponder;
- (id)init;
- (bool)keyboardIsVisible;
- (void)peekApplicationEvent:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHasTextInputResponder:(bool)arg1;
- (void)setKeyboardIsVisible:(bool)arg1;
- (void)textInputResponderDidChange:(id)arg1;

@end
