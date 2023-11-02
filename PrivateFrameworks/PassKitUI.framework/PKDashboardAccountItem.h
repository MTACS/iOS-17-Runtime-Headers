
@interface PKDashboardAccountItem : NSObject <PKDashboardItem> {
    PKAccount * _account;
    PKPaymentPass * _presentingPass;
}

@property (nonatomic, readonly) PKAccount *account;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKPaymentPass *presentingPass;
@property (readonly) Class superclass;

+ (id)identifier;

- (void).cxx_destruct;
- (id)account;
- (id)initWithAccount:(id)arg1 presentingPass:(id)arg2;
- (id)presentingPass;

@end
