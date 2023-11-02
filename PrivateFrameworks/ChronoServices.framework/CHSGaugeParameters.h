
@interface CHSGaugeParameters : NSObject <BSXPCSecureCoding> {
    double  _fraction;
    NSArray * _gradientColors;
    NSArray * _gradientLocations;
    NSAttributedString * _leadingText;
    unsigned long long  _style;
    NSAttributedString * _trailingText;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double fraction;
@property (nonatomic, readonly, copy) NSArray *gradientColors;
@property (nonatomic, readonly, copy) NSArray *gradientLocations;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSAttributedString *leadingText;
@property (nonatomic, readonly) unsigned long long style;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSAttributedString *trailingText;

+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (double)fraction;
- (id)gradientColors;
- (id)gradientLocations;
- (unsigned long long)hash;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithLeadingText:(id)arg1 trailingText:(id)arg2 style:(unsigned long long)arg3 gradientColors:(id)arg4 gradientLocations:(id)arg5 fraction:(double)arg6;
- (bool)isEqual:(id)arg1;
- (id)leadingText;
- (unsigned long long)style;
- (id)trailingText;

@end
