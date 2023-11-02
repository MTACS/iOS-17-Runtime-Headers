
@interface AMSUIWebFetchTreatmentAreasAction : AMSUIWebAction {
    NSArray * _namespaceIds;
    NSArray * _topicIds;
}

@property (nonatomic, retain) NSArray *namespaceIds;
@property (nonatomic, retain) NSArray *topicIds;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)namespaceIds;
- (id)runAction;
- (void)setNamespaceIds:(id)arg1;
- (void)setTopicIds:(id)arg1;
- (id)topicIds;

@end
