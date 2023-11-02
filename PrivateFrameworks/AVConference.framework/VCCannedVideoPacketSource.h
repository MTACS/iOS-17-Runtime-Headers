
@interface VCCannedVideoPacketSource : NSObject {
    struct __CFAllocator { } * _blockBufferHeaderAllocator;
    struct OpaqueFigThread { } * _cannedReplayThread;
    bool  _cannedReplayThreadCanceled;
    NSFileHandle * _fileHandle;
    NSString * _filePath;
    unsigned char  _mode;
    struct _opaque_pthread_cond_t { 
        long long __sig; 
        BOOL __opaque[40]; 
    }  _replayCondition;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _replayMutex;
    NSMutableDictionary * _rtcpCallbacks;
    struct __CFAllocator { } * _rtcpPacketAllocator;
    NSMutableDictionary * _rtpCallbacks;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _stateLock;
    NSObject<OS_dispatch_queue> * _writeQueue;
}

+ (bool)createFileAtPath:(id)arg1;
+ (bool)overwriteFileAtPath:(id)arg1;
+ (bool)removeFileAtPath:(id)arg1;

- (void)dealloc;
- (id)initWithMode:(unsigned char)arg1 filePath:(id)arg2;
- (bool)setUpSourceFileWithMode:(unsigned char)arg1;
- (int)startCannedInjection;
- (int)stopCannedInjection;

@end
