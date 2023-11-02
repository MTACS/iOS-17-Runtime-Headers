
@interface PXStoryDefaultStylesProducer : NSObject <PXStoryStylesProducer> {
    NSArray * _autoEditDecisionLists;
    NSObject<OS_os_log> * _log;
}

@property (nonatomic, readonly, copy) NSArray *autoEditDecisionLists;

- (void).cxx_destruct;
- (id)autoEditDecisionLists;
- (id)init;
- (id)initWithAutoEditDecisionLists:(id)arg1;
- (id)requestStylesWithOptions:(unsigned long long)arg1 resultHandler:(id /* block */)arg2;

@end
