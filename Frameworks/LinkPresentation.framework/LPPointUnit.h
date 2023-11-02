
@interface LPPointUnit : NSObject <LPCSSText, LPHTMLAttributeText> {
    double  _value;
}

@property (nonatomic, readonly) double value;

+ (id)zero;

- (id)_lp_CSSText;
- (id)_lp_HTMLAttributeText;
- (id)initWithValue:(double)arg1;
- (double)value;

@end
