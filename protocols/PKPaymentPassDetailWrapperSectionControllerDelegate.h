
@protocol PKPaymentPassDetailWrapperSectionControllerDelegate <NSObject>

@required

- (PKFamilyMemberCollection *)familyCollection;
- (void)presentAddCard;
- (void)reloadSectionIdentifier:(NSString *)arg1;
- (void)reloadSections:(NSArray *)arg1;
- (void)setFamilyCollection:(PKFamilyMemberCollection *)arg1;
- (void)setTransactionSourceCollection:(PKTransactionSourceCollection *)arg1;
- (PKTransactionSourceCollection *)transactionSourceCollection;

@end
