
@protocol BCSDomainItemProtocol <BCSDomainItemIdentifying, BCSExpiring>

@required

- (NSString *)base64EncodedShardString;
- (BCSDomainBundleIdPatterns *)domainBundleIDPatterns;

@end
