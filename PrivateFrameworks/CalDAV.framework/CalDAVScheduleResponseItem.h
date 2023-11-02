
@interface CalDAVScheduleResponseItem : CoreDAVItem {
    NSMutableSet * _failedResponseItems;
    NSMutableSet * _responses;
    NSMutableSet * _successfulICS;
}

@property (nonatomic, retain) NSMutableSet *failedResponseItems;
@property (nonatomic, retain) NSMutableSet *responses;
@property (nonatomic, retain) NSMutableSet *successfulICS;

- (void).cxx_destruct;
- (void)addNewTopLevelItem:(id)arg1;
- (id)copyParseRules;
- (id)description;
- (id)failedResponseItems;
- (id)responses;
- (void)setFailedResponseItems:(id)arg1;
- (void)setResponses:(id)arg1;
- (void)setSuccessfulICS:(id)arg1;
- (id)successfulICS;

@end
