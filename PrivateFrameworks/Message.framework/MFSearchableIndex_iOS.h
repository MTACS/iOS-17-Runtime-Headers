
@interface MFSearchableIndex_iOS : EDSearchableIndex <EFLoggable, MFDiagnosticsGenerator>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)log;

- (void)_indexMessage:(id)arg1 includeBody:(bool)arg2 indexingType:(long long)arg3;
- (void)addSearchQueryCancelable:(id)arg1;
- (void)indexMessages:(id)arg1 includeBody:(bool)arg2 indexingType:(long long)arg3;
- (id)initWithName:(id)arg1 dataSource:(id)arg2 reasonProvider:(id)arg3;
- (bool)isPluggedIn;
- (void)logPowerEventWithIdentifier:(id)arg1 eventData:(id)arg2;
- (id)powerObservable;
- (void)removeSearchQueryCancelable:(id)arg1;
- (bool)shouldCancelSearchQuery;

@end
