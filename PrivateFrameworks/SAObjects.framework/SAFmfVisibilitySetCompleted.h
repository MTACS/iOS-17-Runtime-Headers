
@interface SAFmfVisibilitySetCompleted : SADomainCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (nonatomic, copy) NSURL *searchContext;
@property (readonly) Class superclass;

+ (id)visibilitySetCompleted;
+ (id)visibilitySetCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (id)searchContext;
- (void)setSearchContext:(id)arg1;

@end
