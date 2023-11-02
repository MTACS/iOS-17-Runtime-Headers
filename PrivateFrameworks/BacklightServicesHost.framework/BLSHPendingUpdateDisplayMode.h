
@interface BLSHPendingUpdateDisplayMode : NSObject <BLSHPendingOperation> {
    bool  _completed;
    long long  _currentDisplayMode;
    bool  _started;
    long long  _targetDisplayMode;
}

@property (getter=isCompleted) bool completed;
@property (readonly) long long currentDisplayMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) BLSHPendingUpdateDisplayMode *first;
@property (getter=isFullyCompleted, readonly) bool fullyCompleted;
@property (readonly) unsigned long long hash;
@property (readonly) BLSHPendingUpdateDisplayMode *inProgressOperation;
@property (readonly) bool isDirectRamp;
@property (readonly) bool isTwoPhaseUpdate;
@property (readonly) BLSHPendingUpdateDisplayMode *last;
@property (readonly) BLSHPendingDirectRampDisplayMode *rampOperation;
@property (getter=isStarted) bool started;
@property (getter=isStartedButIncomplete, readonly) bool startedButIncomplete;
@property (readonly) Class superclass;
@property (readonly) long long targetDisplayMode;
@property (readonly) long long type;
@property (readonly) BLSHPendingUpdateDisplayMode *updateOperation;

+ (id)operationForUpdateFromCurrentDisplayMode:(long long)arg1 toTargetDisplayMode:(long long)arg2;
+ (id)operationForUpdateFromCurrentDisplayMode:(long long)arg1 toTargetDisplayMode:(long long)arg2 withPendingOperation:(id)arg3 isNullOperationAllowed:(bool)arg4;

- (long long)currentDisplayMode;
- (id)description;
- (id)first;
- (id)inProgressOperation;
- (id)initWithCurrentDisplayMode:(long long)arg1 targetDisplayMode:(long long)arg2;
- (bool)isCompleted;
- (bool)isDirectRamp;
- (bool)isFullyCompleted;
- (bool)isStarted;
- (bool)isStartedButIncomplete;
- (bool)isTwoPhaseUpdate;
- (id)last;
- (id)rampOperation;
- (void)setCompleted:(bool)arg1;
- (void)setStarted:(bool)arg1;
- (long long)targetDisplayMode;
- (long long)type;
- (id)updateOperation;

@end
