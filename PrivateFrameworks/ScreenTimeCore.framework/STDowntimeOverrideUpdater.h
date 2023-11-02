
@interface STDowntimeOverrideUpdater : NSObject {
    <STDowntimeOverrideModifier> * _downtimeOverrideModifier;
}

@property (readonly) <STDowntimeOverrideModifier> *downtimeOverrideModifier;

+ (bool)updateActiveOverrideOnBlueprintNow:(id)arg1 usingModifier:(id)arg2 error:(id*)arg3;
+ (bool)updateActiveOverrideUsingModifier:(id)arg1 byRecomputingFromSchedule:(id)arg2 atDate:(id)arg3 inCalendar:(id)arg4 error:(id*)arg5;

- (void).cxx_destruct;
- (id)downtimeOverrideModifier;

@end
