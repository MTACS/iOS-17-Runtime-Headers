
@interface FCFeedTransformationPersonalizedDiversifiedLimit : NSObject <FCLimitAwareFeedTransforming> {
    <FCPersonalizationFunctionProviding> * _functionProvider;
    unsigned long long  _limit;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <FCPersonalizationFunctionProviding> *functionProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long limit;
@property (readonly) Class superclass;

+ (id)transformationWithFunctionProvider:(id)arg1;
+ (id)transformationWithFunctionProvider:(id)arg1 limit:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)functionProvider;
- (unsigned long long)limit;
- (void)setFunctionProvider:(id)arg1;
- (void)setLimit:(unsigned long long)arg1;
- (id)transformFeedItems:(id)arg1;
- (id)transformFeedItems:(id)arg1 withRespectToLimit:(unsigned long long)arg2;

@end
