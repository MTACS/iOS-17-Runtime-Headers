
@interface EMFQueryEvaluator : NSObject {
    EMFInvertedIndex * _index;
    EMFQueryResultOverrideList * _overrideList;
}

@property (nonatomic, readonly) EMFInvertedIndex *index;
@property (nonatomic, retain) EMFQueryResultOverrideList *overrideList;

- (void).cxx_destruct;
- (id)_overriddenResultsForQuery:(id)arg1;
- (id)index;
- (id)initWithIndex:(id)arg1;
- (id)initWithIndex:(id)arg1 andOverrideList:(id)arg2;
- (id)overrideList;
- (id)performQuery:(id)arg1;
- (void)setOverrideList:(id)arg1;

@end
