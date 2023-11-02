
@interface SCNActionCustom : SCNAction

+ (id)customActionWithDuration:(double)arg1 actionBlock:(id /* block */)arg2;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isCustom;
- (id)reversedAction;

@end
