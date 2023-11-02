
@interface SSMetricsClickEvent : SSMetricsBaseEvent

@property (nonatomic, retain) id actionDetails;
@property (nonatomic, retain) NSString *actionType;
@property (nonatomic, retain) id impressions;
@property (nonatomic, retain) NSString *locationDescription;
@property (nonatomic, retain) NSNumber *positionX;
@property (nonatomic, retain) NSNumber *positionY;
@property (nonatomic, retain) NSString *targetIdentifier;
@property (nonatomic, retain) NSString *targetType;
@property (nonatomic, retain) NSString *targetURL;

- (id)actionDetails;
- (id)actionType;
- (id)description;
- (id)impressions;
- (id)init;
- (id)locationDescription;
- (id)positionX;
- (id)positionY;
- (void)setActionDetails:(id)arg1;
- (void)setActionType:(id)arg1;
- (void)setImpressions:(id)arg1;
- (void)setLocationDescription:(id)arg1;
- (void)setLocationWithEventLocations:(id)arg1;
- (void)setPositionX:(id)arg1;
- (void)setPositionY:(id)arg1;
- (void)setTargetIdentifier:(id)arg1;
- (void)setTargetType:(id)arg1;
- (void)setTargetURL:(id)arg1;
- (id)targetIdentifier;
- (id)targetType;
- (id)targetURL;

@end
