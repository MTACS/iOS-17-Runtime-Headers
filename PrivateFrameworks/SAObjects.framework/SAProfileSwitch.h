
@interface SAProfileSwitch : SABaseClientBoundCommand <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *sharedUserId;
@property (readonly) Class superclass;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (void)setSharedUserId:(id)arg1;
- (id)sharedUserId;

@end
