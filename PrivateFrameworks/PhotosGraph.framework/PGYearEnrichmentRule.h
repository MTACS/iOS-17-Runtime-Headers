
@interface PGYearEnrichmentRule : NSObject <PGHighlightItemEnrichmentRule> {
    NSObject<OS_os_log> * _loggingConnection;
    <PGHighlightItemModelReader> * _modelReader;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_os_log> *loggingConnection;
@property (nonatomic, readonly) <PGHighlightItemModelReader> *modelReader;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)enumerateChildVisibilityStateForHighlightItemList:(id)arg1 sharingFilter:(unsigned short)arg2 withGraph:(id)arg3 neighborScoreComputer:(id)arg4 usingBlock:(id /* block */)arg5;
- (id)initWithModelReader:(id)arg1 loggingConnection:(id)arg2;
- (id)keyAssetForHighlightItemList:(id)arg1 sharingFilter:(unsigned short)arg2;
- (id)loggingConnection;
- (id)modelReader;
- (double)promotionScoreForHighlightItemList:(id)arg1;

@end
