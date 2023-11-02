
@interface HMBLocalSQLContextRowItem : HMFObject {
    NSData * _externalData;
    NSData * _externalID;
    unsigned long long  _itemRow;
    NSData * _modelData;
    unsigned long long  _modelEncoding;
}

@property (nonatomic, readonly) NSData *externalData;
@property (nonatomic, readonly) NSData *externalID;
@property (nonatomic, readonly) unsigned long long itemRow;
@property (nonatomic, readonly) NSData *modelData;
@property (nonatomic, readonly) unsigned long long modelEncoding;

- (void).cxx_destruct;
- (id)description;
- (id)externalData;
- (id)externalID;
- (id)initWithItemRow:(unsigned long long)arg1 externalID:(id)arg2 externalData:(id)arg3 modelEncoding:(unsigned long long)arg4 modelData:(id)arg5;
- (id)initWithStatement:(struct sqlite3_stmt { }*)arg1 returning:(unsigned long long)arg2;
- (unsigned long long)itemRow;
- (id)modelData;
- (unsigned long long)modelEncoding;

@end
