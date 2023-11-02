
@interface PXStoryBufferingController : PXStoryController {
    unsigned long long  _activatedTime;
    struct { double x1; unsigned long long x2; } * _bufferingDurationsPerReason;
    NSMutableIndexSet * _bufferingReasonsStore;
    bool  _isActive;
    bool  _isBuffering;
    struct { 
        double previousDuration; 
        unsigned long long currentStartTime; 
    }  _lastCriticalBufferingDurationStore;
    struct { 
        double previousDuration; 
        unsigned long long currentStartTime; 
    }  _lastNoncriticalBufferingDurationStore;
    PXStoryModel * _model;
    id /* block */  _onBufferingEnd;
    struct { 
        double previousDuration; 
        unsigned long long currentStartTime; 
    }  _overallBufferingDuration;
    long long  _overallReadinessStatus;
}

@property (nonatomic, readonly) NSIndexSet *bufferingReasons;
@property (nonatomic, readonly) NSMutableIndexSet *bufferingReasonsStore;
@property (nonatomic, readonly) bool isActive;
@property (nonatomic) bool isBuffering;
@property (nonatomic, readonly) double lastCriticalBufferingDuration;
@property (nonatomic, readonly) double lastNoncriticalBufferingDuration;
@property (nonatomic) PXStoryModel *model;
@property (nonatomic, readonly) double noncriticalBufferingTimeout;
@property (nonatomic, copy) id /* block */ onBufferingEnd;
@property (nonatomic) long long overallReadinessStatus;
@property (nonatomic, readonly) double totalBufferingTimeInterval;
@property (nonatomic, readonly) NSDictionary *totalBufferingTimeIntervalsPerReason;

- (void).cxx_destruct;
- (void)_accountForReason:(long long)arg1 status:(long long)arg2;
- (void)_invalidateModelProperties;
- (void)_invalidateOverallReadinessStatus;
- (void)_updateModelProperties;
- (void)_updateOverallReadinessStatus;
- (id)bufferingReasons;
- (id)bufferingReasonsStore;
- (void)configureUpdater:(id)arg1;
- (void)dealloc;
- (void)handleModelChange:(unsigned long long)arg1;
- (id)initWithModel:(id)arg1;
- (id)initWithObservableModel:(id)arg1;
- (bool)isActive;
- (bool)isBuffering;
- (double)lastCriticalBufferingDuration;
- (double)lastNoncriticalBufferingDuration;
- (id)model;
- (double)noncriticalBufferingTimeout;
- (id /* block */)onBufferingEnd;
- (long long)overallReadinessStatus;
- (void)setIsActive:(bool)arg1;
- (void)setIsBuffering:(bool)arg1;
- (void)setModel:(id)arg1;
- (void)setOnBufferingEnd:(id /* block */)arg1;
- (void)setOverallReadinessStatus:(long long)arg1;
- (double)totalBufferingTimeInterval;
- (id)totalBufferingTimeIntervalsPerReason;

@end
