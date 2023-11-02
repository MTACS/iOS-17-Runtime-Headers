
@interface STDynamicActivityAttribution : NSObject <NSSecureCoding> {
    NSString * _bundleIdentifier;
    struct { 
        unsigned int val[8]; 
    }  _clientAuditToken;
    NSString * _clientExecutablePath;
    NSString * _formattedString;
    NSString * _localizationKey;
    struct { 
        unsigned int val[8]; 
    }  _maskingClientAuditToken;
    NSString * _maskingClientExecutablePath;
    NSString * _website;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly) struct { unsigned int x1[8]; } clientAuditToken;
@property (nonatomic, readonly, copy) NSString *clientExecutablePath;
@property (nonatomic, readonly, copy) NSString *formattedString;
@property (nonatomic, readonly, copy) NSString *localizationKey;
@property (nonatomic, readonly) struct { unsigned int x1[8]; } maskingClientAuditToken;
@property (nonatomic, readonly, copy) NSString *maskingClientExecutablePath;
@property (nonatomic, readonly, copy) NSString *website;

+ (id)attributionForClientAuditToken:(struct { unsigned int x1[8]; })arg1 clientExecutablePath:(id)arg2 bundleID:(id)arg3 localizationKey:(id)arg4;
+ (id)attributionForClientAuditToken:(struct { unsigned int x1[8]; })arg1 maskingClientAuditToken:(struct { unsigned int x1[8]; })arg2 clientExecutablePath:(id)arg3 maskingClientExecutablePath:(id)arg4 localizationKey:(id)arg5;
+ (id)attributionForClientAuditToken:(struct { unsigned int x1[8]; })arg1 maskingClientAuditToken:(struct { unsigned int x1[8]; })arg2 clientExecutablePath:(id)arg3 maskingClientExecutablePath:(id)arg4 stringWithFormat:(id)arg5;
+ (id)attributionForClientAuditToken:(struct { unsigned int x1[8]; })arg1 maskingClientAuditToken:(struct { unsigned int x1[8]; })arg2 clientExecutablePath:(id)arg3 maskingClientExecutablePath:(id)arg4 website:(id)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (struct { unsigned int x1[8]; })clientAuditToken;
- (id)clientExecutablePath;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)formattedString;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizationKey;
- (struct { unsigned int x1[8]; })maskingClientAuditToken;
- (id)maskingClientExecutablePath;
- (id)website;

@end
