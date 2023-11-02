
@interface MapsSuggestionsShortcut : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _contacts;
    NSString * _customName;
    bool  _derivedFromMeCard;
    GEOMapItemStorage * _geoMapItem;
    NSString * _identifier;
    bool  _isHidden;
    NSString * _originatingAddressString;
    NSUUID * _storageIdentifier;
    long long  _type;
}

@property (nonatomic, copy) NSArray *contacts;
@property (nonatomic, copy) NSString *customName;
@property (nonatomic) bool derivedFromMeCard;
@property (nonatomic, copy) GEOMapItemStorage *geoMapItem;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) bool isBackedPlaceholder;
@property (nonatomic) bool isHidden;
@property (nonatomic, readonly) bool isSetupPlaceholder;
@property (nonatomic, copy) NSString *originatingAddressString;
@property (getter=source, setter=setSource:, nonatomic) long long source;
@property (nonatomic, copy) NSUUID *storageIdentifier;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic) long long type;

+ (id)shortcutWithData:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addContact:(id)arg1;
- (id)contacts;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customName;
- (id)data;
- (bool)derivedFromMeCard;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)geoMapItem;
- (id)identifier;
- (id)identifierForStorage;
- (id)initBackedPlaceholderWithType:(long long)arg1 identifier:(id)arg2 customName:(id)arg3;
- (id)initBackedPlaceholderWithType:(long long)arg1 identifier:(id)arg2 originatingAddress:(id)arg3 customName:(id)arg4;
- (id)initSetupPlaceholderOfType:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFavoriteItem:(id)arg1;
- (id)initWithGEOMapItem:(id)arg1 customName:(id)arg2;
- (id)initWithType:(long long)arg1 geoMapItem:(id)arg2 customName:(id)arg3;
- (id)initWithType:(long long)arg1 identifier:(id)arg2 geoMapItem:(id)arg3 customName:(id)arg4;
- (id)initWithType:(long long)arg1 identifier:(id)arg2 geoMapItem:(id)arg3 customName:(id)arg4 contacts:(id)arg5 isHidden:(bool)arg6 originatingAddress:(id)arg7;
- (bool)isBackedPlaceholder;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToFavoriteItem:(id)arg1;
- (bool)isEqualToShortcut:(id)arg1;
- (bool)isHidden;
- (bool)isSetupPlaceholder;
- (id)originatingAddressString;
- (void)removeContact:(id)arg1;
- (void)setContacts:(id)arg1;
- (void)setCustomName:(id)arg1;
- (void)setDerivedFromMeCard:(bool)arg1;
- (void)setGeoMapItem:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsHidden:(bool)arg1;
- (void)setOriginatingAddressString:(id)arg1;
- (void)setSource:(long long)arg1;
- (void)setStorageIdentifier:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)source;
- (id)storageIdentifier;
- (id)subtitle;
- (id)title;
- (long long)type;

@end
