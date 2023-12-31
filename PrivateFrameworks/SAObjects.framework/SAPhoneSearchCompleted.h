
@interface SAPhoneSearchCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *phoneSearchResults;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)searchCompleted;
+ (id)searchCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)phoneSearchResults;
- (bool)requiresResponse;
- (void)setPhoneSearchResults:(id)arg1;

@end
