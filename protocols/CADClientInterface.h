
@protocol CADClientInterface

@required

- (void)CADClientReceiveDatabaseIntegrityErrors:(NSArray *)arg1;
- (void)CADClientReceiveDiagnosticsCollectionResults:(NSArray *)arg1 forToken:(unsigned int)arg2 finished:(bool)arg3;
- (void)CADClientReceiveOccurrenceCacheSearchResults:(NSArray *)arg1 forSearchToken:(unsigned int)arg2 finished:(bool)arg3;

@end
