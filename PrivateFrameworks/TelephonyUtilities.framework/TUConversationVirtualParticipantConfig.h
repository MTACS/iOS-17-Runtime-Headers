
@interface TUConversationVirtualParticipantConfig : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _connectionMaxAttempts;
    unsigned long long  _connectionRetryIntervalMillis;
    NSData * _idsAliasingSalt;
    unsigned long long  _rpcStreamMaxAttempts;
    unsigned long long  _rpcStreamRetryIntervalMillis;
    NSString * _serverCertHostnameOverride;
    NSString * _serverCertLeafMarkerOIDOverride;
    bool  _serverCertValidationEnabled;
}

@property (nonatomic, readonly) unsigned long long connectionMaxAttempts;
@property (nonatomic, readonly) unsigned long long connectionRetryIntervalMillis;
@property (nonatomic, copy) NSData *idsAliasingSalt;
@property (nonatomic, readonly) unsigned long long rpcStreamMaxAttempts;
@property (nonatomic, readonly) unsigned long long rpcStreamRetryIntervalMillis;
@property (nonatomic, readonly, copy) NSString *serverCertHostnameOverride;
@property (nonatomic, readonly, copy) NSString *serverCertLeafMarkerOIDOverride;
@property (nonatomic, readonly) bool serverCertValidationEnabled;

+ (id)serverCertHostnameUserDefaultsKey;
+ (id)serverCertLeafMarkerOIDUserDefaultsKey;
+ (id)serverCertValidationEnabledUserDefaultsKey;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)connectionMaxAttempts;
- (unsigned long long)connectionRetryIntervalMillis;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)idsAliasingSalt;
- (id)initWithCoder:(id)arg1;
- (id)initWithConnectionRetryIntervalMillis:(unsigned long long)arg1 connectionMaxAttempts:(unsigned long long)arg2 rpcStreamRetryIntervalMillis:(unsigned long long)arg3 rpcStreamMaxAttempts:(unsigned long long)arg4 serverCertValidationEnabled:(bool)arg5 serverCertHostnameOverride:(id)arg6 serverCertLeafMarkerOIDOverride:(id)arg7;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToConversationVirtualParticipantConfig:(id)arg1;
- (unsigned long long)rpcStreamMaxAttempts;
- (unsigned long long)rpcStreamRetryIntervalMillis;
- (id)serverCertHostnameOverride;
- (id)serverCertLeafMarkerOIDOverride;
- (bool)serverCertValidationEnabled;
- (void)setIdsAliasingSalt:(id)arg1;

@end
