
@interface PrivacyProxyTokenInfo : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _agentLowWaterMark;
    unsigned long long  _agentTokens;
    unsigned long long  _cacheLowWaterMark;
    unsigned long long  _cachedTokens;
}

@property (nonatomic) unsigned long long agentLowWaterMark;
@property (nonatomic) unsigned long long agentTokens;
@property (nonatomic) unsigned long long cacheLowWaterMark;
@property (nonatomic) unsigned long long cachedTokens;

+ (bool)supportsSecureCoding;

- (unsigned long long)agentLowWaterMark;
- (unsigned long long)agentTokens;
- (unsigned long long)cacheLowWaterMark;
- (unsigned long long)cachedTokens;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAgentLowWaterMark:(unsigned long long)arg1;
- (void)setAgentTokens:(unsigned long long)arg1;
- (void)setCacheLowWaterMark:(unsigned long long)arg1;
- (void)setCachedTokens:(unsigned long long)arg1;

@end
