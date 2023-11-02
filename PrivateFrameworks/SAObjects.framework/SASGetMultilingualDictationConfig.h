
@interface SASGetMultilingualDictationConfig : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool multilingualDisabled;
@property (nonatomic, copy) NSNumber *multilingualTimeoutInMillis;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)getMultilingualDictationConfig;
+ (id)getMultilingualDictationConfigWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)multilingualDisabled;
- (id)multilingualTimeoutInMillis;
- (bool)requiresResponse;
- (void)setMultilingualDisabled:(bool)arg1;
- (void)setMultilingualTimeoutInMillis:(id)arg1;

@end
