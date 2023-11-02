
@interface ICRadioStationMetadata : NSObject {
    NSDictionary * _responseDictionary;
}

@property (nonatomic, readonly) bool allowsItemLiking;
@property (nonatomic, readonly) bool allowsSharing;
@property (nonatomic, readonly, copy) ICStoreArtworkInfo *artworkInfo;
@property (nonatomic, readonly, copy) NSString *attributionLabel;
@property (getter=containsVideo, nonatomic, readonly) bool containsVideo;
@property (nonatomic, readonly, copy) NSString *coreSeedName;
@property (nonatomic, readonly, copy) NSString *descriptionText;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *playbackAuthorizationToken;
@property (nonatomic, readonly, copy) ICRadioStationProviderResource *providerResource;
@property (nonatomic, readonly, copy) NSString *stationHash;
@property (nonatomic, readonly) long long stationID;
@property (nonatomic, readonly, copy) NSString *stationStringID;
@property (getter=isSubscriptionRequired, nonatomic, readonly) bool subscriptionRequired;
@property (nonatomic, readonly) long long subtype;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (bool)allowsItemLiking;
- (bool)allowsSharing;
- (id)artworkInfo;
- (id)attributionLabel;
- (bool)containsVideo;
- (id)coreSeedName;
- (id)descriptionText;
- (id)initWithResponseDictionary:(id)arg1;
- (bool)isSubscriptionRequired;
- (id)name;
- (id)playbackAuthorizationToken;
- (id)providerResource;
- (id)stationHash;
- (long long)stationID;
- (id)stationStringID;
- (long long)subtype;
- (long long)type;

@end
