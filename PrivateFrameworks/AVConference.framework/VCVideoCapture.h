
@interface VCVideoCapture : NSObject {
    id  _captureServer;
    VideoAttributes * _localVideoAttributes;
    struct tagVCVideoCaptureServerProtocolRealtimeInstanceVTable { 
        int (*onCaptureVideoFrame)(); 
    }  _protocolFunctions;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _sinkArrayMutex;
    unsigned int  _sinkCount;
    struct _VCSingleLinkedList { 
        struct _VCSingleLinkedListEntry {} *head; 
        bool initialized; 
        int (*compare)(); 
        unsigned long long countEntries; 
    }  _sinkList;
    NSString * _sourceUID;
}

@property (readonly) NSObject<VCVideoCaptureServer> *captureServer;
@property (readonly) struct tagVCVideoCaptureServerProtocolRealtimeInstanceVTable { int (*x1)(); }*protocolFunctions;
@property (readonly) unsigned int sinkCount;

- (unsigned int)addSink:(id)arg1;
- (id)captureServer;
- (void)cleanupSinkEntry:(struct tagVCVideoCaptureSinkEntry { struct _VCSingleLinkedListEntry { struct _VCSingleLinkedListEntry {} *x_1_1_1; } x1; id x2; id /* block */ x3; }*)arg1;
- (void)dealloc;
- (id)initWithCaptureServer:(id)arg1 protocolFunctions:(const struct tagVCVideoCaptureServerProtocolRealtimeInstanceVTable { int (*x1)(); }*)arg2;
- (struct tagVCVideoCaptureServerProtocolRealtimeInstanceVTable { int (*x1)(); }*)protocolFunctions;
- (unsigned int)removeSink:(id)arg1;
- (unsigned int)sinkCount;

@end
