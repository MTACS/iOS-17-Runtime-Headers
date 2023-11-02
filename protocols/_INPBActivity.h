
@protocol _INPBActivity <NSObject>

@required

+ (Class)activityDescriptorsType;

- (NSArray *)activityDescriptors;
- (_INPBString *)activityDescriptorsAtIndex:(unsigned long long)arg1;
- (unsigned long long)activityDescriptorsCount;
- (_INPBString *)activityType;
- (void)addActivityDescriptors:(_INPBString *)arg1;
- (void)clearActivityDescriptors;
- (bool)hasActivityType;
- (void)setActivityDescriptors:(NSArray *)arg1;
- (void)setActivityType:(_INPBString *)arg1;

@end
