
@interface STBlueprintUsageLimitScheduleRepresentation : NSObject {
    NSArray * _customScheduleItems;
    STBlueprintUsageLimitScheduleSimpleItem * _simpleSchedule;
}

@property (nonatomic, copy) NSArray *customScheduleItems;
@property (nonatomic, retain) STBlueprintUsageLimitScheduleSimpleItem *simpleSchedule;

- (void).cxx_destruct;
- (id)customScheduleItems;
- (void)setCustomScheduleItems:(id)arg1;
- (void)setSimpleSchedule:(id)arg1;
- (id)simpleSchedule;

@end
