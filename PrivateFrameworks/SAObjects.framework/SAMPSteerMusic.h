
@interface SAMPSteerMusic : SADomainCommand

@property (nonatomic, retain) SAMPCollection *currentListeningToCollection;
@property (nonatomic, retain) SAMPMediaItem *currentListeningToItem;
@property (nonatomic, copy) NSArray *hashedRouteUIDs;
@property (nonatomic, copy) NSString *steerableBlob;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)steerMusic;
+ (id)steerMusicWithDictionary:(id)arg1 context:(id)arg2;

- (id)currentListeningToCollection;
- (id)currentListeningToItem;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)hashedRouteUIDs;
- (bool)requiresResponse;
- (void)setCurrentListeningToCollection:(id)arg1;
- (void)setCurrentListeningToItem:(id)arg1;
- (void)setHashedRouteUIDs:(id)arg1;
- (void)setSteerableBlob:(id)arg1;
- (id)steerableBlob;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (void)af_addEntriesToAnalyticsContext:(id)arg1;

@end
