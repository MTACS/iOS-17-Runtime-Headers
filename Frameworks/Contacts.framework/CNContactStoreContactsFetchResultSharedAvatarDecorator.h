
@interface CNContactStoreContactsFetchResultSharedAvatarDecorator : NSObject <CNContactStoreContactsFetchResultDecorator> {
    NSArray * _decoratedValue;
    NSArray * _keysToFetch;
    bool  _unifyContactsFromMainStore;
    NSArray * _value;
}

@property (nonatomic, retain) NSArray *decoratedValue;
@property (nonatomic, retain) NSArray *keysToFetch;
@property (nonatomic) bool unifyContactsFromMainStore;
@property (nonatomic, retain) NSArray *value;

+ (id)descriptorForRequiredKeys;
+ (bool)enableSharedPhoto;
+ (id)log;

- (void).cxx_destruct;
- (id)decoratedContacts:(id)arg1;
- (id)decoratedValue;
- (bool)doesKeysToFetchContainRequiredImageKeys;
- (id)initWithContacts:(id)arg1 keysToFetch:(id)arg2 unifyContactsFromMainStore:(bool)arg3;
- (id)initWithContactsFetchResult:(id)arg1 keysToFetch:(id)arg2 unifyContactsFromMainStore:(bool)arg3;
- (id)keysToFetch;
- (id)nicknameForContact:(id)arg1;
- (void)setDecoratedValue:(id)arg1;
- (void)setKeysToFetch:(id)arg1;
- (void)setUnifyContactsFromMainStore:(bool)arg1;
- (void)setValue:(id)arg1;
- (id)sharedWallpaperForContact:(id)arg1 withNickname:(id)arg2;
- (id)sharedWatchWallpaperImageDataForContact:(id)arg1 withNickname:(id)arg2;
- (bool)unifyContactsFromMainStore;
- (id)value;

@end
