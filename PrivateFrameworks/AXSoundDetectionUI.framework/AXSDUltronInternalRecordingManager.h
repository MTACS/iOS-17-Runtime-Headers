
@interface AXSDUltronInternalRecordingManager : NSObject {
    AXHARingBuffer * _audioRingBuffer;
    NSTimer * _cleanupTimer;
    NSMutableDictionary * _currentDetections;
    NSMutableDictionary * _detectionResultCollection;
    NSObject<OS_dispatch_queue> * _fileProcessingQueue;
    double  _sampleLength;
}

+ (bool)_cleanupUltronFiles:(id)arg1;
+ (id)_directory;
+ (void)_reduceFileDirectorySize;
+ (id)_retrieveFilesOlderThan:(double)arg1;
+ (void)cleanupUltron;
+ (id)defaults;
+ (void)enroll;
+ (bool)isEnrolled;
+ (id)path;
+ (void)setPrompted;
+ (void)unenroll;
+ (bool)wasPrompted;

- (void).cxx_destruct;
- (void)_recordResultToFile:(id)arg1;
- (id)audioFileSettings;
- (void)dealloc;
- (id)getDictionaryForListenType;
- (id)initWithSampleLength:(double)arg1 bufferSize:(double)arg2;
- (void)listenEngineFailedToStartWithError:(id)arg1;
- (void)saveDetectionResult:(id)arg1;
- (void)trackBuffer:(id)arg1 atTime:(id)arg2;

@end
