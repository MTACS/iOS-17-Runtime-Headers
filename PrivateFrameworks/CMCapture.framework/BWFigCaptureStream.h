
@interface BWFigCaptureStream : NSObject {
    NSMutableDictionary * _cachedProperties;
    bool  _calibrationDataSent;
    bool  _invalidated;
    unsigned int  _ktraceCodePrefix;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _portType;
    NSString * _portTypeShortString;
    id /* block */  _reactionsInProgressChangedHandler;
    <BWFigCaptureStreamStartStopDelegate> * _startStopDelegate;
    struct OpaqueFigCaptureStream { } * _stream;
    bool  _streaming;
    NSDictionary * _supportedProperties;
    NSString * _uniqueID;
}

@property (nonatomic) bool calibrationDataSent;
@property (readonly) struct OpaqueFigCaptureStream { }*figCaptureStream;
@property (nonatomic, readonly) NSString *portType;
@property (nonatomic, copy) id /* block */ reactionsInProgressChangedHandler;
@property (nonatomic) <BWFigCaptureStreamStartStopDelegate> *startStopDelegate;
@property (nonatomic, readonly) bool streaming;
@property (nonatomic, readonly) NSDictionary *supportedProperties;
@property (nonatomic, readonly) NSString *uniqueID;

+ (void)initialize;

- (int)addAttachmentsToSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 options:(id)arg2;
- (bool)calibrationDataSent;
- (id)copyProperty:(struct __CFString { }*)arg1 error:(int*)arg2;
- (id)copyPropertyIfSupported:(struct __CFString { }*)arg1 error:(int*)arg2;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (int)enqueueReactionEffect:(id)arg1;
- (struct OpaqueFigCaptureStream { }*)figCaptureStream;
- (void)flushPropertyCache;
- (id)getProperty:(struct __CFString { }*)arg1 error:(int*)arg2;
- (id)getPropertyIfSupported:(struct __CFString { }*)arg1 error:(int*)arg2;
- (id)initWithFigCaptureStream:(struct OpaqueFigCaptureStream { }*)arg1;
- (void)invalidate;
- (id)portType;
- (id /* block */)reactionsInProgressChangedHandler;
- (int)registerForNotification:(struct __CFString { }*)arg1 listener:(const void*)arg2 callback:(int (*)arg3;
- (int)sendCommandProperty:(struct __CFString { }*)arg1;
- (void)setCalibrationDataSent:(bool)arg1;
- (int)setProperty:(struct __CFString { }*)arg1 value:(id)arg2;
- (int)setPropertyIfSupported:(struct __CFString { }*)arg1 value:(id)arg2;
- (void)setReactionsInProgressChangedHandler:(id /* block */)arg1;
- (void)setStartStopDelegate:(id)arg1;
- (int)start;
- (id)startStopDelegate;
- (int)stop;
- (bool)streaming;
- (id)supportedProperties;
- (void)synchronizedStreamsGroupDidStop;
- (void)synchronizedStreamsGroupWillStop;
- (id)uniqueID;
- (int)unregisterForNotification:(struct __CFString { }*)arg1 listener:(const void*)arg2;
- (int)waitForNotificationBarrier;

@end
