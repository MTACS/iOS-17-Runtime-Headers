
@interface STMediaStatusDomainData : NSObject <BSDebugDescriptionProviding, NSSecureCoding, STStatusDomainData, STStatusDomainDataDifferencing> {
    STListData * _audioRecordingAttributionListData;
    STListData * _cameraAttributionListData;
    STListData * _mutedAudioRecordingAttributionListData;
}

@property (nonatomic, readonly, copy) NSArray *audioRecordingAttributionList;
@property (nonatomic, readonly, copy) STListData *audioRecordingAttributionListData;
@property (nonatomic, readonly, copy) NSSet *audioRecordingAttributions;
@property (nonatomic, readonly, copy) STListData *cameraAttributionListData;
@property (nonatomic, readonly, copy) NSArray *cameraAttributions;
@property (nonatomic, readonly, copy) NSArray *cameraCaptureAttributionList;
@property (nonatomic, readonly, copy) NSSet *cameraCaptureAttributions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *mutedAudioRecordingAttributionList;
@property (nonatomic, readonly, copy) STListData *mutedAudioRecordingAttributionListData;
@property (nonatomic, readonly, copy) NSSet *mutedAudioRecordingAttributions;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithAudioRecordingAttributionListData:(id)arg1 mutedAudioRecordingAttributionListData:(id)arg2 cameraAttributionListData:(id)arg3;
- (id)audioRecordingAttributionList;
- (id)audioRecordingAttributionListData;
- (id)audioRecordingAttributions;
- (id)cameraAttributionListData;
- (id)cameraAttributions;
- (id)cameraCaptureAttributionList;
- (id)cameraCaptureAttributions;
- (id)camerasInUseMatchingAttribution:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataByApplyingDiff:(id)arg1;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)diffFromData:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAudioRecordingAttributionListData:(id)arg1 mutedAudioRecordingAttributionListData:(id)arg2 cameraAttributionListData:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)mutedAudioRecordingAttributionList;
- (id)mutedAudioRecordingAttributionListData;
- (id)mutedAudioRecordingAttributions;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
