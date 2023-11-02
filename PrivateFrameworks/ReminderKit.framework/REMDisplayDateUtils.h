
@interface REMDisplayDateUtils : NSObject {
    <REMDisplayDateUtilsDelegate> * _delegete;
    NSDateComponents * _dueDateComponents;
    NSDateComponents * _floatingDateComponents;
    bool  _hasAlarmDateComponents;
    bool  _isCacheSet;
    NSDateComponents * _nonFloatingDateComponents;
}

@property (nonatomic) <REMDisplayDateUtilsDelegate> *delegete;
@property (nonatomic, retain) NSDateComponents *dueDateComponents;
@property (nonatomic, retain) NSDateComponents *floatingDateComponents;
@property (nonatomic) bool hasAlarmDateComponents;
@property (nonatomic) bool isCacheSet;
@property (nonatomic, retain) NSDateComponents *nonFloatingDateComponents;

+ (id)_displayDateWithDueDateComponents:(id)arg1 alarms:(id)arg2 hasAlarmDateComponents:(bool)arg3 floatingDateComponents:(id)arg4 nonFloatingDateComponents:(id)arg5 displayDateUtils:(id)arg6;
+ (id)displayDateWithDueDateComponents:(id)arg1 alarms:(id)arg2;

- (void).cxx_destruct;
- (id)delegete;
- (id)displayDateWithDueDateComponents:(id)arg1 alarms:(id)arg2;
- (id)dueDateComponents;
- (id)floatingDateComponents;
- (bool)hasAlarmDateComponents;
- (bool)isCacheSet;
- (id)nonFloatingDateComponents;
- (void)setDelegete:(id)arg1;
- (void)setDueDateComponents:(id)arg1;
- (void)setFloatingDateComponents:(id)arg1;
- (void)setHasAlarmDateComponents:(bool)arg1;
- (void)setIsCacheSet:(bool)arg1;
- (void)setNonFloatingDateComponents:(id)arg1;
- (id)updateDisplayDateWithDueDateComponents:(id)arg1 alarm:(id)arg2 alarmsProviding:(id)arg3;

@end
