
@interface PKPaymentEligibilitySupplementaryData : NSObject {
    PKAccount * _lightweightAccount;
}

@property (nonatomic, readonly, copy) PKAccount *lightweightAccount;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1 accountFeatureIdentifier:(unsigned long long)arg2;
- (id)lightweightAccount;

@end
