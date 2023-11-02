
@interface SGBinaryClassificationModel : SGModel <PMLPlistAndChunksSerializableProtocol> {
    double  _threshold;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <PMLMultiLabelClassifierProtocol><PMLPlistAndChunksSerializableProtocol> *model;
@property (readonly) Class superclass;
@property (readonly) double threshold;

+ (id)modelForPath:(id)arg1 modelClass:(Class)arg2;
+ (id)modelFromMobileAssetForEntity:(id)arg1 type:(id)arg2 language:(id)arg3 class:(Class)arg4;
+ (id)modelFromMobileAssetForName:(id)arg1 language:(id)arg2;

- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)predictLabelForInput:(id)arg1;
- (id)serialize;
- (double)threshold;
- (id)toPlistWithChunks:(id)arg1;

@end
