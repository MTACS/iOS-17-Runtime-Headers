
@interface _ICLexiconManager : NSObject <_ICFeedbackAccepting, _ICLexiconManaging> {
    int  _contactChangeCount;
    int  _contactLoadState;
    NSMutableArray * _contactObservers;
    NSMutableDictionary * _contacts;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _contactsCallbackLock;
    NSMutableArray * _namedEntitiesUpdateObservers;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _namedEntityCallbackLock;
    int  _namedEntityLoadState;
    _ICNamedEntityStore * _namedEntityStore;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSArray * _sources;
}

@property int contactLoadState;
@property int namedEntityLoadState;
@property (nonatomic, retain) _ICNamedEntityStore *namedEntityStore;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;

+ (unsigned long long)countWords:(id)arg1;

- (void).cxx_destruct;
- (void)_actuallyLoadLexicons;
- (void)_notifyNamedEntitiesUpdateObservers;
- (void)addContact:(id)arg1;
- (id /* block */)addContactObserver:(id /* block */)arg1;
- (id /* block */)addNamedEntitiesUpdateObserver:(id /* block */)arg1;
- (void)changeContactLoadingState:(int)arg1;
- (void)changeNamedEntityLoadingState:(int)arg1;
- (void)completeContacts;
- (void)completeNamedEntities;
- (void)completeRecentContacts;
- (void)completeRecentNamedEntities;
- (int)contactLoadState;
- (void)dealloc;
- (int)debugEntityLoadState;
- (void)doLoadLexicon;
- (unsigned long long)getContactCount;
- (void)handleContact:(id)arg1;
- (void)handleNamedEntity:(id)arg1;
- (void)handleRecentContact:(id)arg1;
- (void)handleRecentNamedEntity:(id)arg1;
- (void)hibernate;
- (id)initWithLexiconSources:(id)arg1;
- (id)loadLexicons;
- (id)loadLexicons:(id /* block */)arg1;
- (id)loadLexiconsUsingFilter:(id /* block */)arg1;
- (int)namedEntityLoadState;
- (id)namedEntityStore;
- (void)printLexiconToNSLog:(struct _LXLexicon { }*)arg1;
- (void)provideFeedbackForString:(id)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3;
- (void)removeContact:(id)arg1;
- (void)removeContactObserver:(id /* block */)arg1;
- (void)removeNamedEntitiesUpdateObserver:(id /* block */)arg1;
- (void)resetNamedEntities;
- (id)serialQueue;
- (void)setContactLoadState:(int)arg1;
- (void)setNamedEntityLoadState:(int)arg1;
- (void)setNamedEntityStore:(id)arg1;
- (void)setSerialQueue:(id)arg1;
- (void)setupContacts;
- (void)setupNamedEntities;
- (void)setupRecentContacts;
- (void)setupRecentNamedEntities;
- (id)stateName:(int)arg1;
- (void)unloadLexicons;
- (void)warmUp;

@end
