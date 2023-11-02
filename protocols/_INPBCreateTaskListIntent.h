
@protocol _INPBCreateTaskListIntent <NSObject>

@required

+ (Class)taskTitlesType;

- (void)addTaskTitles:(_INPBDataString *)arg1;
- (void)clearTaskTitles;
- (_INPBDataString *)groupName;
- (bool)hasGroupName;
- (bool)hasIntentMetadata;
- (bool)hasTitle;
- (_INPBIntentMetadata *)intentMetadata;
- (void)setGroupName:(_INPBDataString *)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setTaskTitles:(NSArray *)arg1;
- (void)setTitle:(_INPBDataString *)arg1;
- (NSArray *)taskTitles;
- (_INPBDataString *)taskTitlesAtIndex:(unsigned long long)arg1;
- (unsigned long long)taskTitlesCount;
- (_INPBDataString *)title;

@end
