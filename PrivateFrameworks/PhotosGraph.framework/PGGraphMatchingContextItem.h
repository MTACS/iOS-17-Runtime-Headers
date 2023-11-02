
@interface PGGraphMatchingContextItem : NSObject {
    NSSet * _contextNodes;
    unsigned long long  _criteria;
    NSDate * _localEndDate;
    NSDate * _localStartDate;
    PGGraphNode * _matchedNode;
    PGGraphNode * _referenceNode;
    unsigned long long  _relatedType;
    double  _score;
}

@property (nonatomic, readonly) NSSet *contextNodes;
@property (nonatomic) unsigned long long criteria;
@property (nonatomic, readonly) NSDate *localEndDate;
@property (nonatomic, readonly) NSDate *localStartDate;
@property (nonatomic, readonly) PGGraphNode *matchedNode;
@property (nonatomic, readonly) PGGraphNode *referenceNode;
@property (nonatomic, readonly) unsigned long long relatedType;
@property (nonatomic) double score;

+ (id)contextItemWithRelatedType:(unsigned long long)arg1 score:(double)arg2 criteria:(unsigned long long)arg3 referenceNode:(id)arg4 matchedNode:(id)arg5 contextNodes:(id)arg6;
+ (unsigned long long)criteriaForLocationLabel:(id)arg1;

- (void).cxx_destruct;
- (void)_findLocalStartAndEndDate;
- (id)_matchedAddressNode;
- (id)contextNodes;
- (unsigned long long)criteria;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)initWithRelatedType:(unsigned long long)arg1 score:(double)arg2 criteria:(unsigned long long)arg3 referenceNode:(id)arg4 matchedNode:(id)arg5 contextNodes:(id)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToContextItem:(id)arg1;
- (id)localEndDate;
- (id)localStartDate;
- (id)matchedNode;
- (id)referenceNode;
- (unsigned long long)relatedType;
- (double)score;
- (void)setCriteria:(unsigned long long)arg1;
- (void)setScore:(double)arg1;

@end
