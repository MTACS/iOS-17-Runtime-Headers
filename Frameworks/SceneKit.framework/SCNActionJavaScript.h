
@interface SCNActionJavaScript : SCNAction {
    NSString * _script;
}

+ (id)javaScriptActionWithDuration:(double)arg1 script:(id)arg2;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1;
- (bool)isCustom;
- (id)parameters;
- (id)reversedAction;

@end
