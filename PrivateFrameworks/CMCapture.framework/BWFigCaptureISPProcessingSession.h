
@interface BWFigCaptureISPProcessingSession : NSObject {
    NSMutableDictionary * _cachedProperties;
    <BWFigCaptureISPProcessingSessionDelegate> * _delegate;
    bool  _invalidated;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    struct OpaqueFigCaptureISPProcessingSession { } * _session;
    NSDictionary * _supportedProperties;
}

@property (nonatomic) <BWFigCaptureISPProcessingSessionDelegate> *delegate;
@property (readonly) struct OpaqueFigCaptureISPProcessingSession { }*figCaptureISPProcessingSession;
@property (readonly) NSDictionary *supportedProperties;

+ (void)initialize;

- (id)copyProperty:(struct __CFString { }*)arg1 error:(int*)arg2;
- (void)dealloc;
- (id)delegate;
- (struct OpaqueFigCaptureISPProcessingSession { }*)figCaptureISPProcessingSession;
- (int)flush;
- (id)getProperty:(struct __CFString { }*)arg1 error:(int*)arg2;
- (id)initWithFigCaptureISPProcessingSession:(struct OpaqueFigCaptureISPProcessingSession { }*)arg1;
- (int)invalidate;
- (int)prepareWithHandler:(id /* block */)arg1;
- (int)processBuffer:(struct __CVBuffer { }*)arg1 refCon:(void*)arg2 outputDescriptors:(struct { struct __CFString {} *x1; void *x2; }*)arg3 numOutputDescriptors:(int)arg4 parameters:(id)arg5;
- (void)setDelegate:(id)arg1;
- (int)setProperty:(struct __CFString { }*)arg1 value:(id)arg2;
- (id)supportedProperties;

@end
