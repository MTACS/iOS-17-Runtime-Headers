
@interface SAPhoneIncomingCallSearchCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *incomingCallSearchResults;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)incomingCallSearchCompleted;
+ (id)incomingCallSearchCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)incomingCallSearchResults;
- (bool)requiresResponse;
- (void)setIncomingCallSearchResults:(id)arg1;

@end
