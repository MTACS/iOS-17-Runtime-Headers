
@interface ARQATracer : NSObject <ARInternalSessionObserver, ARReplaySensorDelegate> {
    NSMutableDictionary * _additionalResults;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _additionalResultsLock;
    NSMutableData * _dataBuffer;
    <ARQATracerDelegate> * _delegate;
    bool  _forceQuitApp;
    unsigned long long  _frameIndex;
    NSOutputStream * _framesStreamToFile;
    bool  _isTracing;
    struct CGPoint { 
        double x; 
        double y; 
    }  _offset;
    NSObject<OS_dispatch_queue> * _processingQueue;
    NSDictionary * _raycastQueryData;
    NSArray * _raycastResultData;
    bool  _recordScreen;
    id  _screenRecorder;
    struct OpaqueVTPixelTransferSession { } * _segmentationTransferSession;
    MOVWriterInterface * _segmentationVideoFileWriter;
    NSObject<OS_dispatch_queue> * _segmentationVideoQueue;
    struct __CVPixelBufferPool { } * _segmentationYUVPixelBufferPool;
    MOVWriterInterface * _semanticsVideoFileWriter;
    NSObject<OS_dispatch_queue> * _semanticsVideoQueue;
    struct __CVPixelBufferPool { } * _semanticsYUVPixelBufferPool;
    NSMutableDictionary * _traceHeader;
    NSString * _traceOutputFilePath;
}

@property (retain) NSMutableDictionary *additionalResults;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ARQATracerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool forceQuitApp;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGPoint { double x1; double x2; } offset;
@property (nonatomic) bool recordScreen;
@property (nonatomic, retain) id screenRecorder;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *traceOutputFilePath;

// Image: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore

+ (bool)isEnabled;
+ (id)traceOutputDirectory;

- (void).cxx_destruct;
- (struct __CVBuffer { }*)_createRecordablePixelBufferFromSegmentationBuffer:(struct __CVBuffer { }*)arg1;
- (struct __CVBuffer { }*)_createRecordablePixelBufferFromSemanticsBuffer:(struct __CVBuffer { }*)arg1;
- (bool)_shouldDumpSemanticData;
- (id)additionalResults;
- (void)dealloc;
- (id)delegate;
- (void)flushDataBufferToFile;
- (bool)forceQuitApp;
- (id)init;
- (bool)isSemanticSegmentationDataAvailableForSession:(id)arg1;
- (struct CGPoint { double x1; double x2; })offset;
- (void)receiveDefaults;
- (bool)recordScreen;
- (void)replaySensorDidFinishReplayingData;
- (id)screenRecorder;
- (void)session:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)session:(id)arg1 didUpdateFrame:(id)arg2;
- (void)setAdditionalResults:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setForceQuitApp:(bool)arg1;
- (void)setOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRecordScreen:(bool)arg1;
- (void)setScreenRecorder:(id)arg1;
- (void)setTraceOutputFilePath:(id)arg1;
- (void)start:(id)arg1;
- (void)stop;
- (void)trace:(id)arg1 forKey:(id)arg2;
- (id)traceOutputFilePath;
- (void)traceRaycastQuery:(id)arg1;
- (void)traceRaycastResults:(id)arg1;
- (void)update:(id)arg1 session:(id)arg2;
- (void)writeJSONObjectToStream:(id)arg1 prefix:(id)arg2;
- (void)writeStringToOutputStream:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ARKitUI.framework/ARKitUI

- (void)_startScreenRecording;
- (void)_stopScreenRecording;

@end
