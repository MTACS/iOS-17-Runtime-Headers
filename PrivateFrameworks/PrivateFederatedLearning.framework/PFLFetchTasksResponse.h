
@interface PFLFetchTasksResponse : PBCodable <CKCodeOperationMessageMutation, NSCopying> {
    NSMutableArray * _tasks;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *tasks;

+ (Class)tasksType;

- (void).cxx_destruct;
- (void)addTasks:(id)arg1;
- (void)clearTasks;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setTasks:(id)arg1;
- (id)tasks;
- (id)tasksAtIndex:(unsigned long long)arg1;
- (unsigned long long)tasksCount;
- (void)writeTo:(id)arg1;

@end
