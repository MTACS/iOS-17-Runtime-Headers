
@interface ATXHeuristicActionMakerForAction : ATXHeuristicActionMaker {
    ATXAction * _action;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_makeAction;
- (id)actionTypeName;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAction:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
