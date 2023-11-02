
@interface TPSAnalyticsEventSearchPerformed : TPSAnalyticsEvent {
    NSString * _collectionID;
    NSString * _correlationID;
    NSString * _invocationMethod;
    double  _relevance;
    long long  _resultOrder;
    NSString * _searchID;
    NSString * _searchTerm;
    NSString * _tipID;
}

@property (nonatomic, copy) NSString *collectionID;
@property (nonatomic, copy) NSString *correlationID;
@property (nonatomic, copy) NSString *invocationMethod;
@property (nonatomic) double relevance;
@property (nonatomic) long long resultOrder;
@property (nonatomic, copy) NSString *searchID;
@property (nonatomic, copy) NSString *searchTerm;
@property (nonatomic, copy) NSString *tipID;

+ (id)eventWithSearchID:(id)arg1 searchTerm:(id)arg2 invocationMethod:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithSearchID:(id)arg1 searchTerm:(id)arg2 invocationMethod:(id)arg3;
- (id)collectionID;
- (id)correlationID;
- (void)encodeWithCoder:(id)arg1;
- (id)eventName;
- (id)initWithCoder:(id)arg1;
- (id)invocationMethod;
- (id)mutableAnalyticsEventRepresentation;
- (double)relevance;
- (long long)resultOrder;
- (id)searchID;
- (id)searchTerm;
- (void)setCollectionID:(id)arg1;
- (void)setCorrelationID:(id)arg1;
- (void)setInvocationMethod:(id)arg1;
- (void)setRelevance:(double)arg1;
- (void)setResultOrder:(long long)arg1;
- (void)setSearchID:(id)arg1;
- (void)setSearchTerm:(id)arg1;
- (void)setTipID:(id)arg1;
- (id)tipID;

@end
