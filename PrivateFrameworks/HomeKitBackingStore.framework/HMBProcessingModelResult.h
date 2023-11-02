
@interface HMBProcessingModelResult : HMFObject {
    NAFuture * _mirrorOutputFuture;
    HMBModel * _model;
    HMBProcessingOptions * _options;
}

@property (readonly) NAFuture *mirrorOutputFuture;
@property (readonly) HMBModel *model;
@property (readonly) HMBProcessingOptions *options;

+ (id)alloc;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithModel:(id)arg1 options:(id)arg2 mirrorOutputFuture:(id)arg3;
- (id)mirrorOutputFuture;
- (id)model;
- (id)options;

@end
