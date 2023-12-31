
@interface CoreDAVMultiStatusItem : CoreDAVItem {
    NSMutableArray * _orderedResponses;
    CoreDAVLeafItem * _responseDescription;
}

@property (nonatomic, retain) NSMutableArray *orderedResponses;
@property (nonatomic, retain) CoreDAVLeafItem *responseDescription;
@property (nonatomic, readonly) NSSet *responses;

+ (id)copyParseRules;

- (void).cxx_destruct;
- (void)addResponse:(id)arg1;
- (id)description;
- (id)init;
- (id)orderedResponses;
- (id)responseDescription;
- (id)responses;
- (void)setOrderedResponses:(id)arg1;
- (void)setResponseDescription:(id)arg1;

@end
