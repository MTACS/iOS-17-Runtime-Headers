
@interface SAUserProfile : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *names;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)names;
- (bool)requiresResponse;
- (void)setNames:(id)arg1;

@end
