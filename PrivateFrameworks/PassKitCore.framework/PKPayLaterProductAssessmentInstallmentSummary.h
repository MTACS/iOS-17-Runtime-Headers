
@interface PKPayLaterProductAssessmentInstallmentSummary : NSObject {
    NSArray * _installmentAmounts;
    long long  _installmentCount;
    NSArray * _installmentDates;
}

@property (nonatomic, copy) NSArray *installmentAmounts;
@property (nonatomic) long long installmentCount;
@property (nonatomic, copy) NSArray *installmentDates;

- (void).cxx_destruct;
- (id)installmentAmounts;
- (long long)installmentCount;
- (id)installmentDates;
- (void)setInstallmentAmounts:(id)arg1;
- (void)setInstallmentCount:(long long)arg1;
- (void)setInstallmentDates:(id)arg1;

@end
