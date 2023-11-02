
@interface EKUIAlarm : NSObject {
    EKAlarm * _alarm;
    bool  _isDefaultAlarm;
    bool  _isLeaveNowAlarm;
}

@property (nonatomic, readonly) EKAlarm *alarm;
@property (nonatomic, readonly) bool isDefaultAlarm;
@property (nonatomic, readonly) bool isLeaveNowAlarm;

- (void).cxx_destruct;
- (id)alarm;
- (id)description;
- (id)initDefaultAlarm;
- (id)initLeaveNowAlarm;
- (id)initWithAlarm:(id)arg1;
- (bool)isDefaultAlarm;
- (bool)isEqualToUIAlarm:(id)arg1;
- (bool)isLeaveNowAlarm;
- (id)localizedDescriptionAllDay:(bool)arg1;

@end
