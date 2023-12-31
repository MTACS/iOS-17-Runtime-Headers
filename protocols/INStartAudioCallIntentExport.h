
@protocol INStartAudioCallIntentExport <NSObject, JSExport>

@required

- (long long)audioRoute;
- (INStartCallRequestMetadata *)callRequestMetadata;
- (NSArray *)contacts;
- (long long)destinationType;
- (id)init;
- (long long)preferredCallProvider;
- (long long)recordTypeForRedialing;
- (void)setAudioRoute:(long long)arg1;
- (void)setCallRequestMetadata:(INStartCallRequestMetadata *)arg1;
- (void)setContacts:(NSArray *)arg1;
- (void)setDestinationType:(long long)arg1;
- (void)setPreferredCallProvider:(long long)arg1;
- (void)setRecordTypeForRedialing:(long long)arg1;
- (void)setTTYType:(long long)arg1;
- (long long)ttyType;

@end
