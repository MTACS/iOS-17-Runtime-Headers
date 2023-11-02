
@interface PKPaymentSetupFieldBuiltInDateOfBirth : PKPaymentSetupFieldDate {
    long long  _minimumAge;
}

@property (nonatomic, readonly) long long minimumAge;

- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2;
- (bool)isBuiltIn;
- (long long)minimumAge;
- (bool)submissionStringMeetsAllRequirements;
- (void)updateWithConfiguration:(id)arg1;

@end
