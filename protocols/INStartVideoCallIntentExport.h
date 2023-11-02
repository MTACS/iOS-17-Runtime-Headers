
@protocol INStartVideoCallIntentExport <NSObject, JSExport>

@required

- (long long)audioRoute;
- (INStartCallRequestMetadata *)callRequestMetadata;
- (NSArray *)contacts;
- (id)init;
- (void)setAudioRoute:(long long)arg1;
- (void)setCallRequestMetadata:(INStartCallRequestMetadata *)arg1;
- (void)setContacts:(NSArray *)arg1;

@end
