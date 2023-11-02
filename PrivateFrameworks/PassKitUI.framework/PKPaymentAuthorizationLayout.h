
@interface PKPaymentAuthorizationLayout : NSObject {
    double  _contentHorizontalMargin;
    double  _glyphDimension;
    bool  _isAMPPayment;
    bool  _isInstallment;
    bool  _isPaymentSummaryPinned;
    NSString * _localizedNavigationTitle;
    unsigned long long  _requestType;
    unsigned long long  _requestor;
    bool  _shouldSuppressTotal;
    long long  _style;
    double  _valueLeftMargin;
}

@property (nonatomic, readonly) double contentHorizontalMargin;
@property (nonatomic, readonly) double glyphDimension;
@property (nonatomic, readonly) bool isAMPPayment;
@property (nonatomic, readonly) bool isInstallment;
@property (nonatomic, readonly) bool isPaymentSummaryPinned;
@property (nonatomic, readonly) NSString *localizedNavigationTitle;
@property (nonatomic, readonly) unsigned long long requestType;
@property (nonatomic, readonly) unsigned long long requestor;
@property (nonatomic, readonly) bool shouldSuppressTotal;
@property (nonatomic, readonly) long long style;
@property (nonatomic, readonly) double valueLeftMargin;

- (void).cxx_destruct;
- (double)contentHorizontalMargin;
- (double)glyphDimension;
- (id)initWithStyle:(long long)arg1 paymentRequest:(id)arg2;
- (bool)isAMPPayment;
- (bool)isInstallment;
- (bool)isPaymentSummaryPinned;
- (id)localizedNavigationTitle;
- (unsigned long long)requestType;
- (unsigned long long)requestor;
- (bool)shouldSuppressTotal;
- (long long)style;
- (double)valueLeftMargin;

@end
