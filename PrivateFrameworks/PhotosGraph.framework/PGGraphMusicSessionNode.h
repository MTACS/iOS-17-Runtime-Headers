
@interface PGGraphMusicSessionNode : PGGraphOptimizedNode {
    NSDate * _localEndDate;
    NSDate * _localStartDate;
}

@property (nonatomic, readonly) NSDate *localEndDate;
@property (nonatomic, readonly) NSDate *localStartDate;
@property (nonatomic, readonly) NSSet *trackNodes;

+ (id)momentOfMusicSession;
+ (id)musicSessionDateSortDescriptors;

- (void).cxx_destruct;
- (id)description;
- (unsigned short)domain;
- (void)enumerateMusicTrackNodesUsingBlock:(id /* block */)arg1;
- (bool)hasProperties:(id)arg1;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3;
- (id)initWithLocalStartDate:(id)arg1 localEndDate:(id)arg2;
- (id)label;
- (id)localEndDate;
- (id)localStartDate;
- (id)momentNodes;
- (id)propertyDictionary;
- (id)trackNodes;

@end
