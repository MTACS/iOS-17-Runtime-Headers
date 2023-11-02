
@interface PKAccountWebServicePayLaterContentResponse : PKAccountWebServiceResponse {
    PKPayLaterDynamicContent * _dynamicContent;
    NSArray * _reportIssueTopics;
}

@property (nonatomic, readonly) PKPayLaterDynamicContent *dynamicContent;
@property (nonatomic, readonly, copy) NSArray *reportIssueTopics;

- (void).cxx_destruct;
- (id)dynamicContent;
- (id)initWithData:(id)arg1;
- (id)reportIssueTopics;

@end
