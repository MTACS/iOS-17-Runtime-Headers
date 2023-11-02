
@interface SANPRemoveOutputDevicesFromGroupResponse : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (nonatomic, copy) NSString *routeResponse;
@property (readonly) Class superclass;

+ (id)removeOutputDevicesFromGroupResponse;
+ (id)removeOutputDevicesFromGroupResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (id)routeResponse;
- (void)setRouteResponse:(id)arg1;

@end
