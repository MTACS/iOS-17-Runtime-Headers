
@interface MRURecommendation : NSObject <MRRouteRecommendation> {
    long long  _classification;
    NSString * _reason;
    MRIRRoute * _route;
    NSNumber * _sortingHint;
}

@property (nonatomic) long long classification;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *reason;
@property (nonatomic, retain) MRIRRoute *route;
@property (nonatomic, copy) NSNumber *sortingHint;
@property (readonly) Class superclass;

+ (id)recommendationWithIRCandidateResult:(id)arg1;

- (void).cxx_destruct;
- (long long)classification;
- (id)description;
- (id)reason;
- (id)route;
- (void)setClassification:(long long)arg1;
- (void)setReason:(id)arg1;
- (void)setRoute:(id)arg1;
- (void)setSortingHint:(id)arg1;
- (id)sortingHint;

@end
