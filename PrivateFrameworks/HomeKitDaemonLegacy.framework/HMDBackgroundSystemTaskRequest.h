
@interface HMDBackgroundSystemTaskRequest : HMFObject {
    NSString * _identifier;
    double  _interval;
    double  _minDurationBetweenInstances;
    bool  _requiresInexpensiveNetworkConnectivity;
    bool  _requiresSignificantUserInactivity;
}

@property (readonly, copy) NSString *identifier;
@property (nonatomic) double interval;
@property (nonatomic) double minDurationBetweenInstances;
@property (nonatomic) bool requiresInexpensiveNetworkConnectivity;
@property (nonatomic) bool requiresSignificantUserInactivity;
@property (readonly) BGRepeatingSystemTaskRequest *taskRequest;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithTaskRequest:(id)arg1;
- (double)interval;
- (double)minDurationBetweenInstances;
- (bool)requiresInexpensiveNetworkConnectivity;
- (bool)requiresSignificantUserInactivity;
- (void)setInterval:(double)arg1;
- (void)setMinDurationBetweenInstances:(double)arg1;
- (void)setRequiresInexpensiveNetworkConnectivity:(bool)arg1;
- (void)setRequiresSignificantUserInactivity:(bool)arg1;
- (id)taskRequest;

@end
