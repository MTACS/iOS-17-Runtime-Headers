
@interface PLLocalVideoKeyFrameJobQueue : NSObject {
    unsigned long long  _inflightCount;
    NSMutableDictionary * _jobsByAssetObjectID;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableOrderedSet * _queuedJobs;
}

- (void).cxx_destruct;
- (bool)addJobWithAssetObjectID:(id)arg1 networkAccessAllowed:(bool)arg2 libraryID:(id)arg3 error:(id*)arg4 completionHandler:(id /* block */)arg5;
- (id)init;
- (id)popNextJobToRun;
- (bool)removeJob:(id)arg1;

@end
