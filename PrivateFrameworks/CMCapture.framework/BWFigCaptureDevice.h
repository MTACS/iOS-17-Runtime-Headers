
@interface BWFigCaptureDevice : NSObject <BWFigCaptureISPProcessingSessionDelegate> {
    NSMutableArray * _activeProcessingSessions;
    struct OpaqueFigCaptureDevice { } * _device;
    NSString * _deviceID;
    bool  _invalidated;
    unsigned int  _ktraceCodePrefix;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSArray * _streams;
    NSDictionary * _streamsByPortType;
    NSDictionary * _supportedProperties;
    NSArray * _synchronizedStreamsGroups;
    long long  _uniqueID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSString *deviceID;
@property (readonly) struct OpaqueFigCaptureDevice { }*figCaptureDevice;
@property (readonly) unsigned long long hash;
@property (readonly) bool invalidated;
@property (readonly) NSArray *streams;
@property (readonly) Class superclass;
@property (readonly) NSDictionary *supportedProperties;
@property (readonly) NSArray *synchronizedStreamsGroups;
@property (readonly) long long uniqueID;

+ (void)initialize;

- (id)copyISPProcessingSessionWithType:(int)arg1 error:(int*)arg2;
- (id)copyProperty:(struct __CFString { }*)arg1 error:(int*)arg2;
- (id)copyPropertyIfSupported:(struct __CFString { }*)arg1 error:(int*)arg2;
- (id)copyStreamForFigCaptureStream:(struct OpaqueFigCaptureStream { }*)arg1 error:(int*)arg2;
- (id)copyStreamWithPortType:(struct __CFString { }*)arg1 error:(int*)arg2;
- (id)copyStreamsWithPortTypes:(id)arg1 error:(int*)arg2;
- (id)copySyncGroupForFigCaptureSynchronizedStreamsGroup:(struct OpaqueFigCaptureSynchronizedStreamsGroup { }*)arg1 error:(int*)arg2;
- (id)copySynchronizedStreamsGroupForStreams:(id)arg1 error:(int*)arg2;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)deviceID;
- (int)enqueueReactionEffect:(id)arg1;
- (struct OpaqueFigCaptureDevice { }*)figCaptureDevice;
- (id)getProperty:(struct __CFString { }*)arg1 error:(int*)arg2;
- (id)getPropertyIfSupported:(struct __CFString { }*)arg1 error:(int*)arg2;
- (id)initWithFigCaptureDevice:(struct OpaqueFigCaptureDevice { }*)arg1 deviceID:(id)arg2;
- (void)invalidate;
- (bool)invalidated;
- (void)processingSessionHasBeenInvalidated:(id)arg1;
- (int)registerForNotification:(struct __CFString { }*)arg1 listener:(const void*)arg2 callback:(int (*)arg3;
- (int)relinquishControlOfStreams:(id)arg1;
- (int)requestControlOfStreams:(id)arg1;
- (void)resetSynchronizedStreamsGroups;
- (int)setProperty:(struct __CFString { }*)arg1 value:(id)arg2;
- (int)setPropertyIfSupported:(struct __CFString { }*)arg1 value:(id)arg2;
- (id)streams;
- (id)supportedProperties;
- (id)synchronizedStreamsGroups;
- (long long)uniqueID;
- (int)unregisterForNotification:(struct __CFString { }*)arg1 listener:(const void*)arg2;

@end
