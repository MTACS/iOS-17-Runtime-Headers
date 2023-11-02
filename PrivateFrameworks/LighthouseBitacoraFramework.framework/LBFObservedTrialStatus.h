
@interface LBFObservedTrialStatus : NSObject {
    NSString * _deploymentId;
    NSString * _experimentOrTaskId;
    NSNumber * _isActivated;
    bool  _isActivated_implicit;
    NSNumber * _isAllocated;
    bool  _isAllocated_implicit;
    NSDate * _lastObservedTimestamp;
}

@property (nonatomic, readonly) NSString *deploymentId;
@property (nonatomic, readonly) NSString *experimentOrTaskId;
@property (nonatomic, retain) NSNumber *isActivated;
@property (nonatomic) bool isActivated_implicit;
@property (nonatomic, retain) NSNumber *isAllocated;
@property (nonatomic) bool isAllocated_implicit;
@property (nonatomic, retain) NSDate *lastObservedTimestamp;

- (void).cxx_destruct;
- (id)deploymentId;
- (id)experimentOrTaskId;
- (id)initWithObservedStatus:(id)arg1 deploymentId:(id)arg2;
- (id)initWithObservedStatus:(id)arg1 deploymentId:(id)arg2 isAllocated:(id)arg3 isActivated:(id)arg4 isAllocated_implicit:(bool)arg5 isActivated_implicit:(bool)arg6;
- (id)isActivated;
- (bool)isActivated_implicit;
- (id)isAllocated;
- (bool)isAllocated_implicit;
- (id)lastObservedTimestamp;
- (void)setIsActivated:(id)arg1;
- (void)setIsActivated_implicit:(bool)arg1;
- (void)setIsAllocated:(id)arg1;
- (void)setIsAllocated_implicit:(bool)arg1;
- (void)setLastObservedTimestamp:(id)arg1;

@end
