
@interface HMBLocalSQLContextRecord : HMFObject {
    NSData * _externalID;
    HMBModel * _model;
}

@property (nonatomic, readonly) NSData *externalID;
@property (nonatomic, readonly) HMBModel *model;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)externalID;
- (id)initWithModel:(id)arg1 externalID:(id)arg2;
- (id)model;

@end
