
@interface PHVideoRequest : PHMediaRequest {
    PHVideoRequestBehaviorSpec * _behaviorSpec;
    PHImageDisplaySpec * _displaySpec;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    PHVideoResult * _videoResult;
}

@property (nonatomic, readonly) PHVideoRequestBehaviorSpec *behaviorSpec;
@property (nonatomic, readonly) PHImageDisplaySpec *displaySpec;

- (void).cxx_destruct;
- (void)_finish;
- (void)_handleResultVideoURL:(id)arg1 mediaItemMakerData:(id)arg2 fingerPrint:(id)arg3 info:(id)arg4 error:(id)arg5;
- (id)behaviorSpec;
- (id)displaySpec;
- (long long)downloadIntent;
- (long long)downloadPriority;
- (id)initWithRequestID:(int)arg1 requestIndex:(unsigned long long)arg2 contextType:(long long)arg3 managerID:(unsigned long long)arg4 asset:(id)arg5 displaySpec:(id)arg6 behaviorSpec:(id)arg7 delegate:(id)arg8;
- (bool)isNetworkAccessAllowed;
- (bool)isSynchronous;
- (void)startRequest;

@end
