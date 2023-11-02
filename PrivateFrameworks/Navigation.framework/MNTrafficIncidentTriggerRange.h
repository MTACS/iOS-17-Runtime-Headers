
@interface MNTrafficIncidentTriggerRange : NSObject <NSSecureCoding> {
    double  _displayTime;
    MNTrafficIncidentTriggerPoint * _hideTriggerPoint;
    MNTrafficIncidentTriggerPoint * _showTriggerPoint;
}

@property (nonatomic, readonly) double displayTime;
@property (nonatomic, readonly) MNTrafficIncidentTriggerPoint *hideTriggerPoint;
@property (nonatomic, readonly) MNTrafficIncidentTriggerPoint *showTriggerPoint;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (double)displayTime;
- (void)encodeWithCoder:(id)arg1;
- (id)hideTriggerPoint;
- (id)initWithCoder:(id)arg1;
- (id)initWithTriggerPointShow:(id)arg1 hide:(id)arg2 displayTime:(double)arg3;
- (id)showTriggerPoint;

@end
