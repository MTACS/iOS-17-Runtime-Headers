
@interface HMBLocalSQLContextOutputBlock : HMFObject <HMFLogging> {
    HMFActivity * _activity;
    unsigned long long  _blockRow;
    NSString * _identifier;
    HMBLocalSQLContext * _owner;
    unsigned long long  _zoneRow;
}

@property (nonatomic, readonly) HMFActivity *activity;
@property (nonatomic) unsigned long long blockRow;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) HMBLocalSQLContext *owner;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long zoneRow;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)abort;
- (id)activity;
- (unsigned long long)blockRow;
- (id)commit:(id)arg1;
- (id)identifier;
- (id)initWithOwner:(id)arg1 identifier:(id)arg2 zoneRow:(unsigned long long)arg3 blockRow:(unsigned long long)arg4;
- (id)logIdentifier;
- (id)owner;
- (void)setBlockRow:(unsigned long long)arg1;
- (void)setOwner:(id)arg1;
- (id)updateModelID:(id)arg1 modelEncoding:(unsigned long long)arg2 modelData:(id)arg3;
- (unsigned long long)zoneRow;

@end
