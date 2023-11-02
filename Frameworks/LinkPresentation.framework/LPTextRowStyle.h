
@interface LPTextRowStyle : NSObject {
    long long  _balancingMode;
    LPTextViewStyle * _leading;
    LPTextViewStyle * _trailing;
}

@property (nonatomic) long long balancingMode;
@property (nonatomic, readonly) LPTextViewStyle *leading;
@property (nonatomic, readonly) LPTextViewStyle *trailing;

- (void).cxx_destruct;
- (void)applyToAllTextViewStyles:(id /* block */)arg1;
- (long long)balancingMode;
- (id)initWithPlatform:(long long)arg1 fontScalingFactor:(double)arg2;
- (id)leading;
- (id)left;
- (id)right;
- (void)setBalancingMode:(long long)arg1;
- (id)trailing;

@end
