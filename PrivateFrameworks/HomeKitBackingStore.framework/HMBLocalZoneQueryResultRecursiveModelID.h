
@interface HMBLocalZoneQueryResultRecursiveModelID : HMBLocalZoneQueryResultRecordColumns {
    NSMutableOrderedSet * _modelStack;
    NSUUID * _parentModelID;
    int  _parentModelIDOffset;
    NSMutableSet * _returnedModels;
}

@property (nonatomic, readonly) NSMutableOrderedSet *modelStack;
@property (nonatomic, retain) NSUUID *parentModelID;
@property (nonatomic, readonly) int parentModelIDOffset;
@property (nonatomic, readonly) NSMutableSet *returnedModels;

- (void).cxx_destruct;
- (bool)bindPropertiesToStatement:(struct sqlite3_stmt { }*)arg1 error:(id*)arg2;
- (id)initWithLocalZone:(id)arg1 modelID:(id)arg2;
- (id)modelStack;
- (id)nextObject;
- (id)parentModelID;
- (int)parentModelIDOffset;
- (id)returnedModels;
- (void)setParentModelID:(id)arg1;

@end
