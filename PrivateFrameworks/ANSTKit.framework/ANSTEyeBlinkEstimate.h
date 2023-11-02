
@interface ANSTEyeBlinkEstimate : NSObject <NSSecureCoding> {
    long long  _blinkLeft;
    long long  _blinkRight;
}

@property (nonatomic, readonly) long long blinkLeft;
@property (nonatomic, readonly) long long blinkRight;

+ (id)new;
+ (bool)supportsSecureCoding;

- (long long)blinkLeft;
- (long long)blinkRight;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithBlinkLeft:(long long)arg1 blinkRight:(long long)arg2;
- (id)initWithCoder:(id)arg1;

@end
