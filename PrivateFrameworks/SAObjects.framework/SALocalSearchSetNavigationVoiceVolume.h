
@interface SALocalSearchSetNavigationVoiceVolume : SADomainCommand

@property (nonatomic, copy) NSString *volume;

+ (id)setNavigationVoiceVolume;
+ (id)setNavigationVoiceVolumeWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setVolume:(id)arg1;
- (id)volume;

@end
