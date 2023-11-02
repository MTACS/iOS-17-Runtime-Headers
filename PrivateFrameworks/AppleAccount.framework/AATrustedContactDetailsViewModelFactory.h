
@interface AATrustedContactDetailsViewModelFactory : NSObject

- (void)prepareForCustodianForFlow:(id)arg1 withContact:(id)arg2;
- (void)prepareForMyBenefactorFlow:(id)arg1 withContact:(id)arg2;
- (void)prepareForMyBeneficiaryFlow:(id)arg1 withContact:(id)arg2;
- (void)prepareForMyCustodianFlow:(id)arg1 withContact:(id)arg2;
- (id)viewModelForFlow:(unsigned long long)arg1 withContact:(id)arg2;

@end
