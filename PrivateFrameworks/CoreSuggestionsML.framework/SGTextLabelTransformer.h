
@interface SGTextLabelTransformer : NSObject <PMLTransformerProtocol> {
    SGStringLabelingTransformer * _labeler;
    SGStringPreprocessingTransformer * _preprocessor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_preprocessedLabelsWithLabels:(id)arg1 andPreprocessor:(id)arg2;
+ (id)withMethods:(id)arg1 withLabelStrings:(id)arg2;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithMethods:(id)arg1 withLabelStrings:(id)arg2;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)initWithPreprocessor:(id)arg1 labeler:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTextLabelTransformer:(id)arg1;
- (id)toPlistWithChunks:(id)arg1;
- (id)transform:(id)arg1;

@end
