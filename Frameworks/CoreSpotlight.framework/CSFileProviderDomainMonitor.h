
@interface CSFileProviderDomainMonitor : NSObject {
    NSDictionary * _activeDomains;
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    }  _activeDomainsLock;
    id /* block */  _domainCleaner;
    NSObject<OS_dispatch_queue> * _domainDeleteQueue;
    NSObject<OS_dispatch_queue> * _domainUpdateQueue;
    id  _fileProviderDelegate;
    NSMutableOrderedSet * _removedDomains;
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    }  _removedDomainsLock;
}

@property (copy) id /* block */ domainCleaner;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *domainDeleteQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *domainUpdateQueue;
@property (nonatomic, retain) id fileProviderDelegate;
@property (readonly) NSURL *fileProviderDomainURL;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)dealloc;
- (id /* block */)domainCleaner;
- (id)domainDeleteQueue;
- (id)domainUpdateQueue;
- (id)fileProviderDelegate;
- (id)fileProviderDomainURL;
- (id)getProviderIDForBundle:(id)arg1;
- (id)init;
- (unsigned long long)loadSavedDomains:(id)arg1;
- (id)removedDomainFilterQueries;
- (void)saveAllDomains:(id)arg1;
- (void)setDomainCleaner:(id /* block */)arg1;
- (void)setDomainDeleteQueue:(id)arg1;
- (void)setDomainUpdateQueue:(id)arg1;
- (void)setFileProviderDelegate:(id)arg1;
- (void)startMonitoring;
- (void)updateActiveDomains:(id)arg1;
- (void)updateActiveDomainsWithProviderDomainsByID:(id)arg1;
- (void)updateRemovedDomains:(id)arg1;

@end
