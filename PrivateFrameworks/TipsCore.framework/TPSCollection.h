
@interface TPSCollection : TPSDocument <NSCopying, NSSecureCoding> {
    TPSAssets * _collectionAssets;
    bool  _containsIntroTip;
    NSString * _countText;
    TPSContent * _featuredContent;
    TPSGradient * _gradient;
    NSString * _shortTitle;
    TPSContent * _tileContent;
    NSArray * _tipIdentifiers;
    TPSAssets * _tocAssets;
    bool  _topFeatured;
}

@property (getter=isChecklist, nonatomic, readonly) bool checklist;
@property (nonatomic, copy) TPSAssets *collectionAssets;
@property (nonatomic) bool containsIntroTip;
@property (nonatomic) long long count;
@property (nonatomic, copy) NSString *countText;
@property (nonatomic, readonly, copy) TPSAssets *featuredAssets;
@property (nonatomic, copy) TPSContent *featuredContent;
@property (nonatomic, readonly, copy) NSString *featuredText;
@property (nonatomic, readonly, copy) NSString *featuredTitle;
@property (nonatomic, copy) TPSGradient *gradient;
@property (nonatomic, readonly) long long priority;
@property (nonatomic, copy) NSString *shortTitle;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, readonly, copy) TPSAssets *tileAssets;
@property (nonatomic, copy) TPSContent *tileContent;
@property (nonatomic, copy) NSArray *tipIdentifiers;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) TPSAssets *tocAssets;
@property (getter=isTopFeatured, nonatomic) bool topFeatured;

+ (id)collectionLabelForDictionary:(id)arg1;
+ (id)collectionOrderIdentifierForDictionary:(id)arg1;
+ (id)na_identity;
+ (bool)supportsSecureCoding;
+ (id)tipIdentifiersForDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)URLWithReferrer:(id)arg1;
- (id)collectionAssets;
- (bool)containsIntroTip;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)count;
- (id)countText;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)featuredAssets;
- (id)featuredContent;
- (id)featuredText;
- (id)featuredTitle;
- (id)gradient;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 metadata:(id)arg2;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 text:(id)arg3 metadata:(id)arg4 tocAssets:(id)arg5 collectionAssets:(id)arg6 tipIdentifiers:(id)arg7;
- (bool)isChecklist;
- (bool)isEqual:(id)arg1;
- (bool)isHardwareWelcome;
- (bool)isSoftwareWelcome;
- (bool)isTopFeatured;
- (long long)priority;
- (void)setCollectionAssets:(id)arg1;
- (void)setContainsIntroTip:(bool)arg1;
- (void)setCountText:(id)arg1;
- (void)setFeaturedContent:(id)arg1;
- (void)setGradient:(id)arg1;
- (void)setShortTitle:(id)arg1;
- (void)setTileContent:(id)arg1;
- (void)setTipIdentifiers:(id)arg1;
- (void)setTocAssets:(id)arg1;
- (void)setTopFeatured:(bool)arg1;
- (id)shortTitle;
- (id)text;
- (id)tileAssets;
- (id)tileContent;
- (id)tipIdentifiers;
- (id)title;
- (id)tocAssets;
- (void)updateWithContentDictionary:(id)arg1 metadata:(id)arg2 clientConditionIdentifier:(id)arg3 fileIdMap:(id)arg4 clientConditions:(id)arg5;

@end
