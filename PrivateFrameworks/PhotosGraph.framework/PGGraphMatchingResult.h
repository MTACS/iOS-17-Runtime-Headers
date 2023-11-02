
@interface PGGraphMatchingResult : NSObject <NSCopying> {
    NSMutableDictionary * _context;
    PGGraphNode<PGGraphRelatableEvent> * _event;
    NSDictionary * _keywords;
    double  _score;
}

@property (nonatomic, readonly) NSMutableDictionary *context;
@property (nonatomic, readonly) PGGraphNode<PGGraphRelatableEvent> *event;
@property (nonatomic, readonly) NSDictionary *keywords;
@property (nonatomic) double score;

+ (id)matchingDescriptionWithEventNode:(id)arg1;

- (void).cxx_destruct;
- (id)_contextItemsSortedByScoreAscending:(bool)arg1;
- (id)_highestScoredContextItemWithPreferredRelatedType:(unsigned long long)arg1;
- (void)addKeywords:(id)arg1 forRelatedType:(unsigned long long)arg2;
- (void)clearKeywordsForRelatedType:(unsigned long long)arg1;
- (id)context;
- (id)contextItemForRelatedType:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)enumerateContextItems:(id /* block */)arg1;
- (id)event;
- (unsigned long long)hash;
- (id)initWithEvent:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToResult:(id)arg1;
- (id)keywords;
- (id)keywordsForRelatedType:(unsigned long long)arg1;
- (id)localEndDate;
- (id)localStartDate;
- (double)score;
- (void)setContextItem:(id)arg1 forRelatedType:(unsigned long long)arg2;
- (void)setScore:(double)arg1;
- (id)sortedCriteria;

@end
