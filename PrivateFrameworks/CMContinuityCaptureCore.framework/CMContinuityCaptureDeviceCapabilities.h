
@interface CMContinuityCaptureDeviceCapabilities : NSObject <CMContinuityCaptureDictionaryRepresentable> {
    NSArray * _controls;
    long long  _entityType;
    NSArray * _manualFramingSupportedStreamFormats;
    NSArray * _streamFormats;
}

@property (nonatomic, readonly) NSArray *controls;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long entityType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *manualFramingSupportedStreamFormats;
@property (nonatomic, readonly) NSArray *streamFormats;
@property (readonly) Class superclass;

+ (id)_resolvedControlsForEntityType:(long long)arg1;
+ (id)_resolvedStreamFormatsForEntityType:(long long)arg1 requireManualFramingSupport:(bool)arg2;
+ (bool)avcaptureDeviceSupportsCenterStage:(id)arg1;
+ (bool)avcaptureDeviceSupportsFlash:(id)arg1;
+ (bool)avcaptureDeviceSupportsPortraitEffect:(id)arg1;
+ (bool)avcaptureDeviceSupportsReactionEffects:(id)arg1;
+ (bool)avcaptureDeviceSupportsStudioLighting:(id)arg1;
+ (id)capabilitiesForEntityType:(long long)arg1;

- (void).cxx_destruct;
- (id)controls;
- (id)debugDescription;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)entityType;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithEntityType:(long long)arg1 streamFormats:(id)arg2 manualFramingSupportedStreamFormats:(id)arg3 controls:(id)arg4;
- (id)manualFramingSupportedStreamFormats;
- (id)streamFormats;
- (bool)supportsControlWithName:(id)arg1;

@end
