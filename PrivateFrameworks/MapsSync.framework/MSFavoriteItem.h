
@interface MSFavoriteItem : MapsSync.MapsSyncObject {
    void _customName;
    void _handleChanges;
    void _hidden;
    void _latitude;
    void _longitude;
    void _mapItemStorage;
    void _muid;
    void _originatingAddressString;
    void _positionIndex;
    void _shortcutIdentifier;
    void _source;
    void _type;
    void _version;
}

@property (nonatomic, copy) NSString *customName;
@property (nonatomic) bool hidden;
@property (nonatomic, retain) NSNumber *latitude;
@property (nonatomic, retain) NSNumber *longitude;
@property (nonatomic, retain) GEOMapItemStorage *mapItemStorage;
@property (nonatomic, retain) NSNumber *muid;
@property (nonatomic, copy) NSString *originatingAddressString;
@property (nonatomic) long long positionIndex;
@property (nonatomic, copy) NSString *shortcutIdentifier;
@property (nonatomic) short source;
@property (nonatomic) short type;
@property (nonatomic) short version;

+ (id)findDuplicatesWithContext:(id)arg1;
+ (Class)managedClass;
+ (id)mergeWithDuplicates:(id)arg1;
+ (id)optionsWith:(id)arg1;
+ (id)strippedMapItemWith:(id)arg1;

- (void).cxx_destruct;
- (void)addContactHandle:(id)arg1;
- (id)customName;
- (id)fetchContactHandles;
- (void)flushChanges;
- (bool)hidden;
- (id)initWithObject:(id)arg1 store:(id)arg2;
- (id)initWithStore:(id)arg1 customName:(id)arg2 hidden:(bool)arg3 latitude:(id)arg4 longitude:(id)arg5 muid:(id)arg6 originatingAddressString:(id)arg7 positionIndex:(long long)arg8 shortcutIdentifier:(id)arg9 source:(short)arg10 type:(short)arg11 version:(short)arg12;
- (id)latitude;
- (id)longitude;
- (id)mapItemStorage;
- (void)moveAfterItem:(id)arg1 completion:(id /* block */)arg2;
- (void)moveBeforeItem:(id)arg1 completion:(id /* block */)arg2;
- (void)moveToBackWithCompletion:(id /* block */)arg1;
- (void)moveToFrontWithCompletion:(id /* block */)arg1;
- (id)muid;
- (void)onFirstSaveWithObject:(id)arg1 context:(id)arg2;
- (id)originatingAddressString;
- (long long)positionIndex;
- (void)removeContactHandle:(id)arg1;
- (void)setCustomName:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setLatitude:(id)arg1;
- (void)setLongitude:(id)arg1;
- (void)setMapItemStorage:(id)arg1;
- (void)setMuid:(id)arg1;
- (void)setOriginatingAddressString:(id)arg1;
- (void)setPositionIndex:(long long)arg1;
- (void)setPropertiesUnsafeWithManagedObject:(id)arg1;
- (void)setShortcutIdentifier:(id)arg1;
- (void)setSource:(short)arg1;
- (void)setType:(short)arg1;
- (void)setVersion:(short)arg1;
- (id)shortcutIdentifier;
- (short)source;
- (short)type;
- (short)version;

@end
