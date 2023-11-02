
@interface SSMetricsSearchEvent : SSMetricsBaseEvent

@property (nonatomic, retain) id actionDetails;
@property (nonatomic, retain) NSString *actionType;
@property (nonatomic, retain) NSString *searchTerm;
@property (nonatomic, retain) NSString *targetIdentifier;
@property (nonatomic, retain) NSString *targetType;
@property (nonatomic, retain) NSString *targetURL;

- (id)actionDetails;
- (id)actionType;
- (id)init;
- (id)searchTerm;
- (void)setActionDetails:(id)arg1;
- (void)setActionType:(id)arg1;
- (void)setLocationWithEventLocations:(id)arg1;
- (void)setSearchTerm:(id)arg1;
- (void)setTargetIdentifier:(id)arg1;
- (void)setTargetType:(id)arg1;
- (void)setTargetURL:(id)arg1;
- (id)targetIdentifier;
- (id)targetType;
- (id)targetURL;

@end
