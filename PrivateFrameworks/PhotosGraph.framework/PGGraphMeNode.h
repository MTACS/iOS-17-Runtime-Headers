
@interface PGGraphMeNode : PGGraphPersonNode

+ (id)filter;
+ (id)inferredPersonOfMe;

- (void)_enumerateRelationshipWithLabel:(id)arg1 matchingQuery:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (void)_enumerateSocialGroupNodesForRelationshipLabel:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)_relationshipLabelForRelationship:(unsigned long long)arg1;
- (bool)_status:(unsigned long long)arg1 fitsQuery:(unsigned long long)arg2;
- (void)enumeratePersonNodesWithRelationship:(unsigned long long)arg1 matchingQuery:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateSocialGroupNodesWithRelationship:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (id)inferredPersonNode;
- (id)label;
- (id)relationshipEdgesToPersonNode:(id)arg1 matchingQuery:(unsigned long long)arg2;

@end
