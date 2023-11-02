
@interface CUIKDefaultAlarmPreferences : NSObject {
    NSNumber * _defaultAllDayAlarmOffset;
    NSNumber * _defaultTimedAlarmOffset;
}

@property (nonatomic, retain) NSNumber *defaultAllDayAlarmOffset;
@property (nonatomic, retain) NSNumber *defaultTimedAlarmOffset;

- (void).cxx_destruct;
- (id)_defaultAllDayAlarmOffset;
- (id)_defaultBirthdayAlarmOffsetForSources:(id)arg1;
- (id)_defaultTimedAlarmOffset;
- (id)defaultAlarmOffsetForAlarmType:(int)arg1 sources:(id)arg2;
- (id)defaultAllDayAlarmOffset;
- (id)defaultTimedAlarmOffset;
- (void)setDefaultAlarmOffset:(id)arg1 forAlarmType:(int)arg2 sources:(id)arg3;
- (void)setDefaultAllDayAlarmOffset:(id)arg1;
- (void)setDefaultTimedAlarmOffset:(id)arg1;

@end
