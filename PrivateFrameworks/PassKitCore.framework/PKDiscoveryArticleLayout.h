
@interface PKDiscoveryArticleLayout : NSObject <NSSecureCoding> {
    id /* block */  _actionOnDismiss;
    PKDiscoveryCard * _card;
    bool  _entitledToForceLargeCard;
    PKDiscoveryCallToAction * _footerLockup;
    bool  _hitMaxLargeViewCount;
    PKDiscoveryItem * _item;
    NSString * _itemIdentifier;
    PKMiniDiscoveryCard * _miniCard;
    long long  _priority;
    bool  _requestedBadge;
    NSArray * _shelves;
    long long  _variant;
    long long  _version;
}

@property (nonatomic, copy) id /* block */ actionOnDismiss;
@property (nonatomic, readonly) PKDiscoveryCard *card;
@property (nonatomic, readonly) bool entitledToForceLargeCard;
@property (nonatomic, readonly) PKDiscoveryCallToAction *footerLockup;
@property (getter=hasHitMaxLargeViewCount, nonatomic, readonly) bool hitMaxLargeViewCount;
@property (nonatomic, retain) PKDiscoveryItem *item;
@property (nonatomic, retain) NSString *itemIdentifier;
@property (nonatomic, readonly) PKMiniDiscoveryCard *miniCard;
@property (nonatomic) long long priority;
@property (getter=hasRequestedBadge, nonatomic, readonly) bool requestedBadge;
@property (nonatomic, readonly) NSArray *shelves;
@property (nonatomic, readonly) long long variant;
@property (nonatomic, readonly) long long version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id /* block */)actionOnDismiss;
- (id)card;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)entitledToForceLargeCard;
- (id)footerLockup;
- (bool)hasHitMaxLargeViewCount;
- (bool)hasRequestedBadge;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualForUI:(id)arg1;
- (id)item;
- (id)itemIdentifier;
- (void)localizeWithBundle:(id)arg1;
- (void)localizeWithBundle:(id)arg1 table:(id)arg2;
- (id)miniCard;
- (long long)priority;
- (void)setActionOnDismiss:(id /* block */)arg1;
- (void)setItem:(id)arg1;
- (void)setItemIdentifier:(id)arg1;
- (void)setPriority:(long long)arg1;
- (id)shelves;
- (long long)variant;
- (long long)version;

@end
