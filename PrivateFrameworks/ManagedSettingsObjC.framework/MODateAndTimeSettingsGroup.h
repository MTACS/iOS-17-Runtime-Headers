
@interface MODateAndTimeSettingsGroup : MOSettingsGroup

@property (nonatomic, retain) NSNumber *requireAutomaticDateAndTime;

+ (id)groupName;
+ (id)requireAutomaticDateAndTimeMetadata;

- (id)requireAutomaticDateAndTime;
- (void)setRequireAutomaticDateAndTime:(id)arg1;

@end
