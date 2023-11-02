
@interface PUEditActionActivity : UIActivity {
    NSString * _actionName;
    id /* block */  _activityBlock;
    id /* block */  _canPerformActivityActionHandler;
    bool  _disablesInsteadOfHides;
    NSString * _internalActivityType;
    id /* block */  _performActivityActionHandler;
    NSString * _systemImageName;
}

@property (nonatomic, copy) NSString *actionName;
@property (nonatomic, copy) id /* block */ activityBlock;
@property (nonatomic, copy) id /* block */ canPerformActivityActionHandler;
@property (nonatomic) bool disablesInsteadOfHides;
@property (nonatomic, retain) NSString *internalActivityType;
@property (nonatomic, copy) id /* block */ performActivityActionHandler;
@property (nonatomic, copy) NSString *systemImageName;

+ (long long)activityCategory;

- (void).cxx_destruct;
- (bool)_isDisabled;
- (id)_systemImageName;
- (id)actionName;
- (id /* block */)activityBlock;
- (id)activityTitle;
- (id)activityType;
- (id /* block */)canPerformActivityActionHandler;
- (bool)canPerformWithActivityItems:(id)arg1;
- (bool)disablesInsteadOfHides;
- (id)initWithActionName:(id)arg1 activityType:(id)arg2 systemImageName:(id)arg3;
- (id)internalActivityType;
- (void)performActivity;
- (id /* block */)performActivityActionHandler;
- (void)setActionName:(id)arg1;
- (void)setActivityBlock:(id /* block */)arg1;
- (void)setCanPerformActivityActionHandler:(id /* block */)arg1;
- (void)setDisablesInsteadOfHides:(bool)arg1;
- (void)setInternalActivityType:(id)arg1;
- (void)setPerformActivityActionHandler:(id /* block */)arg1;
- (void)setSystemImageName:(id)arg1;
- (id)systemImageName;

@end
