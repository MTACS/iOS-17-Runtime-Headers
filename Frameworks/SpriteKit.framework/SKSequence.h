
@interface SKSequence : SKAction {
    NSArray * _actions;
    unsigned long long  _animIndex;
    void * _mycaction;
}

+ (id)sequenceWithActions:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;
- (id)subactions;

@end
