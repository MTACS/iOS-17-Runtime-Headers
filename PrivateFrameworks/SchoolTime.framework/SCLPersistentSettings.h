
@interface SCLPersistentSettings : NSObject <NSCopying, NSSecureCoding> {
    bool  _manualSchoolModeEnabled;
    SCLScheduleSettings * _scheduleSettings;
}

@property (getter=isManualSchoolModeEnabled, nonatomic) bool manualSchoolModeEnabled;
@property (nonatomic, retain) SCLScheduleSettings *scheduleSettings;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isManualSchoolModeEnabled;
- (id)scheduleSettings;
- (void)setManualSchoolModeEnabled:(bool)arg1;
- (void)setScheduleSettings:(id)arg1;

@end
