
@interface MTRThreadNetworkDiagnosticsClusterRouteTableStruct : NSObject <NSCopying> {
    NSNumber * _age;
    NSNumber * _allocated;
    NSNumber * _extAddress;
    NSNumber * _linkEstablished;
    NSNumber * _lqiIn;
    NSNumber * _lqiOut;
    NSNumber * _nextHop;
    NSNumber * _pathCost;
    NSNumber * _rloc16;
    NSNumber * _routerId;
}

@property (nonatomic, copy) NSNumber *age;
@property (nonatomic, copy) NSNumber *allocated;
@property (nonatomic, copy) NSNumber *extAddress;
@property (nonatomic, copy) NSNumber *linkEstablished;
@property (nonatomic, copy) NSNumber *lqiIn;
@property (nonatomic, copy) NSNumber *lqiOut;
@property (nonatomic, copy) NSNumber *nextHop;
@property (nonatomic, copy) NSNumber *pathCost;
@property (nonatomic, copy) NSNumber *rloc16;
@property (nonatomic, copy) NSNumber *routerId;

- (void).cxx_destruct;
- (id)age;
- (id)allocated;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)extAddress;
- (id)init;
- (id)linkEstablished;
- (id)lqiIn;
- (id)lqiOut;
- (id)nextHop;
- (id)pathCost;
- (id)rloc16;
- (id)routerId;
- (void)setAge:(id)arg1;
- (void)setAllocated:(id)arg1;
- (void)setExtAddress:(id)arg1;
- (void)setLinkEstablished:(id)arg1;
- (void)setLqiIn:(id)arg1;
- (void)setLqiOut:(id)arg1;
- (void)setNextHop:(id)arg1;
- (void)setPathCost:(id)arg1;
- (void)setRloc16:(id)arg1;
- (void)setRouterId:(id)arg1;

@end
