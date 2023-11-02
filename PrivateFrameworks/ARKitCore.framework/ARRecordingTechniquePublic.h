
@interface ARRecordingTechniquePublic : ARTechnique <ARRecordingTechniqueProtocol, MOVWriterInterfaceDelegate> {
    NSDictionary * _customUserData;
    bool  _expectAudioData;
    bool  _expectCustomData;
    bool  _expectDepthData;
    NSError * _finishedError;
    NSMutableSet * _knownVIOSessionIDs;
    NSMutableDictionary * _lastRecordedTimestamps;
    NSURL * _outputFileURL;
    ARParentImageSensorSettings * _parentImageSensorSettings;
    struct __CVBuffer { } * _pearlFixedPointUnsigned13_3PixelBuffer;
    bool  _recordCollaborationData;
    bool  _recordPearlDepthData;
    NSObject<OS_dispatch_queue> * _recordingQueue;
    <ARRecordingTechniqueDelegate> * _recordingTechniqueDelegate;
    unsigned long long  _sensorDataTypes;
    double  _sessionSourceTime;
    bool  _shouldSaveVideoInPhotosLibrary;
    unsigned long long  _state;
    NSObject<OS_dispatch_queue> * _timeSensitiveQueue;
    MOVWriterInterface * _writer;
    bool  _writerReady;
}

@property (nonatomic, retain) NSDictionary *customUserData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool expectAudioData;
@property (nonatomic) bool expectCustomData;
@property (nonatomic) bool expectDepthData;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSURL *outputFileURL;
@property (nonatomic, retain) ARParentImageSensorSettings *parentImageSensorSettings;
@property (nonatomic, readonly) unsigned long long recordingSensorDataTypes;
@property <ARRecordingTechniqueDelegate> *recordingTechniqueDelegate;
@property (nonatomic) bool shouldSaveVideoInPhotosLibrary;
@property unsigned long long state;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore

+ (bool)isSupported;

- (void).cxx_destruct;
- (void)_fail:(id)arg1;
- (void)_finish:(id)arg1;
- (void)_finishRecording;
- (void)_startRecording;
- (void)abortRecording;
- (bool)allowedToWrite;
- (id)createFileMetadata;
- (id)customUserData;
- (void)dealloc;
- (void)didFailWithError:(id)arg1;
- (void)didFinishRecording;
- (bool)expectAudioData;
- (bool)expectCustomData;
- (bool)expectDepthData;
- (void)finishRecording;
- (bool)finished;
- (id)init;
- (id)initWithFileURL:(id)arg1 recordingSensorDataTypes:(unsigned long long)arg2;
- (id)initWithFileURL:(id)arg1 recordingSensorDataTypes:(unsigned long long)arg2 startImmediately:(bool)arg3 recordCollaborationData:(bool)arg4;
- (id)initWithFileURL:(id)arg1 sensorDataTypes:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (void)isReadyToRecord;
- (id)outputFileURL;
- (id)parentImageSensorSettings;
- (id)processData:(id)arg1;
- (void)processTimeSensitiveNSCoderObject:(id)arg1 withTimestamp:(double)arg2 metadataID:(id)arg3;
- (void)recordAddedAnchor:(id)arg1;
- (void)recordCollaborationData:(id)arg1 localSession:(bool)arg2;
- (void)recordCustomData:(id)arg1 forTimestamp:(double)arg2;
- (void)recordRemovedAnchor:(id)arg1;
- (unsigned long long)recordingSensorDataTypes;
- (id)recordingTechniqueDelegate;
- (void)removeTemporaryVideoFile;
- (unsigned long long)requiredSensorDataTypes;
- (void)setCustomUserData:(id)arg1;
- (void)setExpectAudioData:(bool)arg1;
- (void)setExpectCustomData:(bool)arg1;
- (void)setExpectDepthData:(bool)arg1;
- (void)setParentImageSensorSettings:(id)arg1;
- (void)setRecordingTechniqueDelegate:(id)arg1;
- (void)setShouldSaveVideoInPhotosLibrary:(bool)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setupCustomTrack;
- (void)setupSensorTracks;
- (bool)shouldSaveVideoInPhotosLibrary;
- (void)startRecording;
- (unsigned long long)state;
- (void)writeAudioData:(id)arg1;
- (void)writeImageData:(id)arg1;
- (void)writePearlDepthData:(id)arg1 withTimestamp:(double)arg2 fromCaptureDevice:(id)arg3;
- (void)writeResultData:(id)arg1 withTimestamp:(double)arg2;
- (void)writeSensorData:(id)arg1;
- (void)writeTimeOfFlightData:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ARKitUI.framework/ARKitUI

- (void)_saveVideoInPhotosLibrary:(id)arg1;
- (void)_subscribeToBackgroundNotifications;
- (void)copyVideoToPhotoLibrary:(id)arg1;

@end
