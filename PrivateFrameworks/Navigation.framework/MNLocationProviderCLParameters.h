
@interface MNLocationProviderCLParameters : NSObject {
    long long  _activityType;
    bool  _fusionInfoEnabled;
}

@property (nonatomic) long long activityType;
@property (nonatomic) bool fusionInfoEnabled;

- (long long)activityType;
- (bool)fusionInfoEnabled;
- (void)setActivityType:(long long)arg1;
- (void)setFusionInfoEnabled:(bool)arg1;

@end
