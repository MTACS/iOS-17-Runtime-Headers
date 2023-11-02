
@protocol PKPassDetailScheduledPaymentsSectionControllerDelegate <NSObject>

@required

- (UITableViewCell *)cellForRow:(unsigned long long)arg1 inSection:(NSString *)arg2;
- (void)didSelectInDemoMode;
- (void)didSelectMakePayment;
- (void)didSelectPayment:(PKAccountPayment *)arg1;
- (void)didSelectSchedulePayments;
- (void)recomputeMappedSectionsAndReloadSections:(NSArray *)arg1;
- (void)reloadRow:(long long)arg1 inSectionWithSectionIdentifier:(NSString *)arg2;
- (void)reloadSectionIdentifier:(NSString *)arg1;
- (void)reloadSectionIdentifiers:(NSArray *)arg1;

@end
