
@interface IRProximityPrerequisite : NSObject {
    bool  _anyCandidateInProximity;
    NSDictionary * _proximityPerCandiate;
}

@property (nonatomic) bool anyCandidateInProximity;
@property (nonatomic, retain) NSDictionary *proximityPerCandiate;

- (void).cxx_destruct;
- (bool)anyCandidateInProximity;
- (id)proximityPerCandiate;
- (void)setAnyCandidateInProximity:(bool)arg1;
- (void)setProximityPerCandiate:(id)arg1;

@end
