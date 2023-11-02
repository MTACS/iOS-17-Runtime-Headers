
@interface AVAudioMicrophoneMonitor : NSObject <AVAudioMicrophoneMonitor> {
    struct set<std::pair<AVAudioMicrophoneMonitorClientType, unsigned long long>, std::less<std::pair<AVAudioMicrophoneMonitorClientType, unsigned long long>>, std::allocator<std::pair<AVAudioMicrophoneMonitorClientType, unsigned long long>>> { 
        struct __tree<std::pair<AVAudioMicrophoneMonitorClientType, unsigned long long>, std::less<std::pair<AVAudioMicrophoneMonitorClientType, unsigned long long>>, std::allocator<std::pair<AVAudioMicrophoneMonitorClientType, unsigned long long>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::pair<AVAudioMicrophoneMonitorClientType, unsigned long long>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::less<std::pair<AVAudioMicrophoneMonitorClientType, unsigned long long>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _clientsWithMicEnabled;
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _monitorMutex;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;
- (bool)setState:(bool)arg1 clientType:(long long)arg2 clientID:(unsigned long long)arg3 clientDescription:(const char *)arg4;

@end
