
@interface LPAPFSContainer : LPMedia

+ (id)allAPFSContainers;
+ (id)diagsContainer;
+ (id)supportedContentTypes;

- (id)addVolumeWithName:(id)arg1 role:(int)arg2 caseSensitive:(bool)arg3 reserveSize:(long long)arg4 quotaSize:(long long)arg5 pairedVolume:(id)arg6 error:(id*)arg7;
- (id)physicalStores;
- (id)prebootVolume;
- (id)recoveryVolume;
- (id)updateVolume;
- (id)volumes;
- (id)volumesWithRole:(int)arg1;

@end
