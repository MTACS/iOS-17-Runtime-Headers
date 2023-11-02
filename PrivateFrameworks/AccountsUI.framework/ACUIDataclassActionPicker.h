
@interface ACUIDataclassActionPicker : NSObject {
    NSArray * _actions;
    ACAccount * _affectedAccount;
    NSMutableArray * _affectedDataclasses;
}

@property (nonatomic, readonly) NSArray *actions;
@property (nonatomic, readonly) ACAccount *affectedAccount;
@property (nonatomic, copy) NSArray *affectedDataclasses;
@property (nonatomic, readonly) ACDataclassAction *firstDestructiveAction;
@property (nonatomic, readonly) bool hasDestructiveActions;
@property (nonatomic, readonly) long long priorityIndex;

- (void).cxx_destruct;
- (id)_stringForMessage:(id)arg1 withAccountType:(id)arg2 dataclassDescription:(id)arg3;
- (id)actionOfType:(long long)arg1;
- (id)actions;
- (void)addAffectedDataclass:(id)arg1;
- (id)affectedAccount;
- (id)affectedDataclasses;
- (id)descriptionForDataclassAction:(id)arg1;
- (id)firstDestructiveAction;
- (bool)hasActionOfType:(long long)arg1;
- (bool)hasDestructiveActions;
- (id)initWithActions:(id)arg1 affectingAccount:(id)arg2;
- (id)message;
- (long long)priorityIndex;
- (void)setAffectedDataclasses:(id)arg1;
- (id)showInViewController:(id)arg1;
- (id)title;

@end