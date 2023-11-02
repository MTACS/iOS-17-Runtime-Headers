
@protocol CRKCardViewControllerProviding <NSObject>

@optional

- (UIViewController<CRKCardViewControlling> *)cardViewControllerForCard:(id <CRCard>)arg1;
- (unsigned long long)displayPriorityForCard:(id <CRCard>)arg1;
- (void)presentation:(id <CRKCardPresenting>)arg1 didApplyCardSectionViewSource:(id <CRKCardSectionViewSourcing>)arg2 toCardViewController:(UIViewController<CRKCardViewControlling> *)arg3;
- (void)unregisterCardViewController:(UIViewController<CRKCardViewControlling> *)arg1;

@end
