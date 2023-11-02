
@interface SSMetricsMediaEvent : SSMetricsBaseEvent

@property (nonatomic, retain) NSNumber *itemIdentifier;
@property (nonatomic, retain) NSString *locationDescription;
@property (nonatomic, retain) NSString *mediaEventType;
@property (nonatomic, retain) NSString *mediaURL;

- (id)init;
- (id)itemIdentifier;
- (id)locationDescription;
- (id)mediaEventType;
- (id)mediaURL;
- (void)setItemIdentifier:(id)arg1;
- (void)setLocationDescription:(id)arg1;
- (void)setLocationWithEventLocations:(id)arg1;
- (void)setMediaEventType:(id)arg1;
- (void)setMediaURL:(id)arg1;

@end
