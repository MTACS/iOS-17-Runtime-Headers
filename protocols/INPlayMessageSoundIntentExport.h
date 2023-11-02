
@protocol INPlayMessageSoundIntentExport <NSObject, JSExport>

@required

- (id)init;
- (NSString *)messageIdentifier;
- (void)setMessageIdentifier:(NSString *)arg1;
- (void)setSoundType:(long long)arg1;
- (long long)soundType;

@end
