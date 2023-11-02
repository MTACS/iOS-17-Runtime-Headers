
@interface AVAudioSessionRemoteXPCClient : NSObject <SessionManagerXPCProtocol> {
    struct ProcessInfo { 
        struct ProcessToken { 
            unsigned int mValue; 
        } token; 
        NSXPCConnection *xpcConnection; 
        AVAudioSessionXPCClientRelay *mClientRelay; 
        struct basic_string<char, std::char_traits<char>, std::allocator<char>> { 
            struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { 
                struct __rep { 
                    union { 
                        struct __long { 
                            char *__data_; 
                            unsigned long long __size_; 
                            unsigned int __cap_ : 63; 
                            unsigned int __is_long_ : 1; 
                        } __l; 
                        struct __short { 
                            BOOL __data_[23]; 
                            unsigned char __padding_[0]; 
                            unsigned int __size_ : 7; 
                            unsigned int __is_long_ : 1; 
                        } __s; 
                        struct __raw { 
                            unsigned long long __words[3]; 
                        } __r; 
                    } ; 
                } __value_; 
            } __r_; 
        } mProcessName; 
    }  _clientProcess;
    AVAudioSessionXPCClientRelay * _clientRelay;
    struct reply_watchdog_factory { 
        bool mDebugging; 
        int mDefaultTimeoutMS; 
        struct function<void ()>="__f_"{__value_func<void ()>="__buf_"{type="__lx"[24C] {} mTimeoutHandler; 
        void *__f_; 
    }  _defaultReplyWatchdogFactory;
    bool  _invalidated;
    struct reply_watchdog_factory { 
        bool mDebugging; 
        int mDefaultTimeoutMS; 
        struct function<void ()>="__f_"{__value_func<void ()>="__buf_"{type="__lx"[24C] {} mTimeoutHandler; 
        void *__f_; 
    }  _longReplyWatchdogFactory;
    const char * _replyWatchdogFunctionName;
    struct time_point<std::chrono::system_clock, std::chrono::duration<long long, std::ratio<1, 1000000>>> { 
        struct duration<long long, std::ratio<1, 1000000>> { 
            long long __rep_; 
        } __d_; 
    }  _replyWatchdogMinTimestamp;
    AVAudioSessionXPCServer * _server;
    <AVAudioSessionServerDelegate> * _serverDelegate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)activateSession:(unsigned int)arg1 options:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)addMXNotificationListener:(unsigned int)arg1 notificationName:(id)arg2 reply:(id /* block */)arg3;
- (id)clientRelay;
- (void)createAudioApplicationForSpecification:(id)arg1 reply:(id /* block */)arg2;
- (void)createProxySession:(unsigned int)arg1 reply:(id /* block */)arg2;
- (void)createSession:(unsigned long long)arg1 sourceAuditToken:(struct { unsigned int x1[8]; })arg2 sourceSessionID:(unsigned int)arg3 nameOrDeviceUID:(id)arg4 reply:(id /* block */)arg5;
- (void)createSessionHelper:(unsigned long long)arg1 sourceAuditToken:(struct { unsigned int x1[8]; })arg2 sourceSessionID:(unsigned int)arg3 nameOrDeviceUID:(id)arg4 reply:(id /* block */)arg5;
- (void)deactivateSession:(unsigned int)arg1 options:(unsigned long long)arg2 priority:(id)arg3 reply:(id /* block */)arg4;
- (void)dealloc;
- (void)destroySession:(unsigned int)arg1 reply:(id /* block */)arg2;
- (void)getApplicationMessages:(struct { unsigned int x1[8]; })arg1 clientID:(unsigned int)arg2 reply:(id /* block */)arg3;
- (void)getApplicationProperty:(struct { unsigned int x1[8]; })arg1 clientID:(unsigned int)arg2 propertyID:(id)arg3 isMXProperty:(bool)arg4 reply:(id /* block */)arg5;
- (void)getDeferredMessages:(unsigned int)arg1 reply:(id /* block */)arg2;
- (void)getIOControllerPeriod:(unsigned int)arg1 decoupledInput:(bool)arg2 reply:(id /* block */)arg3;
- (void)getMXPropertyGenericPipe:(unsigned int)arg1 propertyName:(id)arg2 reply:(id /* block */)arg3;
- (void)getProperties:(unsigned int)arg1 properties:(id)arg2 reply:(id /* block */)arg3;
- (void)getProperty:(unsigned int)arg1 propertyName:(id)arg2 MXProperty:(bool)arg3 reply:(id /* block */)arg4;
- (void)getSpatialPreferencesForSession:(unsigned int)arg1 contentType:(long long)arg2 reply:(id /* block */)arg3;
- (void)getSpatialPreferencesForSession:(unsigned int)arg1 reply:(id /* block */)arg2;
- (void)getVolumeCategoryAndMode:(unsigned int)arg1 reply:(id /* block */)arg2;
- (void)handleRemoteInterruption:(unsigned int)arg1 interruptionStatus:(id)arg2 postInterruptionNotification:(bool)arg3 reply:(id /* block */)arg4;
- (id)initWithServer:(id)arg1 process:(struct ProcessInfo { struct ProcessToken { unsigned int x_1_1_1; } x1; id x2; id x3; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned int x_1_5_3 : 63; unsigned int x_1_5_4 : 1; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; unsigned char x_2_5_2[0]; unsigned int x_2_5_3 : 7; unsigned int x_2_5_4 : 1; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_4_1_1; } x4; })arg2 delegate:(id)arg3;
- (void)invalidate;
- (void)pingWithReply:(id /* block */)arg1;
- (void)removeMXNotificationListener:(unsigned int)arg1 notificationName:(id)arg2 reply:(id /* block */)arg3;
- (void)sessionIDs:(struct { unsigned int x1[8]; })arg1 clientID:(unsigned int)arg2 reply:(id /* block */)arg3;
- (void)setApplicationProperty:(struct { unsigned int x1[8]; })arg1 clientID:(unsigned int)arg2 propertyID:(id)arg3 propertyValue:(id)arg4 reply:(id /* block */)arg5;
- (void)setMXPropertyGenericPipe:(unsigned int)arg1 values:(id)arg2 reply:(id /* block */)arg3;
- (void)setMXPropertyOnAllSessions:(struct { unsigned int x1[8]; })arg1 clientID:(unsigned int)arg2 MXProperty:(id)arg3 values:(id)arg4 reply:(id /* block */)arg5;
- (void)setProperties:(unsigned int)arg1 values:(id)arg2 MXProperties:(bool)arg3 batchStrategy:(int)arg4 reply:(id /* block */)arg5;
- (id)setPropertiesMX:(unsigned int)arg1 token:(const struct { unsigned int x1[8]; }*)arg2 values:(id)arg3;
- (void)setSession:(unsigned int)arg1 decoupledInput:(bool)arg2 hasIOEventListeners:(bool)arg3 reply:(id /* block */)arg4;
- (void)silenceOutput:(unsigned int)arg1 options:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)simulatePrimarySessionCreationInsideServerWithReply:(id /* block */)arg1;
- (void)sleepWithReply:(unsigned int)arg1 reply:(id /* block */)arg2;
- (void)toggleInputMuteForRecordingProcess:(id /* block */)arg1;
- (void)updateApplicationProperty:(struct { unsigned int x1[8]; })arg1 clientID:(unsigned int)arg2 propertyID:(id)arg3 propertyValue:(id)arg4 context:(id)arg5 reply:(id /* block */)arg6;
- (void)updateMicrophonePermissionWithReply:(id /* block */)arg1;
- (void)verifySessionExists:(unsigned int)arg1 reply:(id /* block */)arg2;
- (struct World { }*)world;

@end
