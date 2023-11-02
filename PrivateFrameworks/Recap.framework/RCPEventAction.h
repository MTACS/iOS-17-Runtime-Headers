
@interface RCPEventAction : NSObject <NSCoding, NSCopying>

+ (id)actionToSetPointerAbsoluteLocation:(struct CGPoint { double x1; double x2; })arg1 environment:(id)arg2;
+ (id)actionToSetPointerCurrentAbsoluteLocation;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)play;

@end
