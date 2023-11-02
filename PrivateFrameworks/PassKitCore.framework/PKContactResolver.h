
@interface PKContactResolver : NSObject {
    NSCache * _altDSIDToContactCache;
    CNContactStore * _contactStore;
    NSHashTable * _delegates;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _delegatesLock;
    NSCache * _handleToContactCache;
    NSArray * _keysToFetch;
    NSObject<OS_dispatch_queue> * _replyQueue;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) NSCache *altDSIDToContactCache;
@property (nonatomic, retain) CNContactStore *contactStore;
@property (nonatomic, retain) NSHashTable *delegates;
@property (nonatomic, retain) NSCache *handleToContactCache;
@property (nonatomic, readonly) NSArray *keysToFetch;

+ (id)contactForFamilyMember:(id)arg1 nameComponents:(id)arg2 imageData:(id)arg3;
+ (id)defaultContactResolver;

- (void).cxx_destruct;
- (void)_accessDelegatesWithHandler:(id /* block */)arg1;
- (void)_handleContactStoreDidChangeNotification:(id)arg1;
- (id)_predicateForHandle:(id)arg1;
- (void)addDelegate:(id)arg1;
- (id)altDSIDToContactCache;
- (id)contactForAccountUser:(id)arg1;
- (void)contactForAccountUser:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)contactForHandle:(id)arg1;
- (void)contactForHandle:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)contactForHandles:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)contactForIdentifier:(id)arg1;
- (id)contactStore;
- (id)delegates;
- (id)handleToContactCache;
- (bool)hasCachedResultForAccountUser:(id)arg1;
- (bool)hasCachedResultForHandle:(id)arg1;
- (id)initWithContactStore:(id)arg1 keysToFetch:(id)arg2;
- (void)invalidateCache;
- (id)keysToFetch;
- (void)removeDelegate:(id)arg1;
- (void)setAltDSIDToContactCache:(id)arg1;
- (void)setContactStore:(id)arg1;
- (void)setDelegates:(id)arg1;
- (void)setHandleToContactCache:(id)arg1;

@end
