
@interface SAPhoneIncomingCallSearchResult : SADomainObject

@property (nonatomic, retain) SAPersonAttribute *caller;
@property (nonatomic, copy) NSString *incomingCallType;

+ (id)incomingCallSearchResult;
+ (id)incomingCallSearchResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)caller;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)incomingCallType;
- (void)setCaller:(id)arg1;
- (void)setIncomingCallType:(id)arg1;

@end
