
@protocol _INPBHomeEntityResponse <NSObject>

@required

+ (Class)taskResponsesType;

- (void)addTaskResponses:(_INPBHomeUserTaskResponse *)arg1;
- (void)clearTaskResponses;
- (_INPBHomeEntity *)entity;
- (bool)hasEntity;
- (void)setEntity:(_INPBHomeEntity *)arg1;
- (void)setTaskResponses:(NSArray *)arg1;
- (NSArray *)taskResponses;
- (_INPBHomeUserTaskResponse *)taskResponsesAtIndex:(unsigned long long)arg1;
- (unsigned long long)taskResponsesCount;

@end
