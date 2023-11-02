
@interface SADirectInvocationUpdateReadingState : SAUpdateReadingState <SAClientStateServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;

@end
