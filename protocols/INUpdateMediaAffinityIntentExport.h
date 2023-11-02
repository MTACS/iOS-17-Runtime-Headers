
@protocol INUpdateMediaAffinityIntentExport <NSObject, JSExport>

@required

- (long long)affinityType;
- (id)init;
- (NSArray *)mediaItems;
- (INMediaSearch *)mediaSearch;
- (INPrivateUpdateMediaAffinityIntentData *)privateUpdateMediaAffinityIntentData;
- (void)setAffinityType:(long long)arg1;
- (void)setMediaItems:(NSArray *)arg1;
- (void)setMediaSearch:(INMediaSearch *)arg1;
- (void)setPrivateUpdateMediaAffinityIntentData:(INPrivateUpdateMediaAffinityIntentData *)arg1;

@end
