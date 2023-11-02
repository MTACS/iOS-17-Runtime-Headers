
@protocol AAInheritanceContactInfo <AAInheritanceContact>

@required

- (NSString *)handle;
- (id)initWithBeneficiaryID:(NSUUID *)arg1 benefactorAltDSID:(NSString *)arg2 handle:(NSString *)arg3;

@end
