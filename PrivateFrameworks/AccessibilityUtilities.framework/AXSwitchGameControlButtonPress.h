
@interface AXSwitchGameControlButtonPress : NSObject <NSSecureCoding> {
    unsigned long long  _button;
    bool  _joystickPress;
    bool  _toggle;
    float  _xMagnitude;
    float  _yMagnitude;
}

@property (nonatomic) unsigned long long button;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (getter=isJoystickPress, nonatomic) bool joystickPress;
@property (getter=isToggle, nonatomic) bool toggle;
@property (nonatomic) float xMagnitude;
@property (nonatomic) float yMagnitude;

+ (bool)supportsSecureCoding;

- (unsigned long long)button;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (bool)isJoystickPress;
- (bool)isToggle;
- (void)setButton:(unsigned long long)arg1;
- (void)setJoystickPress:(bool)arg1;
- (void)setToggle:(bool)arg1;
- (void)setXMagnitude:(float)arg1;
- (void)setYMagnitude:(float)arg1;
- (float)xMagnitude;
- (float)yMagnitude;

@end
