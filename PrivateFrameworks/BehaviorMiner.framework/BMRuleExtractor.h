
@interface BMRuleExtractor : NSObject {
    unsigned long long  _basketCount;
    NSArray * _items;
    NSMutableDictionary * _patterns;
    bool  _shouldStop;
}

@property (nonatomic, readonly) unsigned long long basketCount;
@property (nonatomic, retain) NSArray *items;
@property (nonatomic, retain) NSMutableDictionary *patterns;
@property bool shouldStop;

- (void).cxx_destruct;
- (unsigned long long)basketCount;
- (void)extractRulesWithMinSupport:(unsigned long long)arg1 minConfidence:(double)arg2 targetTypes:(id)arg3 batchSize:(unsigned long long)arg4 currentDate:(id)arg5 datedBaskets:(id)arg6 handler:(id /* block */)arg7;
- (void)extractRulesWithMinSupport:(unsigned long long)arg1 minConfidence:(double)arg2 targetTypes:(id)arg3 batchSize:(unsigned long long)arg4 handler:(id /* block */)arg5;
- (id)initWithPatterns:(id)arg1 items:(id)arg2 basketCount:(unsigned long long)arg3;
- (id)itemSetForItemIndexSet:(id)arg1;
- (id)items;
- (id)patterns;
- (void)setItems:(id)arg1;
- (void)setPatterns:(id)arg1;
- (void)setShouldStop:(bool)arg1;
- (bool)shouldStop;
- (id)subsetsOfItemset:(id)arg1;
- (unsigned long long)supportOfItemSet:(id)arg1;
- (void)terminateEarly;

@end
