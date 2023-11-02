
@protocol INAnswerCallIntentExport <NSObject, JSExport>

@required

- (long long)audioRoute;
- (NSString *)callIdentifier;
- (id)init;
- (void)setAudioRoute:(long long)arg1;
- (void)setCallIdentifier:(NSString *)arg1;

@end
