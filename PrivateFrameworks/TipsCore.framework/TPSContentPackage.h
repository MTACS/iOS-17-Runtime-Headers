
@interface TPSContentPackage : NSObject <NSCopying, NSSecureCoding> {
    TPSAssetSizes * _assetSizes;
    NSDictionary * _collectionMap;
    NSDictionary * _collectionSectionMap;
    NSArray * _collectionSections;
    TPSCollection * _featuredCollection;
    NSString * _language;
    NSArray * _orderedCollectionIdentifiers;
    NSArray * _savedTipIdentifiers;
    NSDictionary * _tipMap;
    NSArray * _userGuides;
}

@property (nonatomic, retain) TPSAssetSizes *assetSizes;
@property (nonatomic, retain) NSDictionary *collectionMap;
@property (nonatomic, retain) NSDictionary *collectionSectionMap;
@property (nonatomic, retain) NSArray *collectionSections;
@property (nonatomic, retain) TPSCollection *featuredCollection;
@property (nonatomic, retain) NSString *language;
@property (nonatomic, retain) NSArray *orderedCollectionIdentifiers;
@property (nonatomic, readonly) NSArray *orderedCollections;
@property (nonatomic, retain) NSArray *savedTipIdentifiers;
@property (nonatomic, retain) NSDictionary *tipMap;
@property (nonatomic, retain) NSArray *userGuides;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assetSizes;
- (id)collectionMap;
- (id)collectionSectionMap;
- (id)collectionSections;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)featuredCollection;
- (bool)hasTipContent;
- (id)initWithCoder:(id)arg1;
- (id)language;
- (id)orderedCollectionIdentifiers;
- (id)orderedCollections;
- (id)savedTipIdentifiers;
- (void)setAssetSizes:(id)arg1;
- (void)setCollectionMap:(id)arg1;
- (void)setCollectionSectionMap:(id)arg1;
- (void)setCollectionSections:(id)arg1;
- (void)setFeaturedCollection:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setOrderedCollectionIdentifiers:(id)arg1;
- (void)setSavedTipIdentifiers:(id)arg1;
- (void)setTipMap:(id)arg1;
- (void)setUserGuides:(id)arg1;
- (id)tipMap;
- (void)updateOrderedCollectionIdentifiers;
- (id)userGuides;

@end
