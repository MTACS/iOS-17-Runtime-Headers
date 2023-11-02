
@interface MTRThermostatClusterThermostatScheduleTransition : NSObject <NSCopying> {
    NSNumber * _coolSetpoint;
    NSNumber * _heatSetpoint;
    NSNumber * _transitionTime;
}

@property (nonatomic, copy) NSNumber *coolSetpoint;
@property (nonatomic, copy) NSNumber *heatSetpoint;
@property (nonatomic, copy) NSNumber *transitionTime;

- (void).cxx_destruct;
- (id)coolSetpoint;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)heatSetpoint;
- (id)init;
- (void)setCoolSetpoint:(id)arg1;
- (void)setHeatSetpoint:(id)arg1;
- (void)setTransitionTime:(id)arg1;
- (id)transitionTime;

@end
