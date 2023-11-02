
@interface NTFeedTransformationIncrementalPersonalizedDiversifiedLimit : NSObject <FCFeedTransforming> {
    NSArray * _priorFeedItems;
    <FCFeedTransforming> * _privateLimitTransformation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *priorFeedItems;
@property (nonatomic, retain) <FCFeedTransforming> *privateLimitTransformation;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)initWithFunctionProvider:(id)arg1 limit:(unsigned long long)arg2 priorFeedItems:(id)arg3;
- (id)priorFeedItems;
- (id)privateLimitTransformation;
- (void)setPriorFeedItems:(id)arg1;
- (void)setPrivateLimitTransformation:(id)arg1;
- (id)transformFeedItems:(id)arg1;

@end
