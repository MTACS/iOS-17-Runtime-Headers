
@interface TestCNUIUserActionListDataSource : NSObject <CNUIUserActionListDataSource> {
    NSDictionary * _actionsByActionTypeByContact;
    CNContact * _contact;
    bool  _tracksChanges;
    NSDictionary * _userActionListModelResultBlocksByActionTypeAskedFor;
}

@property (nonatomic, readonly) NSDictionary *actionsByActionTypeByContact;
@property (nonatomic, retain) CNContact *contact;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) bool tracksChanges;
@property (nonatomic, retain) NSDictionary *userActionListModelResultBlocksByActionTypeAskedFor;

+ (id)allActionTypes;
+ (id)allSupportedActionTypes;
+ (id)allSupportedActionTypesWithCapabilities:(id)arg1;

- (void).cxx_destruct;
- (id)actionTypesForConsumer:(id)arg1;
- (id)actionsByActionTypeByContact;
- (id)consumer:(id)arg1 actionModelsForActionType:(id)arg2;
- (id)consumer:(id)arg1 actionModelsForActionType:(id)arg2 handler:(id /* block */)arg3;
- (id)consumer:(id)arg1 imageForActionType:(id)arg2;
- (id)consumer:(id)arg1 localizedButtonDisplayNameForActionType:(id)arg2;
- (id)consumer:(id)arg1 localizedDisplayNameForActionType:(id)arg2;
- (id)consumer:(id)arg1 localizedDisplayNameForButtonWithDefaultAction:(id)arg2 actionType:(id)arg3;
- (id)contact;
- (id)initWithActionsByActionTypeByContact:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setTracksChanges:(bool)arg1;
- (void)setUserActionListModelResultBlocksByActionTypeAskedFor:(id)arg1;
- (id)thirdPartyActionsForContactProperty:(id)arg1;
- (id)thirdPartyActionsForCurrentContactAndPropertyKey:(id)arg1 identifier:(id)arg2;
- (id)thirdPartyTargetsForActionTypes:(id)arg1;
- (bool)tracksChanges;
- (id)userActionListModelResultBlocksByActionTypeAskedFor;

@end
