
@interface PHASEExternalStream : NSObject {
    <PHASEExternalStreamDelegate> * _delegate;
    PHASEEngine * _engine;
    struct atomic<bool> { 
        struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
            _Atomic bool __a_value; 
        } __a_; 
    }  _invalidated;
    unsigned int  _latencyInFrames;
    bool  _paused;
    NSUUID * _streamGroupUUID;
    NSUUID * _streamUUID;
}

@property (nonatomic, readonly) <PHASEExternalStreamDelegate> *delegate;
@property (nonatomic, readonly) unsigned int latencyInFrames;
@property (nonatomic, readonly) bool paused;
@property (nonatomic, readonly) NSUUID *uuid;

+ (id)new;
+ (id)newUUID;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)engine;
- (id)init;
- (id)initWithEngine:(id)arg1 streamGroupUUID:(id)arg2 streamUUID:(id)arg3 startsPaused:(bool)arg4 delegate:(id)arg5;
- (unsigned int)latencyInFrames;
- (void)pause;
- (bool)paused;
- (void)resume;
- (void)setPause:(bool)arg1 completion:(id /* block */)arg2;
- (void)stopAndInvalidate;
- (id)streamUUID;
- (id)uuid;

@end
