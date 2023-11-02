
@interface ARRecordingConfiguration : ARCustomTechniquesConfiguration <ARRecordingTechniqueDelegate> {
    NSDictionary * _customUserData;
    NSURL * _fileURL;
    id /* block */  _finishBlock;
    <ARRecordingTechniqueProtocol> * _recordingTechnique;
    unsigned long long  _state;
}

@property (nonatomic, retain) NSDictionary *customUserData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSURL *fileURL;
@property (copy) id /* block */ finishBlock;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <ARRecordingTechniqueProtocol> *recordingTechnique;
@property unsigned long long state;
@property (readonly) Class superclass;

+ (bool)isSupported;
+ (bool)supportsFrameSemantics:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)abortRecording;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customUserData;
- (id)description;
- (void)ensureTechniqueAndCustomSensorCompatibility;
- (id)fileURL;
- (id /* block */)finishBlock;
- (void)finishRecordingWithHandler:(id /* block */)arg1;
- (id)imageSensorSettings;
- (id)initPrivate;
- (id)initWithBaseConfiguration:(id)arg1 fileURL:(id)arg2;
- (id)initWithBaseConfiguration:(id)arg1 recordingTechnique:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)parentImageSensorSettings;
- (id)recordingTechnique;
- (id)secondaryTechniques;
- (void)setCustomUserData:(id)arg1;
- (void)setFinishBlock:(id /* block */)arg1;
- (void)setRecordingTechnique:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setVideoFormat:(id)arg1;
- (void)startRecording;
- (unsigned long long)state;
- (void)technique:(id)arg1 didFinishWithResult:(id)arg2;
- (id)videoFormat;
- (long long)worldAlignment;

@end
