
@interface SAGetSessionCertificate : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSNumber *deviceAuthVersion;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)getSessionCertificate;
+ (id)getSessionCertificateWithDictionary:(id)arg1 context:(id)arg2;

- (id)deviceAuthVersion;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setDeviceAuthVersion:(id)arg1;

@end
