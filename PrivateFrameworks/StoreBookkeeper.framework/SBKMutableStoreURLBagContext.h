
@interface SBKMutableStoreURLBagContext : SBKStoreURLBagContext

@property (nonatomic, copy) NSString *domain;
@property (nonatomic) bool domainDisabled;
@property (nonatomic) double pollingIntervalInSeconds;
@property (nonatomic, retain) NSURL *pullAllKeyValueRequestURL;
@property (nonatomic, retain) NSURL *pullKeyValueRequestURL;
@property (nonatomic, retain) NSURL *pushAllKeyValueRequestURL;
@property (nonatomic, retain) NSURL *pushKeyValueRequestURL;
@property (nonatomic, retain) NSURL *syncRequestURL;

@end
