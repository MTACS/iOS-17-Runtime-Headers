
@interface SAIntentGroupGetAppInfo : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *appIdentifyingInfo;
@property (nonatomic) bool shouldSearchLocallyOnly;

+ (id)getAppInfo;
+ (id)getAppInfoWithDictionary:(id)arg1 context:(id)arg2;

- (id)appIdentifyingInfo;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (void)setAppIdentifyingInfo:(id)arg1;
- (void)setShouldSearchLocallyOnly:(bool)arg1;
- (bool)shouldSearchLocallyOnly;

@end
