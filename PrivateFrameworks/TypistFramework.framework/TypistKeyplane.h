
@interface TypistKeyplane : NSObject <NSSecureCoding> {
    bool  _isAlphabeticPlane;
    bool  _isLetters;
    bool  _isShiftKeyplane;
    NSString * _name;
    bool  _usesAutoShift;
}

@property (nonatomic) bool isAlphabeticPlane;
@property (nonatomic) bool isLetters;
@property (nonatomic) bool isShiftKeyplane;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) bool usesAutoShift;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isAlphabeticPlane;
- (bool)isLetters;
- (bool)isShiftKeyplane;
- (id)name;
- (void)setIsAlphabeticPlane:(bool)arg1;
- (void)setIsLetters:(bool)arg1;
- (void)setIsShiftKeyplane:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setUsesAutoShift:(bool)arg1;
- (bool)usesAutoShift;

@end
