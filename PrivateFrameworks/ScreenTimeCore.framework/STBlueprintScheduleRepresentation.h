
@interface STBlueprintScheduleRepresentation : NSObject <NSCopying> {
    NSArray * _customScheduleItems;
    STBlueprintScheduleSimpleItem * _simpleSchedule;
}

@property (nonatomic, copy) NSArray *customScheduleItems;
@property (nonatomic, retain) STBlueprintScheduleSimpleItem *simpleSchedule;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customScheduleItems;
- (void)setCustomScheduleItems:(id)arg1;
- (void)setSimpleSchedule:(id)arg1;
- (id)simpleSchedule;

@end
