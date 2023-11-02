
@interface SBSOSLockGestureObserver : NSObject <SBPressSequenceRecognizerDelegate> {
    long long  _configuration;
    <SBSOSLockGestureObserverDelegate> * _delegate;
    bool  _gestureLoggingEnabled;
    bool  _lastKnownActiveState;
    SBPressSequenceRecognizer * _recognizer;
    SBPressSequenceSettings * _settings;
    bool  _sosEnabled;
    SBPressSequenceObserver * _sosLockPressSequenceObserver;
    BSAction * _triggerAction;
    SBPressSequenceValidator * _validator;
}

@property (nonatomic, readonly) long long configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBSOSLockGestureObserverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isGestureLoggingEnabled, nonatomic) bool gestureLoggingEnabled;
@property (readonly) unsigned long long hash;
@property (getter=isSOSEnabled, setter=setSOSEnabled:, nonatomic) bool sosEnabled;
@property (nonatomic, retain) SBPressSequenceObserver *sosLockPressSequenceObserver;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long triggerMechanism;

- (void).cxx_destruct;
- (void)_configure;
- (void)_configureSettings;
- (double)_intervalThatSucceeds;
- (void)_noteTriggerActionRecievedResponse;
- (void)_noteTriggerDidBecomeActive;
- (void)_noteTriggerDidBecomeInactive;
- (unsigned long long)_numberOfPressesThatActivate;
- (unsigned long long)_numberOfPressesThatTrigger;
- (void)_setRecognizer:(id)arg1;
- (id)_validator;
- (double)_watchdogInterval;
- (long long)configuration;
- (id)delegate;
- (id)init;
- (id)initWithConfiguration:(long long)arg1;
- (bool)isGestureLoggingEnabled;
- (bool)isSOSEnabled;
- (void)noteDidBeginSOSWithUUID:(id)arg1;
- (void)pressSequenceRecognizer:(id)arg1 didBeginPressDownAtIndex:(unsigned long long)arg2;
- (void)pressSequenceRecognizerDidCompleteSequence:(id)arg1;
- (void)pressSequenceRecognizerDidFail:(id)arg1;
- (void)registerPressDownWithTimestamp:(double)arg1;
- (void)registerPressUpWithTimestamp:(double)arg1;
- (void)resetWithNewConfiguration:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGestureLoggingEnabled:(bool)arg1;
- (void)setSOSEnabled:(bool)arg1;
- (void)setSosLockPressSequenceObserver:(id)arg1;
- (id)sosLockPressSequenceObserver;
- (long long)triggerMechanism;

@end
