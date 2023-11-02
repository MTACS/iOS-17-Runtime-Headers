
@interface ManagedInputStream : NSObject {
    NSUUID * _attributedClientID;
    bool  _canRecord;
    PHASEExternalInputStreamDefinition * _definition;
    struct shared_ptr<caulk::synchronized<Phase::Controller::ExternalStreamFader>> { 
        void *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _fader;
    bool  _isFading;
    bool  _isMuted;
    id /* block */  _pauseStateDidUpdateCallback;
    bool  _shouldResumeWithSession;
    bool  _streamPaused;
}

@property (nonatomic, retain) NSUUID *attributedClientID;
@property (nonatomic) bool canRecord;
@property (nonatomic, retain) PHASEExternalInputStreamDefinition *definition;
@property (nonatomic) struct shared_ptr<caulk::synchronized<Phase::Controller::ExternalStreamFader>> { void *x1; struct __shared_weak_count {} *x2; } fader;
@property (nonatomic) bool isFading;
@property (nonatomic) bool isMuted;
@property (nonatomic, copy) id /* block */ pauseStateDidUpdateCallback;
@property (nonatomic) bool shouldResumeWithSession;
@property (getter=isStreamPaused, nonatomic) bool streamPaused;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)attributedClientID;
- (bool)canRecord;
- (id)definition;
- (struct shared_ptr<caulk::synchronized<Phase::Controller::ExternalStreamFader>> { void *x1; struct __shared_weak_count {} *x2; })fader;
- (id)initWithPaused:(bool)arg1 attributedTo:(id)arg2 definition:(id)arg3 canRecord:(bool)arg4 fader:(struct shared_ptr<caulk::synchronized<Phase::Controller::ExternalStreamFader>> { void *x1; struct __shared_weak_count {} *x2; })arg5 pauseStateDidUpdateCallback:(id /* block */)arg6;
- (bool)isFading;
- (bool)isMuted;
- (bool)isStreamPaused;
- (id /* block */)pauseStateDidUpdateCallback;
- (void)setAttributedClientID:(id)arg1;
- (void)setCanRecord:(bool)arg1;
- (void)setDefinition:(id)arg1;
- (void)setFader:(struct shared_ptr<caulk::synchronized<Phase::Controller::ExternalStreamFader>> { void *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setIsFading:(bool)arg1;
- (void)setIsMuted:(bool)arg1;
- (void)setPauseStateDidUpdateCallback:(id /* block */)arg1;
- (void)setShouldResumeWithSession:(bool)arg1;
- (void)setStreamPaused:(bool)arg1;
- (bool)shouldResumeWithSession;

@end
