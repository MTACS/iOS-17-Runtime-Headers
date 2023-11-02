
@interface _INPBDeleteTasksIntent : PBCodable <NSCopying, NSSecureCoding, _INPBDeleteTasksIntent> {
    bool  _all;
    struct { 
        unsigned int all : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    _INPBTaskList * _taskList;
    NSArray * _tasks;
}

@property (nonatomic) bool all;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasAll;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasTaskList;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBTaskList *taskList;
@property (nonatomic, copy) NSArray *tasks;
@property (nonatomic, readonly) unsigned long long tasksCount;

+ (bool)supportsSecureCoding;
+ (Class)tasksType;

- (void).cxx_destruct;
- (void)addTasks:(id)arg1;
- (bool)all;
- (void)clearTasks;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAll;
- (bool)hasIntentMetadata;
- (bool)hasTaskList;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAll:(bool)arg1;
- (void)setHasAll:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setTaskList:(id)arg1;
- (void)setTasks:(id)arg1;
- (id)taskList;
- (id)tasks;
- (id)tasksAtIndex:(unsigned long long)arg1;
- (unsigned long long)tasksCount;
- (void)writeTo:(id)arg1;

@end
