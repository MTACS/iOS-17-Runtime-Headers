
@interface SALocalSearchSetNavigationVoiceMuted : SADomainCommand

@property (nonatomic) bool voiceMuted;

+ (id)setNavigationVoiceMuted;
+ (id)setNavigationVoiceMutedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setVoiceMuted:(bool)arg1;
- (bool)voiceMuted;

@end
