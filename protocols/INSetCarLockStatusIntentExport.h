
@protocol INSetCarLockStatusIntentExport <NSObject, JSExport>

@required

- (INSpeakableString *)carName;
- (id)init;
- (NSNumber *)locked;
- (void)setCarName:(INSpeakableString *)arg1;
- (void)setLocked:(NSNumber *)arg1;

@end
