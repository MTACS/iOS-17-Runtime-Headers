
@protocol AAInheritanceContact <NSObject>

@required

- (AKInheritanceAccessKey *)accessKey;
- (NSString *)benefactorAltDSID;
- (NSUUID *)beneficiaryID;
- (id)initWithBeneficiaryID:(NSUUID *)arg1 benefactorAltDSID:(NSString *)arg2;
- (void)setAccessKey:(AKInheritanceAccessKey *)arg1;

@end
