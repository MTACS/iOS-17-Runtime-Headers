
@interface _CNSortsByPositionInAuxiliaryArray : NSObject {
    NSArray * _auxiliaryValues;
    NSDictionary * _ranks;
    id /* block */  _transform;
}

@property (nonatomic, readonly, copy) NSArray *auxiliaryValues;
@property (nonatomic, readonly, copy) NSDictionary *ranks;
@property (nonatomic, readonly, copy) id /* block */ transform;

+ (id /* block */)comparatorForSortingAccordingToAuxiliaryValues:(id)arg1 transform:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)auxiliaryValues;
- (id /* block */)comparator;
- (id)initWithAuxiliaryValues:(id)arg1 transform:(id /* block */)arg2;
- (void)prepareRankingIndex;
- (id)rankForObject:(id)arg1;
- (id)ranks;
- (id /* block */)transform;

@end
