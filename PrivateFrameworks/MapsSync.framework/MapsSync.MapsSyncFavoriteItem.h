
@interface MapsSync.MapsSyncFavoriteItem : MapsSync.MapsSyncBaseItem {
    void _contactHandles;
    void _customName;
    void _hidden;
    void _latitude;
    void _longitude;
    void _mapItemStorage;
    void _muid;
    void _originatingAddressString;
    void _shortcutIdentifier;
    void _source;
    void _type;
    void _version;
}

@property (nonatomic, readonly) NSSet *contactHandles;
@property (nonatomic, readonly) NSString *customName;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) bool hidden;
@property (nonatomic, readonly) NSNumber *latitude;
@property (nonatomic, readonly) NSNumber *longitude;
@property (nonatomic, readonly) GEOMapItemStorage *mapItemStorage;
@property (nonatomic, readonly) NSNumber *muid;
@property (nonatomic, readonly) NSString *originatingAddressString;
@property (nonatomic, readonly) NSString *shortcutIdentifier;
@property (nonatomic, readonly) short source;
@property (nonatomic, readonly) short type;
@property (nonatomic, readonly) short version;

// Image: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync

+ (void)fetch:(long long)arg1 :(long long)arg2 :(id)arg3 sort:(long long)arg4 ascending:(bool)arg5 completion:(id /* block */)arg6;
+ (id)fetchFavoriteItemForIdentifier:(id)arg1;
+ (id)fetchFavoriteItemForOriginatingAddressString:(id)arg1;
+ (id)fetchFavoriteItemForShortcutIdentifier:(id)arg1;
+ (void)fetchNearbyPlacesWithLatitude:(double)arg1 longitude:(double)arg2 callbackQueue:(id)arg3 completion:(id /* block */)arg4;

- (void).cxx_destruct;
- (void)addEditWithBlock:(id /* block */)arg1;
- (id)contactHandles;
- (id)customName;
- (id)description;
- (bool)hidden;
- (id)initWithObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)latitude;
- (id)longitude;
- (Class)managedObjectClass;
- (id)mapItemStorage;
- (id)muid;
- (Class)mutableObjectClass;
- (id)originatingAddressString;
- (void)setPropertiesWithObject:(id)arg1;
- (id)shortcutIdentifier;
- (short)source;
- (short)type;
- (short)version;

// Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions

+ (id)favoriteItemWithShortcut:(id)arg1;

@end
