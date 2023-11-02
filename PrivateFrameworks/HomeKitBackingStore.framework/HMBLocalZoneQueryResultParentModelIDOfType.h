
@interface HMBLocalZoneQueryResultParentModelIDOfType : HMBLocalZoneQueryResultRecordColumns {
    NSString * _modelClassName;
    int  _modelClassNameOffset;
    NSUUID * _parentModelID;
    int  _parentModelIDOffset;
}

@property (nonatomic, readonly) NSString *modelClassName;
@property (nonatomic, readonly) int modelClassNameOffset;
@property (nonatomic, readonly) NSUUID *parentModelID;
@property (nonatomic, readonly) int parentModelIDOffset;

- (void).cxx_destruct;
- (bool)bindPropertiesToStatement:(struct sqlite3_stmt { }*)arg1 error:(id*)arg2;
- (id)initWithLocalZone:(id)arg1 parentModelID:(id)arg2 modelClassName:(id)arg3;
- (id)modelClassName;
- (int)modelClassNameOffset;
- (id)parentModelID;
- (int)parentModelIDOffset;

@end
