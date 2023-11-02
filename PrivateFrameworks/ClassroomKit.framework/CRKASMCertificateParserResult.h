
@interface CRKASMCertificateParserResult : NSObject {
    NSString * _userIdentifier;
    NSError * _validationError;
}

@property (nonatomic, readonly, copy) NSString *userIdentifier;
@property (nonatomic, readonly) NSError *validationError;

+ (bool)certificate:(id)arg1 hasCommonNameWithPrefix:(id)arg2;
+ (id)resultForCertificate:(id)arg1 expectedCommonNamePrefix:(id)arg2 expectedUserIdentifier:(id)arg3;

- (void).cxx_destruct;
- (id)initWithUserIdentifier:(id)arg1 validationError:(id)arg2;
- (bool)isCertificateValidWithError:(id*)arg1;
- (id)userIdentifier;
- (id)validationError;

@end
