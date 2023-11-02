
@interface STUIDataAccessAttribution : NSObject <BSDescriptionProviding, NSCopying> {
    NSDate * _accessEndDate;
    NSDate * _accessStartDate;
    STActivityAttribution * _audioRecordingActivityAttribution;
    STMediaStatusDomainCameraCaptureAttribution * _cameraCaptureAttribution;
    unsigned long long  _dataAccessType;
    STLocationStatusDomainLocationAttribution * _locationAttribution;
    bool  _recent;
}

@property (nonatomic, readonly, copy) NSDate *accessEndDate;
@property (nonatomic, readonly, copy) NSDate *accessStartDate;
@property (nonatomic, readonly, copy) STAttributedEntity *attributedEntity;
@property (nonatomic, readonly, copy) STActivityAttribution *audioRecordingActivityAttribution;
@property (nonatomic, readonly, copy) STMediaStatusDomainCameraCaptureAttribution *cameraCaptureAttribution;
@property (nonatomic, readonly) unsigned long long dataAccessType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) STLocationStatusDomainLocationAttribution *locationAttribution;
@property (getter=isRecent, nonatomic, readonly) bool recent;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accessEndDate;
- (id)accessStartDate;
- (id)attributedEntity;
- (id)audioRecordingActivityAttribution;
- (id)cameraCaptureAttribution;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)dataAccessType;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAudioRecordingActivityAttribution:(id)arg1 recent:(bool)arg2 startDate:(id)arg3 endDate:(id)arg4;
- (id)initWithCameraCaptureAttribution:(id)arg1 recent:(bool)arg2 startDate:(id)arg3 endDate:(id)arg4;
- (id)initWithLocationAttribution:(id)arg1 recent:(bool)arg2 startDate:(id)arg3 endDate:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isRecent;
- (id)locationAttribution;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
