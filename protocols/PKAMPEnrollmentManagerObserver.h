
@protocol PKAMPEnrollmentManagerObserver <NSObject>

@optional

- (void)ampEnrollmentManager:(PKAMPEnrollmentManager *)arg1 didEnrollPaymentPass:(PKPaymentPass *)arg2 success:(bool)arg3;

@end
