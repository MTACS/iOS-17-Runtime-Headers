
@protocol INSetDefrosterSettingsInCarIntentExport <NSObject, JSExport>

@required

- (INSpeakableString *)carName;
- (long long)defroster;
- (NSNumber *)enable;
- (id)init;
- (void)setCarName:(INSpeakableString *)arg1;
- (void)setDefroster:(long long)arg1;
- (void)setEnable:(NSNumber *)arg1;

@end
