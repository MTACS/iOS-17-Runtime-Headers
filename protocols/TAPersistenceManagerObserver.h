
@protocol TAPersistenceManagerObserver <NSObject>

@optional

- (void)didReadFromURL:(NSURL *)arg1 bytes:(unsigned long long)arg2;
- (void)didWriteToURL:(NSURL *)arg1 bytes:(unsigned long long)arg2;

@end
