
@interface WBCollectionConfiguration : NSObject <NSCopying> {
    long long  _collectionType;
    bool  _createIfNeeded;
    NSString * _databasePath;
    bool  _isReadonly;
    unsigned long long  _maximumTabsPerTabGroup;
    bool  _skipsExternalNotifications;
    long long  _storeOwner;
}

@property (nonatomic, readonly) long long collectionType;
@property (nonatomic, readonly) bool createIfNeeded;
@property (nonatomic, readonly, copy) NSString *databasePath;
@property (nonatomic, readonly) bool isInMemoryDatabase;
@property (nonatomic, readonly) bool isReadonly;
@property (nonatomic) unsigned long long maximumTabsPerTabGroup;
@property (nonatomic) bool skipsExternalNotifications;
@property (nonatomic) long long storeOwner;

+ (id)debugTabCollectionConfiguration;
+ (id)inMemoryBookmarkCollectionConfiguration;
+ (id)inMemoryTabCollectionConfiguration;
+ (id)pptTabCollectionConfiguration;
+ (id)readonlySafariBookmarkCollectionConfiguration;
+ (id)readonlySafariTabCollectionConfiguration;
+ (id)safariBookmarkCollectionConfiguration;
+ (id)safariTabCollectionConfiguration;

- (void).cxx_destruct;
- (long long)collectionType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)createIfNeeded;
- (id)databasePath;
- (id)initWithCollectionType:(long long)arg1 databasePath:(id)arg2 readonly:(bool)arg3;
- (id)initWithCollectionType:(long long)arg1 databasePath:(id)arg2 readonly:(bool)arg3 createIfNeeded:(bool)arg4;
- (bool)isInMemoryDatabase;
- (bool)isReadonly;
- (unsigned long long)maximumTabsPerTabGroup;
- (void)setMaximumTabsPerTabGroup:(unsigned long long)arg1;
- (void)setSkipsExternalNotifications:(bool)arg1;
- (void)setStoreOwner:(long long)arg1;
- (bool)skipsExternalNotifications;
- (long long)storeOwner;

@end
