
@protocol INSetProfileInCarIntentExport <NSObject, JSExport>

@required

- (INSpeakableString *)carName;
- (NSNumber *)defaultProfile;
- (id)init;
- (NSString *)profileName;
- (NSNumber *)profileNumber;
- (void)setCarName:(INSpeakableString *)arg1;
- (void)setDefaultProfile:(NSNumber *)arg1;
- (void)setProfileName:(NSString *)arg1;
- (void)setProfileNumber:(NSNumber *)arg1;

@end
