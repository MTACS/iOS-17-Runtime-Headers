
@interface HMBLocalSQLContextRowRecord : HMFObject {
    NSData * _externalData;
    NSData * _externalID;
    NSData * _modelData;
    unsigned long long  _modelEncoding;
    NSUUID * _modelID;
    NSUUID * _modelSchema;
    NSString * _modelType;
    NSNumber * _pushBlockRow;
    NSData * _pushData;
    unsigned long long  _pushEncoding;
    unsigned long long  _recordRow;
}

@property (nonatomic, readonly) NSData *externalData;
@property (nonatomic, readonly) NSData *externalID;
@property (nonatomic, readonly) NSData *modelData;
@property (nonatomic, readonly) unsigned long long modelEncoding;
@property (nonatomic, readonly) NSUUID *modelID;
@property (nonatomic, readonly) NSUUID *modelSchema;
@property (nonatomic, readonly) NSString *modelType;
@property (nonatomic, readonly) NSNumber *pushBlockRow;
@property (nonatomic, readonly) NSData *pushData;
@property (nonatomic, readonly) unsigned long long pushEncoding;
@property (nonatomic, readonly) unsigned long long recordRow;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)externalData;
- (id)externalID;
- (id)initWithRecordRow:(unsigned long long)arg1 externalID:(id)arg2 externalData:(id)arg3 modelID:(id)arg4 modelEncoding:(unsigned long long)arg5 modelData:(id)arg6 modelSchema:(id)arg7 modelType:(id)arg8 pushEncoding:(unsigned long long)arg9 pushData:(id)arg10 pushBlockRow:(id)arg11;
- (id)initWithStatement:(struct sqlite3_stmt { }*)arg1 returning:(unsigned long long)arg2;
- (id)modelData;
- (unsigned long long)modelEncoding;
- (id)modelID;
- (id)modelSchema;
- (id)modelType;
- (id)pushBlockRow;
- (id)pushData;
- (unsigned long long)pushEncoding;
- (unsigned long long)recordRow;

@end
