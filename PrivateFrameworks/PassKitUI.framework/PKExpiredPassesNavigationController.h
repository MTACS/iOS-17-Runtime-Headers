
@interface PKExpiredPassesNavigationController : PKNavigationController {
    PKExpiredPassesViewController * _expiredPassesViewController;
}

@property (nonatomic, readonly) PKExpiredPassesViewController *expiredPassesViewController;

- (void).cxx_destruct;
- (id)expiredPassesViewController;
- (id)init;
- (id)initWithExistingGroupsController:(id)arg1;
- (id)initWithExistingGroupsController:(id)arg1 delegate:(id)arg2;

@end
