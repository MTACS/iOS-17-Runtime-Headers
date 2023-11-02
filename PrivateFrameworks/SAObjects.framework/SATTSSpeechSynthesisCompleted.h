
@interface SATTSSpeechSynthesisCompleted : SABaseClientBoundCommand

@property (nonatomic) long long totalPacketNumber;

+ (id)speechSynthesisCompleted;
+ (id)speechSynthesisCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setTotalPacketNumber:(long long)arg1;
- (long long)totalPacketNumber;

@end
