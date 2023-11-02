
@protocol _INPBSleepAlarmAttribute <NSObject>

@required

- (_INPBDateTime *)bedtime;
- (bool)hasBedtime;
- (bool)hasOverride;
- (bool)override;
- (void)setBedtime:(_INPBDateTime *)arg1;
- (void)setHasOverride:(bool)arg1;
- (void)setOverride:(bool)arg1;

@end
