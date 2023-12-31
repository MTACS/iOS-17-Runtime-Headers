
@interface BBActionGroup : BBAction {
    NSArray * _actions;
}

@property (nonatomic, copy) NSArray *actions;

+ (id)actionGroupWithActions:(id)arg1;

- (void).cxx_destruct;
- (id)actions;
- (id)awakeAfterUsingCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)replacementObjectForCoder:(id)arg1;
- (void)setActions:(id)arg1;

@end
