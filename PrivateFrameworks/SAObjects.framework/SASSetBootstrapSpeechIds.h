
@interface SASSetBootstrapSpeechIds : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSArray *bootstrapSpeechIdMetadata;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)setBootstrapSpeechIds;
+ (id)setBootstrapSpeechIdsWithDictionary:(id)arg1 context:(id)arg2;

- (id)bootstrapSpeechIdMetadata;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setBootstrapSpeechIdMetadata:(id)arg1;

@end
