
@interface MOCellularSettingsGroup : MOSettingsGroup

@property (nonatomic, retain) NSNumber *lockAppCellularData;
@property (nonatomic, retain) NSNumber *lockCellularPlan;
@property (nonatomic, retain) NSNumber *lockESIM;

+ (id)groupName;
+ (id)lockAppCellularDataMetadata;
+ (id)lockCellularPlanMetadata;
+ (id)lockESIMMetadata;

- (id)lockAppCellularData;
- (id)lockCellularPlan;
- (id)lockESIM;
- (void)setLockAppCellularData:(id)arg1;
- (void)setLockCellularPlan:(id)arg1;
- (void)setLockESIM:(id)arg1;

@end
