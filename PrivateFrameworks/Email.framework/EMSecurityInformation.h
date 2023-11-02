
@interface EMSecurityInformation : NSObject <EFPubliclyDescribable, NSSecureCoding> {
    bool  _hasEncryptedDescendantPart;
    bool  _isEncrypted;
    NSArray * _signers;
    NSError * _smimeError;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *ef_publicDescription;
@property (nonatomic, readonly) bool hasEncryptedDescendantPart;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isEncrypted;
@property (nonatomic, readonly) bool isSigned;
@property (nonatomic, readonly) NSArray *signers;
@property (nonatomic, readonly) NSError *smimeError;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)ef_publicDescription;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasEncryptedDescendantPart;
- (id)initWithCoder:(id)arg1;
- (id)initWithSigners:(id)arg1 isEncrypted:(bool)arg2 hasEncryptedDescendantPart:(bool)arg3 smimeError:(id)arg4;
- (bool)isEncrypted;
- (bool)isSigned;
- (void)reevaluateTrustWithNetworkAccessAllowed;
- (id)signers;
- (id)smimeError;

@end
