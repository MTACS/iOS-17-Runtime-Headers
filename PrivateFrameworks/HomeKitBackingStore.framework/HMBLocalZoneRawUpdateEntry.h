
@interface HMBLocalZoneRawUpdateEntry : HMFObject {
    NSData * _encoded;
    HMBModel * _model;
}

@property (nonatomic, retain) NSData *encoded;
@property (nonatomic, retain) HMBModel *model;

- (void).cxx_destruct;
- (id)encoded;
- (id)initWithModel:(id)arg1 encoded:(id)arg2;
- (id)model;
- (void)setEncoded:(id)arg1;
- (void)setModel:(id)arg1;

@end
