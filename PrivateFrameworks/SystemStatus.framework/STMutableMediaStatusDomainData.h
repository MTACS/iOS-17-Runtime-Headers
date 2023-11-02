
@interface STMutableMediaStatusDomainData : STMediaStatusDomainData <STMutableStatusDomainData, STMutableStatusDomainDataDifferencing>

@property (nonatomic, copy) NSArray *audioRecordingAttributionList;
@property (nonatomic, readonly, copy) STMutableListData *audioRecordingAttributionListData;
@property (nonatomic, copy) NSSet *audioRecordingAttributions;
@property (nonatomic, readonly, copy) STMutableListData *cameraAttributionListData;
@property (nonatomic, copy) NSArray *cameraAttributions;
@property (nonatomic, copy) NSArray *cameraCaptureAttributionList;
@property (nonatomic, copy) NSSet *cameraCaptureAttributions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *mutedAudioRecordingAttributionList;
@property (nonatomic, readonly, copy) STMutableListData *mutedAudioRecordingAttributionListData;
@property (nonatomic, copy) NSSet *mutedAudioRecordingAttributions;
@property (readonly) Class superclass;

- (void)addAudioRecordingAttribution:(id)arg1;
- (void)addCameraAttribution:(id)arg1;
- (void)addCameraCaptureAttribution:(id)arg1;
- (void)addMutedAudioRecordingAttribution:(id)arg1;
- (bool)applyDiff:(id)arg1;
- (id)audioRecordingAttributionListData;
- (id)cameraAttributionListData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithAudioRecordingAttributionListData:(id)arg1 mutedAudioRecordingAttributionListData:(id)arg2 cameraAttributionListData:(id)arg3;
- (id)mutedAudioRecordingAttributionListData;
- (void)removeAudioRecordingAttribution:(id)arg1;
- (void)removeCameraAttribution:(id)arg1;
- (void)removeCameraCaptureAttribution:(id)arg1;
- (void)removeMutedAudioRecordingAttribution:(id)arg1;
- (void)setAudioRecordingAttributionList:(id)arg1;
- (void)setAudioRecordingAttributions:(id)arg1;
- (void)setCameraAttributions:(id)arg1;
- (void)setCameraCaptureAttributionList:(id)arg1;
- (void)setCameraCaptureAttributions:(id)arg1;
- (void)setMutedAudioRecordingAttributionList:(id)arg1;
- (void)setMutedAudioRecordingAttributions:(id)arg1;

@end
