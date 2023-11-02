
@interface HMBLocalZoneProcessModelContext : HMFObject {
    NSData * _externalData;
    HMBModel * _model;
    NSNumber * _outputBlockRow;
}

@property (nonatomic, readonly) NSData *externalData;
@property (nonatomic, readonly) HMBModel *model;
@property (nonatomic, readonly, copy) NSNumber *outputBlockRow;

- (void).cxx_destruct;
- (id)externalData;
- (id)initWithModel:(id)arg1 outputBlockRow:(id)arg2 externalData:(id)arg3;
- (id)model;
- (id)outputBlockRow;

@end
