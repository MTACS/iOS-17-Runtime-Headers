
@interface _MLCANEDomTree : NSObject {
    NSDictionary * _dominationTree;
}

@property (nonatomic, readonly, retain) NSDictionary *dominationTree;

+ (id)computeDominationForGraph:(id)arg1;
+ (id)computeDominationForGraphImpl:(id)arg1;
+ (void)computeDominationForLayer:(id)arg1 dominationTree:(id)arg2;

- (void).cxx_destruct;
- (bool)doesLayer:(id)arg1 dominates:(id)arg2;
- (bool)doesLayer:(id)arg1 dominatesSubgraph:(id)arg2;
- (bool)doesSubgraph:(id)arg1 dominatesLayer:(id)arg2;
- (bool)doesSubgraph:(id)arg1 dominatesSubgraph:(id)arg2;
- (id)dominationTree;
- (id)getDominanceFrontierForSubgraph:(id)arg1;
- (id)getPostDominanceFrontierForSubgraph:(id)arg1;
- (id)initDomTree:(id)arg1;

@end
