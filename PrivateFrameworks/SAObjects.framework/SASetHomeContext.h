
@interface SASetHomeContext : SABaseCommand <SAClientStateServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSArray *currentHomes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *entities;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

- (id)currentHomes;
- (id)encodedClassName;
- (id)entities;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setCurrentHomes:(id)arg1;
- (void)setEntities:(id)arg1;

@end
