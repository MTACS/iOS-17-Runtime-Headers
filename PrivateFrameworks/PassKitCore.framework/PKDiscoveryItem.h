
@interface PKDiscoveryItem : PKDiscoveryObject <NSCopying, NSSecureCoding> {
    NSData * _clientData;
    bool  _entitledToForceLargeCard;
    NSURL * _layoutBundleURL;
    long long  _priority;
    bool  _shouldBadge;
    NSArray * _supportedLocalizations;
    long long  _type;
}

@property (nonatomic, retain) NSData *clientData;
@property (nonatomic) bool entitledToForceLargeCard;
@property (nonatomic, readonly) bool hasHitMaxLargeViewCount;
@property (nonatomic, readonly) bool hasHitMaxViewCount;
@property (nonatomic, copy) NSURL *layoutBundleURL;
@property (nonatomic) long long priority;
@property (nonatomic) bool shouldBadge;
@property (nonatomic, retain) NSArray *supportedLocalizations;
@property (nonatomic) long long type;

+ (id)activeItemFromEngagementRequest:(id)arg1;
+ (id)convertEngagementRequestToDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clientData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)entitledToForceLargeCard;
- (id)eventForKey:(id)arg1;
- (bool)hasHitMaxLargeViewCount;
- (bool)hasHitMaxViewCount;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isTerminalStatus;
- (id)layoutBundleURL;
- (long long)priority;
- (void)setClientData:(id)arg1;
- (void)setEntitledToForceLargeCard:(bool)arg1;
- (void)setLayoutBundleURL:(id)arg1;
- (void)setPriority:(long long)arg1;
- (void)setShouldBadge:(bool)arg1;
- (void)setSupportedLocalizations:(id)arg1;
- (void)setType:(long long)arg1;
- (bool)shouldBadge;
- (id)supportedLocalizations;
- (long long)type;
- (void)updateForRuleResult:(bool)arg1;
- (void)updateWithDiscoveryItem:(id)arg1;

@end
