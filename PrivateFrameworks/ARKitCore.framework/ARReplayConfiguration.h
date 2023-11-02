
@interface ARReplayConfiguration : ARCustomTechniquesConfiguration <ARReplaySensorDelegate> {
    <ARReplayConfigurationDelegate> * _delegate;
    NSURL * _fileURL;
    <ARReplaySensorProtocol> * _replaySensor;
    NSNumber * _vioSessionID;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ARReplayConfigurationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSURL *fileURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSNumber *vioSessionID;

+ (bool)supportsFrameSemantics:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (id)description;
- (void)ensureTechniqueAndCustomSensorCompatibility;
- (id)fileURL;
- (id)imageSensorSettings;
- (id)imageSensorSettingsForUltraWide;
- (id)initPrivate;
- (id)initWithBaseConfiguration:(id)arg1 fileURL:(id)arg2 outError:(id*)arg3;
- (id)initWithBaseConfiguration:(id)arg1 fileURL:(id)arg2 replayMode:(long long)arg3 outError:(id*)arg4;
- (id)initWithBaseConfiguration:(id)arg1 replaySensor:(id)arg2;
- (id)initWithBaseConfiguration:(id)arg1 replaySensor:(id)arg2 replayingResultDataClasses:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)parentImageSensorSettings;
- (void)pause;
- (void)play;
- (void)replaySensorDidFinishReplayingData;
- (id)secondaryTechniques;
- (void)setAlwaysUsePrimaryCameraForHiResOrX420VideoFormat;
- (void)setDelegate:(id)arg1;
- (id)vioSessionID;
- (long long)worldAlignment;

@end
