
@interface SNLPFeatureStoreUtilities : NSObject

+ (bool)_insertToFeatureStoreWithJSONString:(id)arg1 interactionIdentifier:(id)arg2 streamIdentifier:(id)arg3;
+ (bool)_insertToFeatureStoreWithProtobufObject:(id)arg1 interactionIdentifier:(id)arg2 streamIdentifier:(id)arg3;
+ (id)_jsonStringFromProtobufObject:(id)arg1;
+ (bool)insertToFeatureStoreWithITFMAssertVersion:(id)arg1 interactionIdentifier:(id)arg2 itfmModelType:(unsigned long long)arg3;
+ (bool)insertToFeatureStoreWithITFMContextResponse:(id)arg1 interactionIdentifier:(id)arg2 itfmModelType:(unsigned long long)arg3;
+ (bool)insertToFeatureStoreWithITFMExecutedHandcraftedRules:(id)arg1 interactionIdentifier:(id)arg2 itfmModelType:(unsigned long long)arg3;
+ (bool)insertToFeatureStoreWithITFMSpanResponse:(id)arg1 interactionIdentifier:(id)arg2 itfmModelType:(unsigned long long)arg3;
+ (bool)insertToFeatureStoreWithNLv4AssertVersion:(id)arg1 interactionIdentifier:(id)arg2;
+ (bool)insertToFeatureStoreWithNLv4ContextResponse:(id)arg1 interactionIdentifier:(id)arg2;
+ (bool)insertToFeatureStoreWithNLv4ExecutedHandcraftedRules:(id)arg1 interactionIdentifier:(id)arg2;
+ (bool)insertToFeatureStoreWithNLv4SpanResponse:(id)arg1 interactionIdentifier:(id)arg2;
+ (bool)insertToFeatureStoreWithSSUEncodingResult:(id)arg1 interactionIdentifier:(id)arg2;
+ (unsigned long long)itfmModelTypeForSNLPComponent:(const int*)arg1;

@end
