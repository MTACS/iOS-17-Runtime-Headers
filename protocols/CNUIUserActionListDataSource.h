
@protocol CNUIUserActionListDataSource <NSObject>

@required

+ (NSArray *)allActionTypes;
+ (NSArray *)allSupportedActionTypes;
+ (NSArray *)allSupportedActionTypesWithCapabilities:(id <CNCapabilities>)arg1;
+ (NSString *)displayNameForDisambiguationForActionType:(NSString *)arg1;

- (NSArray *)actionTypesForConsumer:(id <CNUIUserActionListConsumer>)arg1;
- (CNObservable *)consumer:(id <CNUIUserActionListConsumer>)arg1 actionModelsForContact:(CNContact *)arg2 actionType:(NSString *)arg3;
- (<CNCancelable> *)consumer:(void *)arg1 actionModelsForContact:(void *)arg2 actionType:(void *)arg3 handler:(void *)arg4; // needs 4 arg types, found 9: <CNUIUserActionListConsumer> *, CNContact *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CNUIUserActionListModel *, void*
- (CNUIUserActionListModel *)consumer:(id <CNUIUserActionListConsumer>)arg1 currentActionModelForContact:(CNContact *)arg2 actionType:(NSString *)arg3;
- (void)consumer:(id <CNUIUserActionListConsumer>)arg1 didSelectItem:(CNUIUserActionItem *)arg2 forContact:(CNContact *)arg3 actionType:(NSString *)arg4;
- (UIImage *)consumer:(id <CNUIUserActionListConsumer>)arg1 imageForActionType:(NSString *)arg2;
- (NSString *)consumer:(id <CNUIUserActionListConsumer>)arg1 localizedButtonDisplayNameForActionType:(NSString *)arg2;
- (NSString *)consumer:(id <CNUIUserActionListConsumer>)arg1 localizedDisplayNameForActionType:(NSString *)arg2;
- (NSString *)consumer:(id <CNUIUserActionListConsumer>)arg1 localizedDisplayNameForButtonWithDefaultAction:(CNUIUserActionItem *)arg2 actionType:(NSString *)arg3;
- (void)setCacheCapacity:(unsigned long long)arg1;
- (void)setCacheEntryExpirationAge:(double)arg1;
- (void)setCacheEntryRefreshAge:(double)arg1;
- (void)setTracksChanges:(bool)arg1;
- (CNFuture *)thirdPartyActionsForContact:(CNContact *)arg1 propertyKey:(NSString *)arg2 identifier:(NSString *)arg3;
- (CNFuture *)thirdPartyActionsForContactProperty:(CNContactProperty *)arg1;
- (CNFuture *)thirdPartyTargetsForActionTypes:(NSArray *)arg1;
- (bool)tracksChanges;

@end
