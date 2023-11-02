
@interface SAPreSynthesizeTTSCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSArray *approximateSpeechDuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)preSynthesizeTTSCompleted;
+ (id)preSynthesizeTTSCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)approximateSpeechDuration;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setApproximateSpeechDuration:(id)arg1;

@end
