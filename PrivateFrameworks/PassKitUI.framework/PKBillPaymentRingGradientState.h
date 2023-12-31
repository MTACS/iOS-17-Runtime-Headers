
@interface PKBillPaymentRingGradientState : NSObject {
    UIColor * _endColor;
    UIColor * _startColor;
}

@property (nonatomic, readonly, copy) UIColor *endColor;
@property (nonatomic, readonly, copy) UIColor *startColor;

- (void).cxx_destruct;
- (id)endColor;
- (id)initWithStartColor:(id)arg1 endColor:(id)arg2;
- (id)startColor;

@end
