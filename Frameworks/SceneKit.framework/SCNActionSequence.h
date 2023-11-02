
@interface SCNActionSequence : SCNAction {
    NSArray * _actions;
    void * _mycaction;
}

+ (id)sequenceWithActions:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isCustom;
- (id)reversedAction;

@end
