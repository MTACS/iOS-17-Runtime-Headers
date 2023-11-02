
@interface SASSetMultilingualDictationConfig : SABaseClientBoundCommand

@property (nonatomic) bool multilingualDisabled;
@property (nonatomic, copy) NSNumber *multilingualTimeoutInMillis;

+ (id)setMultilingualDictationConfig;
+ (id)setMultilingualDictationConfigWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)multilingualDisabled;
- (id)multilingualTimeoutInMillis;
- (bool)requiresResponse;
- (void)setMultilingualDisabled:(bool)arg1;
- (void)setMultilingualTimeoutInMillis:(id)arg1;

@end
