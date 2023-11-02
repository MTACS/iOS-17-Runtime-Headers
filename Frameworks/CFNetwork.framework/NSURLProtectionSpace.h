
@interface NSURLProtectionSpace : NSObject <NSCopying, NSSecureCoding> {
    NSURLProtectionSpaceInternal * _internal;
}

@property (nonatomic, readonly) bool _sf_canAuthenticate;
@property (nonatomic, readonly, copy) NSString *_sf_highLevelDomainAndPort;
@property (nonatomic, readonly) NSArray *_sf_identities;
@property (readonly, copy) NSString *authenticationMethod;
@property (readonly, copy) NSString *host;
@property (readonly) bool isProxy;
@property (readonly) long long port;
@property (readonly, copy) NSString *protocol;
@property (readonly, copy) NSString *proxyType;
@property (readonly, copy) NSString *realm;
@property (readonly) bool receivesCredentialSecurely;
@property (nonatomic, readonly) NSURL *safari_URL;
@property (nonatomic, readonly) NSString *safari_addressString;
@property (nonatomic, readonly) bool safari_allowsCredentialSaving;
@property (nonatomic, readonly) long long safari_defaultPortForProtocol;
@property (nonatomic, readonly) bool safari_hasDefaultPortForProtocol;
@property (nonatomic, readonly, copy) NSString *safari_identityPreferenceDomain;
@property (nonatomic, readonly) NSURLProtectionSpace *safari_protectionSpaceByReplacingHostWithHighlevelDomain;
@property (nonatomic, readonly) struct __CFString { }*safari_protocolAsSecAttrProtocolValue;
@property (nonatomic, readonly, copy) NSString *safari_userVisibleSiteForProtectionSpace;

// Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork

+ (bool)supportsSecureCoding;

- (struct _CFURLProtectionSpace { }*)_CFURLProtectionSpace;
- (struct _CFURLProtectionSpace { }*)_cfurlprtotectionspace;
- (id)_initWithCFURLProtectionSpace:(struct _CFURLProtectionSpace { }*)arg1;
- (void)_setDistinguishedNames:(id)arg1;
- (void)_setServerTrust:(struct __SecTrust { }*)arg1;
- (id)authenticationMethod;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)distinguishedNames;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)host;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithHost:(id)arg1 port:(long long)arg2 protocol:(id)arg3 realm:(id)arg4 authenticationMethod:(id)arg5;
- (id)initWithProxyHost:(id)arg1 port:(long long)arg2 type:(id)arg3 realm:(id)arg4 authenticationMethod:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isProxy;
- (long long)port;
- (id)protocol;
- (id)proxyType;
- (id)realm;
- (bool)receivesCredentialSecurely;
- (struct __SecTrust { }*)serverTrust;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

- (bool)_sf_canAuthenticate;
- (id)_sf_highLevelDomainAndPort;
- (id)_sf_identities;

// Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore

+ (id)safari_HTMLFormProtectionSpaceForURL:(id)arg1;
+ (id)safari_passkeySidecarProtectionSpaceForRelyingPartyIdentifier:(id)arg1;

- (bool)isEqualToProtectionSpaceForPasswordManager:(id)arg1;
- (id)safari_URL;
- (id)safari_addressString;
- (bool)safari_allowsCredentialSaving;
- (long long)safari_compareToHighLevelDomainFromProtectionSpace:(id)arg1;
- (long long)safari_compareToHighLevelDomainFromProtectionSpaceOrderingDecimalCharactersLast:(id)arg1;
- (id)safari_creationDateOfCredentialWithUser:(id)arg1;
- (long long)safari_defaultPortForProtocol;
- (bool)safari_hasDefaultPortForProtocol;
- (id)safari_identityPreferenceDomain;
- (id)safari_protectionSpaceByReplacingHostWithHighlevelDomain;
- (struct __CFString { }*)safari_protocolAsSecAttrProtocolValue;
- (id)safari_userVisibleSiteForProtectionSpace;

@end
