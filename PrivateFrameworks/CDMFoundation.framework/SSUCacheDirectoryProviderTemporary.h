
@interface SSUCacheDirectoryProviderTemporary : NSObject <SSUCacheDirectoryProvider> {
    NSURL * __directory;
}

@property (nonatomic, readonly) NSURL *_directory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_directory;
- (void)dealloc;
- (id)lookupOrCreateCacheDirectory:(id*)arg1;

@end
