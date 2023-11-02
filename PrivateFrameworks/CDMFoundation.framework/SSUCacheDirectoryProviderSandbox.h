
@interface SSUCacheDirectoryProviderSandbox : NSObject <SSUCacheDirectoryProvider> {
    NSURL * _directory;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSURL *directory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)directory;
- (id)initWithDirectory:(id)arg1;
- (id)lookupOrCreateCacheDirectory:(id*)arg1;

@end
