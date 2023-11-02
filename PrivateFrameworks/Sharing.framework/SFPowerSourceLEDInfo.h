
@interface SFPowerSourceLEDInfo : NSObject <NSSecureCoding> {
    int  _LEDColor;
    int  _LEDState;
}

@property (nonatomic) int LEDColor;
@property (nonatomic) int LEDState;

+ (bool)supportsSecureCoding;

- (int)LEDColor;
- (int)LEDState;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setLEDColor:(int)arg1;
- (void)setLEDState:(int)arg1;

@end
