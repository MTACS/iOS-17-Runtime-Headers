
@interface TIKeyEventMap : NSObject <NSSecureCoding>

+ (bool)supportsSecureCoding;

- (long long)candidateNumberKey:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)inputEventForInputString:(id)arg1 stringWithoutModifiers:(id)arg2 modifierFlags:(unsigned long long)arg3 keyboardState:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)remapKeyWithString:(id)arg1 stringWithoutModifiers:(id)arg2 modifierFlags:(unsigned long long)arg3 keyboardState:(id)arg4;

@end
