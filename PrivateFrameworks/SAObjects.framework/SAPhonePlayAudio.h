
@interface SAPhonePlayAudio : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *phoneAudioType;

+ (id)playAudio;
+ (id)playAudioWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)phoneAudioType;
- (bool)requiresResponse;
- (void)setPhoneAudioType:(id)arg1;

@end
