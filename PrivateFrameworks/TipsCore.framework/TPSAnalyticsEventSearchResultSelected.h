
@interface TPSAnalyticsEventSearchResultSelected : TPSAnalyticsEvent {
    NSString * _collectionID;
    NSString * _correlationID;
    NSString * _searchID;
    NSString * _searchTerm;
    NSString * _tipID;
}

@property (nonatomic, copy) NSString *collectionID;
@property (nonatomic, copy) NSString *correlationID;
@property (nonatomic, copy) NSString *searchID;
@property (nonatomic, copy) NSString *searchTerm;
@property (nonatomic, copy) NSString *tipID;

+ (id)eventWithSearchID:(id)arg1 searchTerm:(id)arg2 tipID:(id)arg3 collectionID:(id)arg4 correlationID:(id)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithSearchID:(id)arg1 searchTerm:(id)arg2 tipID:(id)arg3 collectionID:(id)arg4 correlationID:(id)arg5;
- (id)collectionID;
- (id)correlationID;
- (void)encodeWithCoder:(id)arg1;
- (id)eventName;
- (id)initWithCoder:(id)arg1;
- (id)mutableAnalyticsEventRepresentation;
- (id)searchID;
- (id)searchTerm;
- (void)setCollectionID:(id)arg1;
- (void)setCorrelationID:(id)arg1;
- (void)setSearchID:(id)arg1;
- (void)setSearchTerm:(id)arg1;
- (void)setTipID:(id)arg1;
- (id)tipID;

@end
