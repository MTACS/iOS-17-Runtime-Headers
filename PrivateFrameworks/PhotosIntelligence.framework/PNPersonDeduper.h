
@interface PNPersonDeduper : NSObject {
    <PNPersonPromoterDelegate> * _delegate;
    NSDictionary * _invalidCandidatesMapping;
    PNPersonClusterManager * _personClusterManager;
    PNPersonPromoter * _personPromoter;
    PNPetPromoter * _petPromoter;
    PNPersonDeduperProfile * _profile;
}

@property (nonatomic) <PNPersonPromoterDelegate> *delegate;
@property (nonatomic) PNPersonPromoter *personPromoter;
@property (nonatomic) PNPetPromoter *petPromoter;

- (void).cxx_destruct;
- (void)_executeStepsInSequences:(id)arg1 forPersons:(id)arg2 andOtherPersons:(id)arg3 updateBlock:(id /* block */)arg4 resultBlock:(id /* block */)arg5;
- (id)basicSequence;
- (id)dedupeNewVerifiedPersons:(id)arg1 withExistingVerifiedPersons:(id)arg2 updateBlock:(id /* block */)arg3;
- (id)dedupeUnverifiedPersons:(id)arg1 updateBlock:(id /* block */)arg2;
- (id)dedupeUnverifiedPersons:(id)arg1 withVerifiedPersons:(id)arg2 updateBlock:(id /* block */)arg3;
- (id)delegate;
- (id)initWithPersonClusterManager:(id)arg1 andInvalidCandidatesMapping:(id)arg2 profile:(id)arg3;
- (id)personPromoter;
- (id)petPromoter;
- (void)setDelegate:(id)arg1;
- (void)setPersonPromoter:(id)arg1;
- (void)setPetPromoter:(id)arg1;

@end
