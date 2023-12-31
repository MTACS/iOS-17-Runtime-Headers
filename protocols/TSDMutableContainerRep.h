
@protocol TSDMutableContainerRep <TSDContainerRep>

@required

- (void)addChildRep:(TSDRep *)arg1;
- (void)insertChildRep:(TSDRep *)arg1 above:(TSDRep *)arg2;
- (void)insertChildRep:(TSDRep *)arg1 atIndex:(unsigned long long)arg2;
- (void)insertChildRep:(TSDRep *)arg1 below:(TSDRep *)arg2;
- (NSObject<TSDMutableContainerInfo> *)mutableContainerInfo;
- (void)removeChildRep:(TSDRep *)arg1;
- (void)replaceChildRep:(TSDRep *)arg1 with:(TSDRep *)arg2;
- (void)setChildReps:(NSArray *)arg1;

@end
