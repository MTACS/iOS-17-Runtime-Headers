
@protocol VCSYChange <VCPBCodable, VCPBMessageTyped, SYChange>

@required

- (long long)changeType;
- (id)initWithObjectIdentifier:(NSString *)arg1 changeType:(long long)arg2;
- (NSString *)objectIdentifier;

@end
