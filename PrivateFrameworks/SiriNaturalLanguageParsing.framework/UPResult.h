
@interface UPResult : NSObject {
    NSArray * __candidates;
    NSUUID * _queryUUID;
}

@property (nonatomic, readonly, copy) NSArray *_candidates;
@property (readonly) SIRINLUINTERNALUAAP_PARSERUaaPParserResponse *protobufRepresentation;
@property (readonly, copy) NSUUID *queryUUID;
@property (readonly, copy) UPResultRootNode *rootNode;

+ (id)createResultFromExistingResult:(id)arg1 truncatedTo:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)_candidates;
- (id)candidateAtRank:(long long)arg1;
- (long long)candidateCount;
- (id)initWithCandidates:(id)arg1 queryUUID:(id)arg2;
- (id)protobufRepresentation;
- (id)queryUUID;
- (id)rootNode;

@end
