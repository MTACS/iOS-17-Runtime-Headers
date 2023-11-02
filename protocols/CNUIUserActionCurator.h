
@protocol CNUIUserActionCurator <NSObject>

@required

- (CNUIUserActionItem *)curateUserAction:(CNUIUserActionItem *)arg1;
- (CNUIUserActionItem *)curateUserAction:(CNUIUserActionItem *)arg1 withKeysToFetch:(NSArray *)arg2;

@end
