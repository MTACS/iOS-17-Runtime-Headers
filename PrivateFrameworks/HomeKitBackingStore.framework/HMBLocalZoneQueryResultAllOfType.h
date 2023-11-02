
@interface HMBLocalZoneQueryResultAllOfType : HMBLocalZoneQueryResultRecordColumns {
    NSString * _modelClassName;
    int  _modelClassNameOffset;
}

@property (nonatomic, readonly) NSString *modelClassName;
@property (nonatomic, readonly) int modelClassNameOffset;

- (void).cxx_destruct;
- (bool)bindPropertiesToStatement:(struct sqlite3_stmt { }*)arg1 error:(id*)arg2;
- (id)initWithLocalZone:(id)arg1 modelClassName:(id)arg2;
- (id)modelClassName;
- (int)modelClassNameOffset;

@end
