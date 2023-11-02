
@interface SAMPGetMediaPlayerStateRemoteResponse : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (nonatomic, copy) NSDictionary *routeResponses;
@property (readonly) Class superclass;

+ (id)getMediaPlayerStateRemoteResponse;
+ (id)getMediaPlayerStateRemoteResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (id)routeResponses;
- (void)setRouteResponses:(id)arg1;

@end