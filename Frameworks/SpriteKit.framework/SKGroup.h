
@interface SKGroup : SKAction {
    NSArray * _actions;
    void * _mycaction;
}

+ (id)groupWithActions:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)finished;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;
- (id)subactions;

@end
