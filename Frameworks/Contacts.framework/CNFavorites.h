
@interface CNFavorites : NSObject {
    CNContactStore * _contactStore;
    bool  _dirty;
    NSArray * _entries;
    <CNFavoritesLogger> * _logger;
    bool  _needsReload;
    unsigned long long  _postCount;
    NSMutableDictionary * _uidToEntry;
}

@property (nonatomic, retain) CNContactStore *contactStore;
@property (nonatomic) bool dirty;
@property (nonatomic, readonly, copy) NSArray *entries;
@property (getter=isFull, readonly) bool full;
@property (nonatomic, readonly) <CNFavoritesLogger> *logger;
@property (nonatomic) bool needsReload;
@property (nonatomic) unsigned long long postCount;
@property (nonatomic, retain) NSMutableDictionary *uidToEntry;

// Image: /System/Library/Frameworks/Contacts.framework/Contacts

+ (id)favoritesPath;
+ (void)flushSingleton;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addEntryToMap:(id)arg1;
- (void)_entriesChangedExternally;
- (id)_entryDictionaries;
- (bool)_isValueForEntry:(id)arg1 equalToValue:(id)arg2;
- (void)_postChangeNotification;
- (void)_removeEntryFromMap:(id)arg1 withUid:(int)arg2;
- (id)_uniqueRematchedEntries:(id)arg1;
- (void)addEntry:(id)arg1;
- (bool)addEntryForContact:(id)arg1 propertyKey:(id)arg2 withIdentifier:(id)arg3;
- (id)contactStore;
- (bool)containsEntryWithType:(long long)arg1 forContact:(id)arg2 propertyKey:(id)arg3 identifier:(id)arg4;
- (void)dealloc;
- (bool)dirty;
- (id)entries;
- (id)entriesForContact:(id)arg1;
- (id)entriesForContact:(id)arg1 propertyKey:(id)arg2 labeledValueIdentifier:(id)arg3 actionType:(id)arg4 bundleIdentifier:(id)arg5;
- (id)entryWithIdentifier:(id)arg1 forContact:(id)arg2;
- (id)entryWithType:(long long)arg1 forContact:(id)arg2 propertyKey:(id)arg3 identifier:(id)arg4;
- (id)init;
- (id)initNonUpdatingReadonlyInstanceWithContactStore:(id)arg1;
- (id)initWithContactStore:(id)arg1;
- (id)initWithContactStore:(id)arg1 logger:(id)arg2;
- (bool)isFull;
- (void)loadEntriesIfNecessary;
- (id)logger;
- (void)moveEntryAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (bool)needsReload;
- (unsigned long long)postCount;
- (void)recacheIdentitiesSoon;
- (void)registerForDistributedNotifications;
- (void)rematchEntriesWithOptions:(unsigned long long)arg1;
- (void)removeAllEntries;
- (void)removeEntryAtIndex:(long long)arg1;
- (void)save;
- (void)saveImmediately;
- (void)setContactStore:(id)arg1;
- (void)setDirty:(bool)arg1;
- (void)setNeedsReload:(bool)arg1;
- (void)setPostCount:(unsigned long long)arg1;
- (void)setUidToEntry:(id)arg1;
- (bool)shouldSimulateCrashReportForError:(id)arg1;
- (id)uidToEntry;
- (void)unregisterForDistributedNotifications;
- (bool)writeFavoritesToFile:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI

- (id)entriesMatchingPredicate:(id)arg1;

@end
