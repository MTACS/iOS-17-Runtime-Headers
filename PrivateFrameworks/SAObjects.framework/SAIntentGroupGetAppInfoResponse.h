
@interface SAIntentGroupGetAppInfoResponse : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSArray *appInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)getAppInfoResponse;
+ (id)getAppInfoResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)appInfo;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setAppInfo:(id)arg1;

@end
