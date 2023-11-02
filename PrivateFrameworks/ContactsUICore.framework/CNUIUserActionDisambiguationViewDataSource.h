
@interface CNUIUserActionDisambiguationViewDataSource : CNUIUserActionListDataSource <CNUIUserActionDisambiguationViewDataSource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) bool tracksChanges;

- (id)categoriesForContactActionsView:(id)arg1;
- (id)contactActionsView:(id)arg1 imageForActionCategory:(id)arg2;

@end
