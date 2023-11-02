
@interface AVAudioApplication : NSObject {
    struct unique_ptr<caulk::synchronized<as::client::AVAudioApplicationImpl>, std::default_delete<caulk::synchronized<as::client::AVAudioApplicationImpl>>> { 
        struct __compressed_pair<caulk::synchronized<as::client::AVAudioApplicationImpl> *, std::default_delete<caulk::synchronized<as::client::AVAudioApplicationImpl>>> { 
            void *__value_; 
        } __ptr_; 
    }  _impl;
    bool  _inputMuted;
}

@property (readonly) unsigned int clientID;
@property (getter=isInputMuted, nonatomic, readonly) bool inputMuted;
@property (readonly) long long recordPermission;

+ (void)requestRecordPermissionWithCompletionHandler:(id /* block */)arg1;
+ (id)sharedInstance;
+ (bool)toggleInputMute:(id*)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned int)clientID;
- (void)dealloc;
- (id)initDelegateForProcess:(struct { unsigned int x1[8]; })arg1 processAttribution:(id)arg2;
- (id)initPrivate:(id)arg1;
- (id)initProxyForProcess:(struct { unsigned int x1[8]; })arg1;
- (id)initWithSpecification:(id)arg1;
- (bool)isInputMuted;
- (void)postNotificationName:(id)arg1 userInfo:(id)arg2;
- (bool)privateCreateAudioApplicationInServer:(id)arg1;
- (void)privateEnableSystemMute:(bool)arg1;
- (struct tuple<int, id<NSSecureCoding>> { struct __tuple_impl<std::__tuple_indices<0, 1>, int, id<NSSecureCoding>> { int x_1_1_1; id x_1_1_2; } x1; })privateGetAppProperty:(id)arg1;
- (struct tuple<std::shared_ptr<as::client::XPCConnection>, as::ProcessIdentity, unsigned int> { struct __tuple_impl<std::__tuple_indices<0, 1, 2>, std::shared_ptr<as::client::XPCConnection>, as::ProcessIdentity, unsigned int> { struct shared_ptr<as::client::XPCConnection> { struct XPCConnection {} *x_1_2_1; struct __shared_weak_count {} *x_1_2_2; } x_1_1_1; struct ProcessIdentity { struct { unsigned int x_1_3_1[8]; } x_2_2_1; int x_2_2_2; int x_2_2_3; } x_1_1_2; unsigned int x_1_1_3; } x1; })privateGetConnection;
- (struct sync_guard<as::client::AVAudioApplicationImpl, caulk::mach::unfair_lock> { struct unfair_lock {} *x1; struct value_holder<as::client::AVAudioApplicationImpl> { struct AVAudioApplicationImpl {} *x_2_1_1; } x2; })privateGetImplGuard;
- (struct tuple<int, id<NSSecureCoding>> { struct __tuple_impl<std::__tuple_indices<0, 1>, int, id<NSSecureCoding>> { int x_1_1_1; id x_1_1_2; } x1; })privateGetMXProperty:(id)arg1;
- (void)privateHandlePing;
- (void)privateOptInToStemClickMuting;
- (bool)privateRecreateAudioApplicationInServer;
- (int)privateSetAppProperty:(id)arg1 value:(id)arg2;
- (int)privateSetAppProperty:(id)arg1 value:(id)arg2 guard:(void*)arg3;
- (int)privateSetMXPropertyOnAllSessions:(id)arg1 value:(id)arg2;
- (int)privateUpdateAppProperty:(id)arg1 value:(id)arg2 context:(id)arg3;
- (long long)recordPermission;
- (id)sessionIDs;
- (bool)setInputMuteStateChangeHandler:(id /* block */)arg1 error:(id*)arg2;
- (bool)setInputMuted:(bool)arg1 context:(id)arg2 error:(id*)arg3;
- (bool)setInputMuted:(bool)arg1 error:(id*)arg2;
- (bool)stemClickMutingEnabled;

@end
