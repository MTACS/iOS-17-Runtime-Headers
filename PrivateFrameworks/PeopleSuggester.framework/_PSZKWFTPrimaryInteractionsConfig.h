
@interface _PSZKWFTPrimaryInteractionsConfig : NSObject {
    NSArray * _bundleIds;
    unsigned long long  _clusterPruneThreshold;
    long long  _defaultConfidenceCategory;
    NSArray * _interactionCountMaxDepths;
    NSArray * _interactionHistoryRelativeStartDates;
    bool  _isEnabled;
    unsigned long long  _maxSuggestions;
    NSArray * _mechanisms;
    long long  _modelType;
}

@property (nonatomic, readonly, copy) NSArray *bundleIds;
@property (nonatomic, readonly) unsigned long long clusterPruneThreshold;
@property (nonatomic, readonly) long long defaultConfidenceCategory;
@property (nonatomic, readonly, copy) NSArray *interactionCountMaxDepths;
@property (nonatomic, readonly, copy) NSArray *interactionHistoryRelativeStartDates;
@property (nonatomic, readonly) bool isEnabled;
@property (nonatomic, readonly) unsigned long long maxSuggestions;
@property (nonatomic, readonly, copy) NSArray *mechanisms;
@property (nonatomic, readonly) long long modelType;

- (void).cxx_destruct;
- (id)bundleIds;
- (unsigned long long)clusterPruneThreshold;
- (long long)defaultConfidenceCategory;
- (id)initWithIsEnabled:(bool)arg1 defaultConfidenceCategory:(long long)arg2 mechanisms:(id)arg3 interactionCountMaxDepths:(id)arg4 interactionHistoryRelativeStartDates:(id)arg5 bundleIds:(id)arg6 modelType:(long long)arg7 clusterPruneThreshold:(unsigned long long)arg8 maxSuggestions:(unsigned long long)arg9;
- (id)initWithIsEnabled:(bool)arg1 defaultConfidenceCategory:(long long)arg2 modelType:(long long)arg3;
- (id)interactionCountMaxDepths;
- (id)interactionHistoryRelativeStartDates;
- (bool)isEnabled;
- (unsigned long long)maxSuggestions;
- (id)mechanisms;
- (long long)modelType;

@end
