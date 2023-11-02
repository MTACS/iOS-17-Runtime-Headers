
@interface SAMPSubscribeToPodcastCollection : SADomainCommand

@property (nonatomic, copy) NSString *assetInfo;
@property (nonatomic, copy) NSString *hashedRouteUID;
@property (nonatomic, retain) SAMPPodcastCollection *podcastCollection;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)subscribeToPodcastCollection;
+ (id)subscribeToPodcastCollectionWithDictionary:(id)arg1 context:(id)arg2;

- (id)assetInfo;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)hashedRouteUID;
- (id)podcastCollection;
- (bool)requiresResponse;
- (void)setAssetInfo:(id)arg1;
- (void)setHashedRouteUID:(id)arg1;
- (void)setPodcastCollection:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (void)af_addEntriesToAnalyticsContext:(id)arg1;

@end
