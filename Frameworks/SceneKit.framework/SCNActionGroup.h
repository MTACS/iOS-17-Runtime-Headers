
@interface SCNActionGroup : SCNAction {
    NSArray * _actions;
    void * _mycaction;
}

+ (id)groupWithActions:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (bool)finished;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isCustom;
- (id)reversedAction;
- (void)setupWithActions:(id)arg1;

@end
