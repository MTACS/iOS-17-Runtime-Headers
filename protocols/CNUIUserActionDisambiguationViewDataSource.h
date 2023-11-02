
@protocol CNUIUserActionDisambiguationViewDataSource <CNUIUserActionListDataSource>

@required

- (NSArray *)categoriesForContactActionsView:(id <CNUIUserActionDisambiguationView>)arg1;
- (UIImage *)contactActionsView:(id <CNUIUserActionDisambiguationView>)arg1 imageForActionCategory:(NSString *)arg2;

@end
