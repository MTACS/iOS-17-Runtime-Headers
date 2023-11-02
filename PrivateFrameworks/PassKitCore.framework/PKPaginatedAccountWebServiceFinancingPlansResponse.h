
@interface PKPaginatedAccountWebServiceFinancingPlansResponse : PKPaginatedAccountWebServiceResponse {
    PKAccount * _account;
    NSArray * _financingPlans;
}

@property (nonatomic, readonly) PKAccount *account;
@property (nonatomic, readonly, copy) NSArray *financingPlans;

- (void).cxx_destruct;
- (id)account;
- (id)financingPlans;
- (id)initWithData:(id)arg1;

@end
