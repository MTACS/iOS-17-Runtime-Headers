
@interface PPSocialHighlightMLScorer : NSObject <PPSocialHighlightScorer> {
    MLModel * _model;
    NSObject<OS_dispatch_queue> * _modelQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_oneHotEncodeString:(id)arg1 columns:(id)arg2 prefix:(id)arg3;
+ (id)_scorerFromModelFactorName:(id)arg1;
+ (id)_singleItemMultiArrayValueWithConstantValue:(double)arg1;
+ (id)clientEncodingForClientId:(id)arg1 applicationIdentifiers:(id)arg2;
+ (id)sharedFirstPassInstance;
+ (id)sharedTopKInstance;
+ (id)variantEncodingForVariant:(id)arg1;

- (void).cxx_destruct;
- (id)initWithModel:(id)arg1;
- (double)scoreSocialHighlight:(id)arg1;

@end
