
@interface CAMClosedViewfinderController : NSObject {
    NSMutableSet * __reasonsForClosingViewfinder;
    double  __referenceTime;
    long long  __referenceTimeEvent;
    <CAMClosedViewfinderControllerDelegate> * _delegate;
}

@property (nonatomic, readonly) NSMutableSet *_reasonsForClosingViewfinder;
@property (setter=_setReferenceTime:, nonatomic) double _referenceTime;
@property (setter=_setReferenceTimeEvent:, nonatomic) long long _referenceTimeEvent;
@property (nonatomic) <CAMClosedViewfinderControllerDelegate> *delegate;
@property (getter=isViewfinderClosed, nonatomic, readonly) bool viewfinderClosed;

- (void).cxx_destruct;
- (void)_cancelDelayedLoggingForClosedViewfinder;
- (id)_descriptionForReasons:(id)arg1;
- (id)_descriptionStringForReason:(long long)arg1;
- (id)_descriptionStringForReferenceTimeEvent:(long long)arg1;
- (void)_handleApplicationDidBecomeActive:(id)arg1;
- (void)_handleApplicationDidEnterBackground:(id)arg1;
- (void)_handleApplicationWillEnterForeground:(id)arg1;
- (void)_logWarningIfViewfinderStillClosed;
- (void)_performDelayedRemovalOfReason:(id)arg1;
- (id)_reasonsForClosingViewfinder;
- (double)_referenceTime;
- (long long)_referenceTimeEvent;
- (void)_scheduleLogWarningIfViewfinderStillClosedAfterDelay:(double)arg1;
- (void)_setReferenceTime:(double)arg1;
- (void)_setReferenceTimeEvent:(long long)arg1;
- (void)_updateReferenceTimeToNowForEvent:(long long)arg1;
- (void)addClosedViewfinderReason:(long long)arg1;
- (void)cancelDelayedRemovalOfReason:(long long)arg1;
- (void)dealloc;
- (id)delegate;
- (id)descriptionForTimeBetweenReferenceAndNow;
- (bool)hasClosedViewfinderReason:(long long)arg1;
- (id)init;
- (bool)isViewfinderClosed;
- (void)removeClosedViewfinderReason:(long long)arg1;
- (void)removeClosedViewfinderReason:(long long)arg1 afterDelay:(double)arg2;
- (void)setDelegate:(id)arg1;

@end
