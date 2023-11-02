
@protocol AFHomeAccessoryInfoMutating <NSObject>

@required

- (void)setAssistantIdentifier:(NSString *)arg1;
- (void)setCategoryType:(NSString *)arg1;
- (void)setHasActiveThirdPartyMusicSubscription:(bool)arg1;
- (void)setIsSpeaker:(bool)arg1;
- (void)setLoggingUniqueIdentifier:(NSUUID *)arg1;
- (void)setManufacturer:(NSString *)arg1;
- (void)setModel:(NSString *)arg1;
- (void)setName:(NSString *)arg1;
- (void)setRoomName:(NSString *)arg1;
- (void)setSchemaCategoryType:(long long)arg1;
- (void)setUniqueIdentifier:(NSUUID *)arg1;

@end
