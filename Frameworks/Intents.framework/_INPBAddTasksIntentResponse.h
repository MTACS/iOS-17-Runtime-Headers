
@interface _INPBAddTasksIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBAddTasksIntentResponse> {
    NSArray * _addedTasks;
    struct { }  _has;
    _INPBTaskList * _modifiedTaskList;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _warnings;
}

@property (nonatomic, copy) NSArray *addedTasks;
@property (nonatomic, readonly) unsigned long long addedTasksCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasModifiedTaskList;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBTaskList *modifiedTaskList;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int*warnings;
@property (nonatomic, readonly) unsigned long long warningsCount;

+ (Class)addedTasksType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsWarnings:(id)arg1;
- (void)addAddedTasks:(id)arg1;
- (void)addWarnings:(int)arg1;
- (id)addedTasks;
- (id)addedTasksAtIndex:(unsigned long long)arg1;
- (unsigned long long)addedTasksCount;
- (void)clearAddedTasks;
- (void)clearWarnings;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasModifiedTaskList;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)modifiedTaskList;
- (bool)readFrom:(id)arg1;
- (void)setAddedTasks:(id)arg1;
- (void)setModifiedTaskList:(id)arg1;
- (void)setWarnings:(int*)arg1 count:(unsigned long long)arg2;
- (int*)warnings;
- (id)warningsAsString:(int)arg1;
- (int)warningsAtIndex:(unsigned long long)arg1;
- (unsigned long long)warningsCount;
- (void)writeTo:(id)arg1;

@end
