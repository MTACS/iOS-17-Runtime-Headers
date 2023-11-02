
@interface AAAccountBeneficiaryManagementViewModel : NSObject

@property (nonatomic, readonly, copy) NSString *beneficiaryForGroupTitle;
@property (nonatomic, readonly, copy) NSString *learnMore;
@property (nonatomic, readonly, copy) NSURL *learnMoreURL;
@property (nonatomic, readonly, copy) NSString *myBeneficiariesAdd;
@property (nonatomic, readonly, copy) NSString *myBeneficiariesGroupFooter;
@property (nonatomic, readonly, copy) NSString *myBeneficiariesGroupTitle;
@property (nonatomic, readonly, copy) NSString *noBenefactorFooter;
@property (nonatomic, readonly, copy) NSString *title;

- (id)beneficiaryForGroupTitle;
- (id)learnMore;
- (id)learnMoreURL;
- (id)myBeneficiariesAdd;
- (id)myBeneficiariesGroupFooter;
- (id)myBeneficiariesGroupTitle;
- (id)noBenefactorFooter;
- (id)title;

@end
