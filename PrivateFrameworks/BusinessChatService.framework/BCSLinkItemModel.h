
@interface BCSLinkItemModel : NSObject <BCSItemIdentifying, BCSLinkItemDescribing, BSDescriptionProviding, NSCopying, NSSecureCoding> {
    long long  _action;
    NSString * _bundleID;
    NSArray * _businessLinkContentItemModels;
    NSDictionary * _debugInfo;
    NSString * _heroImageURLString;
    NSString * _iconImageURLString;
    bool  _isPoweredBy;
    BCSLinkItemIdentifier * _itemIdentifier;
    NSURL * _linkURL;
    NSDictionary * _mapIconStyleAttributes;
    NSNumber * _mapItemMUID;
    NSURL * _redirectURL;
}

@property (nonatomic, readonly) long long action;
@property (nonatomic, readonly, copy) NSString *bundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *fullHash;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) NSString *heroImageURLString;
@property (nonatomic, readonly, retain) NSString *iconImageURLString;
@property (nonatomic, readonly) bool isPoweredBy;
@property (nonatomic, readonly) NSObject *itemIdentifier;
@property (nonatomic, readonly, retain) NSURL *linkURL;
@property (nonatomic, readonly, retain) NSDictionary *mapIconStyleAttributes;
@property (nonatomic, readonly, retain) NSNumber *mapItemMUID;
@property (nonatomic, readonly, retain) NSURL *redirectURL;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long truncatedHash;
@property (nonatomic, readonly) long long type;

+ (id)linkItemModelsFromLinkJSONObj:(id)arg1;
+ (id)linkItemModelsFromRecords:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)action;
- (id)bundleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fullHash;
- (id)heroImageURLString;
- (id)iconImageURLString;
- (id)initWithCoder:(id)arg1;
- (id)initWithLinkMessage:(id)arg1 bucketID:(id)arg2;
- (bool)isPoweredBy;
- (id)itemIdentifier;
- (id)linkURL;
- (id)mapIconStyleAttributes;
- (id)mapItemMUID;
- (bool)matchesItemIdentifying:(id)arg1;
- (id)redirectURL;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (long long)truncatedHash;
- (long long)type;

@end
