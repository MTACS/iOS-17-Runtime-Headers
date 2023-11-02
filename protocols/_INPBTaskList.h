
@protocol _INPBTaskList <NSObject>

@required

+ (Class)tasksType;

- (void)addTasks:(_INPBTask *)arg1;
- (void)clearTasks;
- (_INPBDateTime *)createdDateTime;
- (_INPBDataString *)groupName;
- (bool)hasCreatedDateTime;
- (bool)hasGroupName;
- (bool)hasIdentifier;
- (bool)hasModifiedDateTime;
- (bool)hasTitle;
- (NSString *)identifier;
- (_INPBDateTime *)modifiedDateTime;
- (void)setCreatedDateTime:(_INPBDateTime *)arg1;
- (void)setGroupName:(_INPBDataString *)arg1;
- (void)setIdentifier:(NSString *)arg1;
- (void)setModifiedDateTime:(_INPBDateTime *)arg1;
- (void)setTasks:(NSArray *)arg1;
- (void)setTitle:(_INPBDataString *)arg1;
- (NSArray *)tasks;
- (_INPBTask *)tasksAtIndex:(unsigned long long)arg1;
- (unsigned long long)tasksCount;
- (_INPBDataString *)title;

@end
