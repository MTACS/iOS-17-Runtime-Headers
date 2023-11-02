
@protocol INStartCallIntentExport <NSObject, JSExport>

@required

- (long long)audioRoute;
- (long long)callCapability;
- (NSArray *)callGroups;
- (INCallRecordFilter *)callRecordFilter;
- (INCallRecord *)callRecordToCallBack;
- (INStartCallRequestMetadata *)callRequestMetadata;
- (NSArray *)contacts;
- (long long)destinationType;
- (NSString *)faceTimeLink;
- (id)init;
- (NSNumber *)isGroupCall;
- (NSString *)notificationThreadIdentifier;
- (long long)preferredCallProvider;
- (void)setAudioRoute:(long long)arg1;
- (void)setCallCapability:(long long)arg1;
- (void)setCallGroups:(NSArray *)arg1;
- (void)setCallRecordFilter:(INCallRecordFilter *)arg1;
- (void)setCallRecordToCallBack:(INCallRecord *)arg1;
- (void)setCallRequestMetadata:(INStartCallRequestMetadata *)arg1;
- (void)setContacts:(NSArray *)arg1;
- (void)setDestinationType:(long long)arg1;
- (void)setFaceTimeLink:(NSString *)arg1;
- (void)setIsGroupCall:(NSNumber *)arg1;
- (void)setNotificationThreadIdentifier:(NSString *)arg1;
- (void)setPreferredCallProvider:(long long)arg1;
- (void)setTTYType:(long long)arg1;
- (long long)ttyType;

@end
