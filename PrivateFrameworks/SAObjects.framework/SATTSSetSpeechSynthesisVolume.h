
@interface SATTSSetSpeechSynthesisVolume : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *actionType;
@property (nonatomic, copy) NSNumber *volumeValue;

+ (id)setSpeechSynthesisVolume;
+ (id)setSpeechSynthesisVolumeWithDictionary:(id)arg1 context:(id)arg2;

- (id)actionType;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (void)setActionType:(id)arg1;
- (void)setVolumeValue:(id)arg1;
- (id)volumeValue;

@end
