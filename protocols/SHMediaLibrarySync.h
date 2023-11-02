
@protocol SHMediaLibrarySync <NSObject>

@required

- (void)_synchronizeSnapshot:(SHMediaLibrarySnapshot *)arg1 startCondition:(NSString *)arg2;
- (<SHMediaLibrarySyncDelegate> *)delegate;
- (void)setDelegate:(id <SHMediaLibrarySyncDelegate>)arg1;

@end
