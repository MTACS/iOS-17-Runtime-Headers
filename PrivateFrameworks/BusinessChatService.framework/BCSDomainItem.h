
@interface BCSDomainItem : NSObject <BCSDomainItemProtocol> {
    NSString * _base64EncodedShardString;
    BCSDomainBundleIdPatterns * _domainBundleIDPatterns;
    NSDate * _expirationDate;
}

@property (nonatomic, copy) NSString *base64EncodedShardString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *domain;
@property (nonatomic, retain) BCSDomainBundleIdPatterns *domainBundleIDPatterns;
@property (nonatomic, copy) NSDate *expirationDate;
@property (getter=isExpired, nonatomic, readonly) bool expired;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)base64EncodedShardString;
- (id)domain;
- (id)domainBundleIDPatterns;
- (id)expirationDate;
- (id)initWithBase64EncodedShardString:(id)arg1 expirationDate:(id)arg2;
- (bool)isExpired;
- (void)setBase64EncodedShardString:(id)arg1;
- (void)setDomainBundleIDPatterns:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (long long)type;

@end
