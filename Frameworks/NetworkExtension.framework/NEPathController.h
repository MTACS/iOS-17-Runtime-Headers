
@interface NEPathController : NSObject <NEConfigurationValidating, NEPrettyDescription, NSCopying, NSSecureCoding> {
    long long  _cellularFallbackFlags;
    bool  _enabled;
    bool  _ignoreFallback;
    bool  _ignoreRouteRules;
    NSArray * _pathRules;
    NSArray * _payloadAppRules;
}

@property long long cellularFallbackFlags;
@property (getter=isEnabled) bool enabled;
@property (nonatomic, readonly) bool hasNonDefaultRules;
@property bool ignoreFallback;
@property bool ignoreRouteRules;
@property (copy) NSArray *pathRules;

+ (id)copyAggregatePathRules;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)cellularFallbackFlags;
- (bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyPathRuleBySigningIdentifier:(id)arg1;
- (id)copyPathRuleSigningIdentifiers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasNonDefaultRules;
- (bool)ignoreFallback;
- (bool)ignoreRouteRules;
- (id)initWithCoder:(id)arg1;
- (bool)isEnabled;
- (id)pathRules;
- (bool)removePathRuleBySigningIdentifier:(id)arg1;
- (void)setCellularFallbackFlags:(long long)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setIgnoreFallback:(bool)arg1;
- (void)setIgnoreRouteRules:(bool)arg1;
- (void)setPathRules:(id)arg1;

@end
