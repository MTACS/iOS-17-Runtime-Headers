
@protocol TLKObserver

@required

- (long long)batchUpdateCount;
- (void)propertiesDidChange;
- (void)setBatchUpdateCount:(long long)arg1;

@end
