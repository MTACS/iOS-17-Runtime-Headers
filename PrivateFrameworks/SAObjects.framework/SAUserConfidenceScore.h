
@interface SAUserConfidenceScore : AceObject <SAAceSerializable>

@property (nonatomic) long long confidenceScore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *sharedUserId;
@property (readonly) Class superclass;

+ (id)userConfidenceScore;
+ (id)userConfidenceScoreWithDictionary:(id)arg1 context:(id)arg2;

- (long long)confidenceScore;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setConfidenceScore:(long long)arg1;
- (void)setSharedUserId:(id)arg1;
- (id)sharedUserId;

@end
