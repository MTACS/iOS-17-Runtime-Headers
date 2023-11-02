
@interface SCLSchoolModeServerSettings : NSObject <NSCopying, NSSecureCoding> {
    bool  _loaded;
    SCLScheduleSettings * _scheduleSettings;
    SCLState * _state;
}

@property (getter=isLoaded, nonatomic) bool loaded;
@property (nonatomic, copy) SCLScheduleSettings *scheduleSettings;
@property (nonatomic, copy) SCLState *state;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSettings:(id)arg1;
- (bool)isLoaded;
- (id)scheduleSettings;
- (void)setLoaded:(bool)arg1;
- (void)setScheduleSettings:(id)arg1;
- (void)setState:(id)arg1;
- (id)state;

@end
