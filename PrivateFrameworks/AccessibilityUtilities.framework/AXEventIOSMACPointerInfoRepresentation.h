
@interface AXEventIOSMACPointerInfoRepresentation : NSObject <NSCopying, NSSecureCoding> {
    long long  _buttonIndex;
    struct CGPoint { 
        double x; 
        double y; 
    }  _location;
    bool  _pressed;
}

@property (nonatomic) long long buttonIndex;
@property (nonatomic) struct CGPoint { double x1; double x2; } location;
@property (nonatomic) bool pressed;

+ (bool)supportsSecureCoding;

- (long long)buttonIndex;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct CGPoint { double x1; double x2; })location;
- (bool)pressed;
- (void)setButtonIndex:(long long)arg1;
- (void)setLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPressed:(bool)arg1;

@end
