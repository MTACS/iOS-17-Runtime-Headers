
@interface BCSLinkItem : BCSItem <BCSBusinessLinkContentItemDescribing, BCSLinkItemDescribing, BSDescriptionProviding, NSCopying> {
    BCSBusinessLinkContentItem * _cachedContentItem;
    NSString * _cachedContentItemLanguage;
    <BCSLocaleHelperProtocol> * _localeHelper;
    BCSLinkItemModel * _model;
}

@property (nonatomic, readonly) long long action;
@property (nonatomic, readonly, copy) NSString *bundleID;
@property (nonatomic, readonly) BCSBusinessLinkContentItem *businessLinkContentItem;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSDictionary *debugInfo;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *fullHash;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) NSURL *heroImageURL;
@property (nonatomic, readonly, retain) NSString *heroImageURLString;
@property (nonatomic, readonly, retain) NSURL *iconImageURL;
@property (nonatomic, readonly, retain) NSString *iconImageURLString;
@property (nonatomic, readonly) bool isPoweredBy;
@property (nonatomic, readonly, copy) NSString *language;
@property (nonatomic, readonly, retain) NSURL *linkURL;
@property (nonatomic, readonly) <BCSLocaleHelperProtocol> *localeHelper;
@property (nonatomic, readonly, retain) NSDictionary *mapIconStyleAttributes;
@property (nonatomic, readonly, retain) NSNumber *mapItemMUID;
@property (nonatomic, readonly) BCSLinkItemModel *model;
@property (nonatomic, readonly, retain) NSURL *redirectURL;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;

+ (id)linkItemsFromLinkItemModels:(id)arg1;

- (void).cxx_destruct;
- (long long)action;
- (id)bundleID;
- (id)businessLinkContentItem;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)debugInfo;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)fullHash;
- (id)heroImageURL;
- (id)heroImageURLForSpecifier:(struct { unsigned long long x1; unsigned long long x2; char *x3; char *x4; })arg1;
- (id)heroImageURLString;
- (id)iconImageURL;
- (id)iconImageURLForSpecifier:(struct { unsigned long long x1; unsigned long long x2; char *x3; char *x4; })arg1;
- (id)iconImageURLString;
- (id)initWithLinkItemModel:(id)arg1 expirationDate:(id)arg2 localeHelper:(id)arg3;
- (id)initWithLinkItemModel:(id)arg1 localeHelper:(id)arg2;
- (bool)isPoweredBy;
- (id)itemIdentifier;
- (id)language;
- (id)linkURL;
- (id)localeHelper;
- (id)mapIconStyleAttributes;
- (id)mapItemMUID;
- (bool)matchesItemIdentifying:(id)arg1;
- (id)model;
- (id)redirectURL;
- (void)setDebugInfo:(id)arg1;
- (id)subtitle;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)title;
- (long long)truncatedHash;
- (long long)type;

@end
