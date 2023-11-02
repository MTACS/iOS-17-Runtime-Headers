
@interface PKSimulatorPaymentPass : PKPaymentPass {
    NSDictionary * _dictionary;
}

- (void).cxx_destruct;
- (id)devicePrimaryPaymentApplication;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;
- (id)localizedDescription;
- (id)primaryAccountIdentifier;
- (id)primaryAccountNumberSuffix;

@end
