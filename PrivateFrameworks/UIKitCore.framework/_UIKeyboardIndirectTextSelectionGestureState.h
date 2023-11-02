
@interface _UIKeyboardIndirectTextSelectionGestureState : NSObject <NSSecureCoding> {
    unsigned long long  _flickDirection;
    bool  _isShiftKeyBeingHeld;
    long long  _state;
    unsigned long long  _touchCount;
    struct CGPoint { 
        double x; 
        double y; 
    }  _translation;
    long long  _type;
}

@property (nonatomic) unsigned long long flickDirection;
@property (nonatomic) bool isShiftKeyBeingHeld;
@property (nonatomic) long long state;
@property (nonatomic) unsigned long long touchCount;
@property (nonatomic) struct CGPoint { double x1; double x2; } translation;
@property (nonatomic) long long type;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)flickDirection;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isShiftKeyBeingHeld;
- (void)setFlickDirection:(unsigned long long)arg1;
- (void)setIsShiftKeyBeingHeld:(bool)arg1;
- (void)setState:(long long)arg1;
- (void)setTouchCount:(unsigned long long)arg1;
- (void)setTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setType:(long long)arg1;
- (long long)state;
- (unsigned long long)touchCount;
- (struct CGPoint { double x1; double x2; })translation;
- (long long)type;

@end
