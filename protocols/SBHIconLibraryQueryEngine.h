
@protocol SBHIconLibraryQueryEngine <NSObject>

@required

- (void)addObserver:(id <SBHIconLibraryQueryEngineObserver>)arg1;
- (void)executeQuery:(SBHIconLibraryQuery *)arg1;
- (void)removeObserver:(id <SBHIconLibraryQueryEngineObserver>)arg1;
- (void)shutdown;

@end
