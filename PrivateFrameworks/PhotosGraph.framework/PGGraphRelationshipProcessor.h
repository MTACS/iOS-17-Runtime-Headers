
@interface PGGraphRelationshipProcessor : NSObject {
    NSMutableArray * _analyzersToRun;
    NSMutableDictionary * _childScoreByPersonLocalIdentifier;
    NSSet * _contactIdentifiers;
    NSMutableDictionary * _coworkerScoreByPersonLocalIdentifier;
    NSMutableDictionary * _familyScoreByPersonLocalIdentifier;
    NSMutableDictionary * _friendScoreByPersonLocalIdentifier;
    PGGraph * _graph;
    PGGraphMomentNodeCollection * _momentNodes;
    unsigned long long  _numberOfSignals;
    NSMutableDictionary * _parentScoreByPersonLocalIdentifier;
    NSMutableDictionary * _partnerScoreByPersonLocalIdentifier;
    NSDictionary * _personLocalIdentifierByContactIdentifier;
    PGGraphPersonNodeCollection * _personNodes;
    NSMutableDictionary * _relationshipAnalyzerPropertiesByPersonLocalIdentifier;
    unsigned long long  _runOptions;
}

@property (nonatomic, retain) NSMutableArray *analyzersToRun;
@property (nonatomic, retain) NSMutableDictionary *childScoreByPersonLocalIdentifier;
@property (nonatomic, readonly) NSSet *contactIdentifiers;
@property (nonatomic, retain) NSMutableDictionary *coworkerScoreByPersonLocalIdentifier;
@property (nonatomic, retain) NSMutableDictionary *familyScoreByPersonLocalIdentifier;
@property (nonatomic, retain) NSMutableDictionary *friendScoreByPersonLocalIdentifier;
@property (nonatomic, readonly) PGGraph *graph;
@property (nonatomic, readonly) PGGraphMomentNodeCollection *momentNodes;
@property (nonatomic, readonly) unsigned long long numberOfSignals;
@property (nonatomic, retain) NSMutableDictionary *parentScoreByPersonLocalIdentifier;
@property (nonatomic, retain) NSMutableDictionary *partnerScoreByPersonLocalIdentifier;
@property (nonatomic, readonly) NSDictionary *personLocalIdentifierByContactIdentifier;
@property (nonatomic, readonly) PGGraphPersonNodeCollection *personNodes;
@property (nonatomic, retain) NSMutableDictionary *relationshipAnalyzerPropertiesByPersonLocalIdentifier;
@property (nonatomic, readonly) unsigned long long runOptions;

- (void).cxx_destruct;
- (void)_aggregateScores;
- (void)_enumerateInferredChildrenUsingBlock:(id /* block */)arg1;
- (void)_enumerateInferredCoworkersUsingBlock:(id /* block */)arg1;
- (void)_enumerateInferredFamilyMembersUsingBlock:(id /* block */)arg1;
- (void)_enumerateInferredFriendsUsingBlock:(id /* block */)arg1;
- (void)_enumerateInferredParentsUsingBlock:(id /* block */)arg1;
- (void)_enumerateInferredPartnerUsingBlock:(id /* block */)arg1;
- (void)_enumerateInferredRelationshipMembersFromScores:(id)arg1 cumulativeThreshold:(double)arg2 minimumConfidence:(double)arg3 usingBlock:(id /* block */)arg4;
- (void)_extractSignalsFromRunOptions;
- (id)_socialGroupNodesIncludingPersonLocalIdentifiers:(id)arg1 minimumMatches:(unsigned long long)arg2 amongSocialGroupNodes:(id)arg3;
- (id)analyzersToRun;
- (id)childScoreByPersonLocalIdentifier;
- (id)contactIdentifiers;
- (id)coworkerScoreByPersonLocalIdentifier;
- (void)enumerateInferredRelationshipsUsingBlock:(id /* block */)arg1;
- (id)familyScoreByPersonLocalIdentifier;
- (id)friendScoreByPersonLocalIdentifier;
- (id)graph;
- (id)initWithPersonNodes:(id)arg1 runOptions:(unsigned long long)arg2;
- (id)momentNodes;
- (unsigned long long)numberOfSignals;
- (id)parentScoreByPersonLocalIdentifier;
- (id)partnerScoreByPersonLocalIdentifier;
- (id)personLocalIdentifierByContactIdentifier;
- (id)personLocalIdentifierForContactIdentifier:(id)arg1;
- (id)personNodes;
- (id)relationshipAnalyzerPropertiesByPersonLocalIdentifier;
- (id)relationshipAnalyzerPropertiesForPersonLocalIdentifier:(id)arg1;
- (unsigned long long)runOptions;
- (void)runRelationshipAnalysisWithLoggingConnection:(id)arg1 progressBlock:(id /* block */)arg2;
- (void)setAnalyzersToRun:(id)arg1;
- (void)setChildScoreByPersonLocalIdentifier:(id)arg1;
- (void)setCoworkerScoreByPersonLocalIdentifier:(id)arg1;
- (void)setFamilyScoreByPersonLocalIdentifier:(id)arg1;
- (void)setFriendScoreByPersonLocalIdentifier:(id)arg1;
- (void)setParentScoreByPersonLocalIdentifier:(id)arg1;
- (void)setPartnerScoreByPersonLocalIdentifier:(id)arg1;
- (void)setRelationshipAnalyzerPropertiesByPersonLocalIdentifier:(id)arg1;

@end
