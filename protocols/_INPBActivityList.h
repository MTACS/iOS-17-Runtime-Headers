
@protocol _INPBActivityList <NSObject>

@required

+ (Class)activityType;

- (NSArray *)activities;
- (unsigned long long)activitiesCount;
- (_INPBActivity *)activityAtIndex:(unsigned long long)arg1;
- (void)addActivity:(_INPBActivity *)arg1;
- (void)clearActivities;
- (_INPBCondition *)condition;
- (bool)hasCondition;
- (void)setActivities:(NSArray *)arg1;
- (void)setCondition:(_INPBCondition *)arg1;

@end
