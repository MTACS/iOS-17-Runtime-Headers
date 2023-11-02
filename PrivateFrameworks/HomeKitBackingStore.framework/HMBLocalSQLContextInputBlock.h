
@interface HMBLocalSQLContextInputBlock : HMFObject <HMFLogging> {
    HMFActivity * _activity;
    unsigned long long  _blockRow;
    NSString * _identifier;
    HMBLocalSQLContext * _owner;
    unsigned long long  _type;
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
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) unsigned long long zoneRow;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)abort;
- (id)activity;
- (id)attributeDescriptions;
- (unsigned long long)blockRow;
- (id)commit:(id)arg1;
- (id)identifier;
- (id)initWithOwner:(id)arg1 identifier:(id)arg2 zoneRow:(unsigned long long)arg3 blockRow:(unsigned long long)arg4 type:(unsigned long long)arg5;
- (id)insertExternalID:(id)arg1 externalData:(id)arg2 modelEncoding:(unsigned long long)arg3 modelData:(id)arg4;
- (id)logIdentifier;
- (id)owner;
- (void)setBlockRow:(unsigned long long)arg1;
- (void)setOwner:(id)arg1;
- (unsigned long long)type;
- (id)updateExternalID:(id)arg1 externalData:(id)arg2 modelEncoding:(unsigned long long)arg3 modelData:(id)arg4;
- (unsigned long long)zoneRow;

@end
