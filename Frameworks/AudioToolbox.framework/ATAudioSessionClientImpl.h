
@interface ATAudioSessionClientImpl : NSObject {
    int (* _clientInterruptionListenerProc;
    struct ObjectRef<__CFRunLoop *> { 
        struct __CFRunLoop {} *mCFObject; 
    }  _clientRunLoop;
    struct StringRef { 
        struct ObjectRef<const __CFString *> { 
            struct __CFString {} *mCFObject; 
        } mObject; 
    }  _clientRunLoopMode;
    void * _clientUserData;
    unsigned int  _interruptionType;
    bool  _isConfigured;
    struct map<std::string, std::shared_ptr<NewNotificationCenterObserver>, std::less<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<NewNotificationCenterObserver>>>> { 
        struct __tree<std::__value_type<std::string, std::shared_ptr<NewNotificationCenterObserver>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::shared_ptr<NewNotificationCenterObserver>>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::shared_ptr<NewNotificationCenterObserver>>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::shared_ptr<NewNotificationCenterObserver>>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::shared_ptr<NewNotificationCenterObserver>>, std::less<std::string>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _newNotificationCenterObservers;
    struct map<std::string, std::shared_ptr<OldNotificationCenterObserver>, std::less<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<OldNotificationCenterObserver>>>> { 
        struct __tree<std::__value_type<std::string, std::shared_ptr<OldNotificationCenterObserver>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::shared_ptr<OldNotificationCenterObserver>>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::shared_ptr<OldNotificationCenterObserver>>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::shared_ptr<OldNotificationCenterObserver>>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::shared_ptr<OldNotificationCenterObserver>>, std::less<std::string>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _oldNotificationCenterObservers;
    struct unique_ptr<AudioSessionPropertyListeners, std::default_delete<AudioSessionPropertyListeners>> { 
        struct __compressed_pair<AudioSessionPropertyListeners *, std::default_delete<AudioSessionPropertyListeners>> { 
            struct AudioSessionPropertyListeners {} *__value_; 
        } __ptr_; 
    }  _propertyListeners;
    ATAudioSessionPropertyManager * _propertyManager;
    AVAudioSession * _strongSession;
    AVAudioSession * _weakSession;
}

@property (readonly) AVAudioSession *avas;
@property int (*clientInterruptionListenerProc;
@property void*clientUserData;
@property unsigned int interruptionType;
@property bool isConfigured;

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)AudioSessionAddPropertyListenerImpl:(unsigned int)arg1 userProc:(int (*)arg2 userData:(void*)arg3;
- (int)AudioSessionGetPropertyImpl:(unsigned int)arg1 size:(unsigned int*)arg2 data:(void*)arg3;
- (int)AudioSessionGetPropertySizeImpl:(unsigned int)arg1 size:(unsigned int*)arg2;
- (int)AudioSessionRemovePropertyListenerImpl:(unsigned int)arg1;
- (int)AudioSessionRemovePropertyListenerWithUserDataImpl:(unsigned int)arg1 userProc:(int (*)arg2 userData:(void*)arg3;
- (int)AudioSessionSetActiveImpl:(unsigned char)arg1 flags:(unsigned int)arg2;
- (int)AudioSessionSetPropertyImpl:(unsigned int)arg1 size:(unsigned int)arg2 data:(const void*)arg3;
- (void)addAVAudioSessionKVOObservers:(unsigned int)arg1 session:(id)arg2;
- (void)addNSNotificationListenerFor:(id)arg1 session:(id)arg2 block:(id /* block */)arg3;
- (void)addNSNotificationListenerFor:(id)arg1 session:(id)arg2 selector:(SEL)arg3;
- (id)avas;
- (void)callPropertyListeners:(unsigned int)arg1 data:(id)arg2;
- (int (*)clientInterruptionListenerProc;
- (void*)clientUserData;
- (void)handleInterruption:(id)arg1;
- (void)handleRouteChange:(id)arg1;
- (void)handleServerDeath:(id)arg1;
- (void)handleServerReset:(id)arg1;
- (id)initWithSession:(id)arg1;
- (id)initWithStrongSession:(id)arg1;
- (unsigned int)interruptionType;
- (bool)isConfigured;
- (bool)isValid;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)removeAVAudioSessionKVOObservers:(unsigned int)arg1;
- (int)resetClientConfiguration;
- (int)setClientConfiguration:(struct __CFRunLoop { }*)arg1 runLoopMode:(struct __CFString { }*)arg2 listenerProc:(int (*)arg3 userData:(void*)arg4;
- (void)setClientInterruptionListenerProc:(int (*)arg1;
- (void)setClientUserData:(void*)arg1;
- (void)setInterruptionType:(unsigned int)arg1;
- (void)setIsConfigured:(bool)arg1;

@end
