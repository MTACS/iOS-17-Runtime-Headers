
@interface NTKArgonDiskKeyDatabase : NSObject <NTKArgonKeyDatabaseProviding> {
    NSSet * _knownKeyDescriptors;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSArray * _searchPaths;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_locked_rebuildCache;
- (void)clearCaches;
- (id)initWithSearchPathDomains:(unsigned long long)arg1;
- (id)keyDescriptorEnumerator;
- (id)keyDescriptorForFileName:(id)arg1;

@end
