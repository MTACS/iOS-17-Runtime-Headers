
@interface VLTraceRecorder : NSObject {
    NSURL * _baseDirectory;
    struct GEOOnce_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
        bool didRun; 
    }  _began;
    NSURL * _destinationDirectory;
    struct GEOOnce_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
        bool didRun; 
    }  _finished;
    NSURL * _imagesDirectory;
    NSURL * _parametersDirectory;
    NSObject<OS_dispatch_queue> * _queue;
    NSURL * _resultsDirectory;
}

+ (id)defaultDirectory;

- (void).cxx_destruct;
- (void)_beginTraceIfNecessary;
- (void)_finishOnIsolationQueue;
- (void)_recordAttemptOnIsolationQueue:(id)arg1;
- (void)finish;
- (id)initWithDirectory:(id)arg1;
- (void)recordAttempt:(id)arg1;
- (void)start;

@end
