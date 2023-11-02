
@interface BWFigCaptureSynchronizedStreamsGroup : NSObject {
    NSArray * _activeStreams;
    bool  _invalidated;
    unsigned int  _ktraceCodePrefix;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _stopSupported;
    NSArray * _streams;
    NSDictionary * _supportedProperties;
    struct OpaqueFigCaptureSynchronizedStreamsGroup { } * _syncGroup;
    BWFigCaptureStream * _synchronizationMaster;
}

@property (readonly) bool stopSupported;
@property (readonly) NSArray *streams;
@property (readonly) NSDictionary *supportedProperties;
@property (readonly) BWFigCaptureStream *synchronizationMaster;

+ (void)initialize;

- (id)activeStreams;
- (id)copyProperty:(struct __CFString { }*)arg1 error:(int*)arg2;
- (void)dealloc;
- (struct OpaqueFigCaptureSynchronizedStreamsGroup { }*)figCaptureSynchronizedStreamsGroup;
- (id)getProperty:(struct __CFString { }*)arg1 error:(int*)arg2;
- (id)initWithFigCaptureSynchronizedStreamsGroup:(struct OpaqueFigCaptureSynchronizedStreamsGroup { }*)arg1 captureDevice:(id)arg2;
- (void)invalidate;
- (int)setActiveStreams:(id)arg1;
- (int)setCameraControlsMasterStream:(id)arg1;
- (int)setMasterStream:(id)arg1 slaveConfigurationsByPortType:(id)arg2;
- (int)setProperty:(struct __CFString { }*)arg1 value:(id)arg2;
- (int)stop;
- (bool)stopSupported;
- (id)streams;
- (id)supportedProperties;
- (id)synchronizationMaster;

@end
