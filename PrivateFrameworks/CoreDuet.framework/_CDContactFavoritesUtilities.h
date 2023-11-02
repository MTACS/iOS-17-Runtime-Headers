
@interface _CDContactFavoritesUtilities : NSObject {
    _PASLock * _contactFavorites;
}

@property (nonatomic, retain) _PASLock *contactFavorites;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)contactFavorites;
- (id)entriesForContact:(id)arg1;
- (id)favoriteContactEntries;
- (id)init;
- (void)setContactFavorites:(id)arg1;

@end
