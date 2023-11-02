
@interface PKAccountWebServiceFinancingPlanCancellationResponse : PKAccountWebServiceResponse {
    PKAccount * _account;
    PKPayLaterFinancingPlan * _financingPlan;
}

@property (nonatomic, readonly) PKAccount *account;
@property (nonatomic, readonly) PKPayLaterFinancingPlan *financingPlan;

+ (bool)jsonDataOptional;

- (void).cxx_destruct;
- (id)account;
- (id)financingPlan;
- (id)initWithData:(id)arg1;

@end
