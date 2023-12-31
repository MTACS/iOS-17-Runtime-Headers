
@interface SASetNLContext : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *parseOverrideQuery;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)setNLContext;
+ (id)setNLContextWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)parseOverrideQuery;
- (bool)requiresResponse;
- (void)setParseOverrideQuery:(id)arg1;

@end
