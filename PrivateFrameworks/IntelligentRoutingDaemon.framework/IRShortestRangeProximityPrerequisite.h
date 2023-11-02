
@interface IRShortestRangeProximityPrerequisite : NSObject {
    bool  _anyCandidateMeetsCondition;
    NSNumber * _shortestRange;
    NSString * _shortestRangeCandidateIdentifier;
}

@property (nonatomic) bool anyCandidateMeetsCondition;
@property (nonatomic, retain) NSNumber *shortestRange;
@property (nonatomic, retain) NSString *shortestRangeCandidateIdentifier;

- (void).cxx_destruct;
- (bool)anyCandidateMeetsCondition;
- (void)setAnyCandidateMeetsCondition:(bool)arg1;
- (void)setShortestRange:(id)arg1;
- (void)setShortestRangeCandidateIdentifier:(id)arg1;
- (id)shortestRange;
- (id)shortestRangeCandidateIdentifier;

@end
