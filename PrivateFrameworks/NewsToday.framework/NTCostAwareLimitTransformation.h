
@interface NTCostAwareLimitTransformation : NSObject <NTFeedTransforming> {
    id /* block */  _appraiser;
    double  _budget;
    NSDictionary * _costByFeedItemIDsForLastTransformation;
    double  _costOfFeedItemsForLastTransformation;
}

@property (nonatomic, readonly, copy) id /* block */ appraiser;
@property (nonatomic, readonly) double budget;
@property (nonatomic, copy) NSDictionary *costByFeedItemIDsForLastTransformation;
@property (nonatomic) double costOfFeedItemsForLastTransformation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)appraiser;
- (double)budget;
- (id)costByFeedItemIDsForLastTransformation;
- (double)costOfFeedItemsForLastTransformation;
- (id)init;
- (id)initWithBudget:(double)arg1 appraiser:(id /* block */)arg2;
- (void)setCostByFeedItemIDsForLastTransformation:(id)arg1;
- (void)setCostOfFeedItemsForLastTransformation:(double)arg1;
- (id)transformFeedItems:(id)arg1;

@end
