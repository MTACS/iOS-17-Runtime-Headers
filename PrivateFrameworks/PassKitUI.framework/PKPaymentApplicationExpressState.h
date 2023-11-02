
@interface PKPaymentApplicationExpressState : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _isExpressEnabled;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _isPending;
    void paymentApplication;
}

@property (nonatomic) bool isExpressEnabled;
@property (nonatomic, readonly) PKPaymentApplication *paymentApplication;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPaymentApplication:(id)arg1;
- (bool)isExpressEnabled;
- (id)paymentApplication;
- (void)setIsExpressEnabled:(bool)arg1;

@end
