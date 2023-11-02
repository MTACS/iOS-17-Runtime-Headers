
@interface HMBProcessingModelUpdate : HMBProcessingModelResult {
    HMBModel * _previousModel;
}

@property (readonly) HMBModel *previousModel;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithModel:(id)arg1 previousModel:(id)arg2 options:(id)arg3 mirrorOutputFuture:(id)arg4;
- (id)previousModel;

@end
