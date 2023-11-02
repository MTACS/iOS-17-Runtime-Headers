
@interface CPAnalyticsCoreDuetEventMatcher : CPAnalyticsEventMatcher {
    NSString * _datasetName;
    CPAnalyticsEventMatcher * _eventMatcher;
    NSString * _identifierPropertyName;
    bool  _matchNextEvent;
    NSString * _subsetPropertyName;
    NSObject * _subsetPropertyValue;
}

@property (nonatomic, readonly) NSString *datasetName;
@property (nonatomic, readonly) NSString *identifierPropertyName;
@property (nonatomic, readonly) bool matchNextEvent;
@property (nonatomic, readonly) NSString *subsetPropertyName;
@property (nonatomic, readonly) NSObject *subsetPropertyValue;

- (void).cxx_destruct;
- (id)datasetName;
- (bool)doesMatch:(id)arg1;
- (id)identifierPropertyName;
- (id)init;
- (id)initWithConfig:(id)arg1;
- (bool)matchNextEvent;
- (id)subsetPropertyName;
- (id)subsetPropertyValue;

@end
