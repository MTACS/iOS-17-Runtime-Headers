
@interface FPExtensionResponse : NSObject <NSSecureCoding> {
    NSString * _callDescription;
    NSDictionary * _domainUserInfo;
    NSFileProviderDomainVersion * _domainVersion;
    int  _extensionPid;
    long long  _sequenceNumber;
}

@property (nonatomic, copy) NSString *callDescription;
@property (nonatomic, retain) NSDictionary *domainUserInfo;
@property (nonatomic, retain) NSFileProviderDomainVersion *domainVersion;
@property (nonatomic) int extensionPid;
@property (nonatomic) long long sequenceNumber;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)callDescription;
- (id)description;
- (id)domainUserInfo;
- (id)domainVersion;
- (void)encodeWithCoder:(id)arg1;
- (int)extensionPid;
- (id)initWithCoder:(id)arg1;
- (long long)sequenceNumber;
- (void)setCallDescription:(id)arg1;
- (void)setDomainUserInfo:(id)arg1;
- (void)setDomainVersion:(id)arg1;
- (void)setExtensionPid:(int)arg1;
- (void)setSequenceNumber:(long long)arg1;

@end
