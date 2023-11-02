
@interface SAMappedDomainEntity : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSString *appBundleId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSData *usoGraphPayload;

- (id)appBundleId;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)identifier;
- (void)setAppBundleId:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setUsoGraphPayload:(id)arg1;
- (id)usoGraphPayload;

@end
