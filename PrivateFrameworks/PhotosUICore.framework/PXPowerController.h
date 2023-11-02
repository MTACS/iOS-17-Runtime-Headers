
@interface PXPowerController : NSObject {
    unsigned int  _assertionID;
    _Atomic unsigned int  _assertionIdentifierGenerator;
    NSMutableDictionary * _assertionReasonsByIdentifier;
    BKSProcessAssertion * _backgroundProcessAssertion;
    bool  _backgrounded;
    double  _powerAssertionStartTime;
    NSObject<OS_dispatch_queue> * _powerControllerQueue;
}

@property (nonatomic) unsigned int assertionID;
@property (nonatomic, readonly) NSMutableDictionary *assertionReasonsByIdentifier;
@property (nonatomic, retain) BKSProcessAssertion *backgroundProcessAssertion;
@property (getter=isBackgrounded, nonatomic) bool backgrounded;
@property (nonatomic, readonly) bool hasBackgroundAssertion;
@property (nonatomic, readonly) bool hasPowerAssertion;
@property (nonatomic) double powerAssertionStartTime;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *powerControllerQueue;

+ (id)sharedController;

- (void).cxx_destruct;
- (void)acquireBackgroundAssertion;
- (void)acquireBackgroundAssertionIfNeeded;
- (void)addPowerAssertionForIdentifier:(unsigned int)arg1 withReason:(unsigned int)arg2;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (unsigned int)assertionID;
- (id)assertionReasonsByIdentifier;
- (id)backgroundProcessAssertion;
- (void)dealloc;
- (id)description;
- (unsigned int)generateAssertionIdentifier;
- (void)handleEnteringBackground;
- (void)handleEnteringForeground;
- (bool)hasBackgroundAssertion;
- (bool)hasPowerAssertion;
- (id)init;
- (void)invalidateBackgroundAssertion;
- (void)invalidateBackgroundAssertionIfNeeded;
- (bool)isBackgrounded;
- (double)powerAssertionStartTime;
- (id)powerControllerQueue;
- (void)releasePowerAssertion;
- (void)releasePowerAssertionIfNeeded;
- (void)removePowerAssertionForIdentifier:(unsigned int)arg1 withReason:(unsigned int)arg2;
- (void)setAssertionID:(unsigned int)arg1;
- (void)setBackgroundProcessAssertion:(id)arg1;
- (void)setBackgrounded:(bool)arg1;
- (void)setPowerAssertionStartTime:(double)arg1;
- (void)takePowerAssertion;
- (void)takePowerAssertionIfNeeded;

@end
