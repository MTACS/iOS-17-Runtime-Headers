
@protocol AVTStoreBackendDelegate <NSObject>

@optional

- (void)backend:(id <AVTStoreBackend>)arg1 didChangeRecordsWithIdentifiers:(NSArray *)arg2;

@end
