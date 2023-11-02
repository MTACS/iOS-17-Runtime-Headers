
@interface PXIDSAddressQuery : NSObject {
    unsigned long long  _destinationsCount;
    NSMutableSet * _mutableRemainingDestinations;
    NSMutableDictionary * _mutableStashedResults;
    id /* block */  _resultHandler;
    unsigned long long  _resultsCount;
}

@property (nonatomic, readonly) bool isComplete;
@property (nonatomic, readonly, copy) NSSet *remainingDestinations;
@property (nonatomic, readonly, copy) id /* block */ resultHandler;

- (void).cxx_destruct;
- (id)initWithDestinations:(id)arg1 resultHandler:(id /* block */)arg2;
- (bool)isComplete;
- (id)popStashedResults;
- (id)remainingDestinations;
- (id /* block */)resultHandler;
- (void)stashDestination:(id)arg1 withResult:(bool)arg2;

@end
