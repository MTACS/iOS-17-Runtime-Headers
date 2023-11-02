
@interface PGPhotosChallengeDayHighlightTitlingMetricEvent : PGPhotosChallengeMetricEvent <PLMultiplePayloadsMetricEvent>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSDictionary *payload;
@property (nonatomic, readonly) NSArray *payloads;
@property (readonly) Class superclass;

- (id)description;
- (id)payloads;

@end
