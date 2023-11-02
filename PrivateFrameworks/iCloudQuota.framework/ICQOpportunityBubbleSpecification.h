
@interface ICQOpportunityBubbleSpecification : NSObject {
    NSString * _appId;
    ICQOpportunityBubbleDetailsSpecification * _bubbleDetails;
    _ICQOpportunityBubbleReportingSpecification * _reportingDetails;
    ICQOpportunitySheetDetailsSpecification * _sheetDetails;
}

@property (nonatomic, copy) NSString *appId;
@property (nonatomic, retain) ICQOpportunityBubbleDetailsSpecification *bubbleDetails;
@property (nonatomic, retain) _ICQOpportunityBubbleReportingSpecification *reportingDetails;
@property (nonatomic, retain) ICQOpportunitySheetDetailsSpecification *sheetDetails;

- (void).cxx_destruct;
- (id)appId;
- (id)bubbleDetails;
- (id)initWithOpportunityBubble:(id)arg1 andOpportunitySheet:(id)arg2;
- (id)reportingDetails;
- (id)serverUIURL;
- (void)setAppId:(id)arg1;
- (void)setBubbleDetails:(id)arg1;
- (void)setReportingDetails:(id)arg1;
- (void)setSheetDetails:(id)arg1;
- (id)sheetDetails;

@end
