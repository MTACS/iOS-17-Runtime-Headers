
@interface SAMPCreateRadioStation : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *assetInfo;
@property (nonatomic, copy) NSArray *hashedRouteUIDs;
@property (nonatomic, copy) NSNumber *startPlaying;
@property (nonatomic, copy) NSURL *stationUrl;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)createRadioStation;
+ (id)createRadioStationWithDictionary:(id)arg1 context:(id)arg2;

- (id)assetInfo;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)hashedRouteUIDs;
- (bool)requiresResponse;
- (void)setAssetInfo:(id)arg1;
- (void)setHashedRouteUIDs:(id)arg1;
- (void)setStartPlaying:(id)arg1;
- (void)setStationUrl:(id)arg1;
- (id)startPlaying;
- (id)stationUrl;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (void)af_addEntriesToAnalyticsContext:(id)arg1;

@end
