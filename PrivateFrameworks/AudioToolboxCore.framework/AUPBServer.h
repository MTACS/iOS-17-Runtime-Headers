
@interface AUPBServer : NSObject <AUPBServing, NSXPCListenerDelegate> {
    unsigned int  mAUHandleCntr;
    struct map<unsigned int, RemoteAUHandleInfo, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, RemoteAUHandleInfo>>> { 
        struct __tree<std::__value_type<unsigned int, RemoteAUHandleInfo>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, RemoteAUHandleInfo>, std::less<unsigned int>>, std::allocator<std::__value_type<unsigned int, RemoteAUHandleInfo>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, RemoteAUHandleInfo>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, RemoteAUHandleInfo>, std::less<unsigned int>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  mAUHandlesToInfo;
    unsigned int  mAUPBRefCounter;
    struct map<unsigned int, AUProcessingBlock, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, AUProcessingBlock>>> { 
        struct __tree<std::__value_type<unsigned int, AUProcessingBlock>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, AUProcessingBlock>, std::less<unsigned int>>, std::allocator<std::__value_type<unsigned int, AUProcessingBlock>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, AUProcessingBlock>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, AUProcessingBlock>, std::less<unsigned int>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  mBlockHandlesToMethods;
    NSMutableArray * mClientConnections;
    bool  mConnectionAcknowledged;
    NSXPCListener * mListener;
    struct unique_ptr<CADeprecated::CAMutex, std::default_delete<CADeprecated::CAMutex>> { 
        struct __compressed_pair<CADeprecated::CAMutex *, std::default_delete<CADeprecated::CAMutex>> { 
            struct CAMutex {} *__value_; 
        } __ptr_; 
    }  mLock;
    int  mNotifyToken;
    <AUPBRegistrarHosting> * mProxyInterface;
    NSXPCConnection * mRegistrarConnection;
    struct unique_ptr<TestAUProcessingBlock, std::default_delete<TestAUProcessingBlock>> { 
        struct __compressed_pair<TestAUProcessingBlock *, std::default_delete<TestAUProcessingBlock>> { 
            struct TestAUProcessingBlock {} *__value_; 
        } __ptr_; 
    }  mTestBlock;
    bool  mValidToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedInstance;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned int)auHandleFromRef:(struct OpaqueRemoteAudioUnit { }*)arg1;
- (struct OpaqueRemoteAudioUnit { }*)auRefFromHandle:(unsigned int)arg1;
- (struct AUProcessingBlock { struct AUPBMethods { unsigned int x_1_1_1; int (*x_1_1_2)(); int (*x_1_1_3)(); int (*x_1_1_4)(); int (*x_1_1_5)(); int (*x_1_1_6)(); int (*x_1_1_7)(); int (*x_1_1_8)(); } x1; void *x2; }*)aupbFromAUHandle:(unsigned int)arg1;
- (struct AUProcessingBlock { struct AUPBMethods { unsigned int x_1_1_1; int (*x_1_1_2)(); int (*x_1_1_3)(); int (*x_1_1_4)(); int (*x_1_1_5)(); int (*x_1_1_6)(); int (*x_1_1_7)(); int (*x_1_1_8)(); } x1; void *x2; }*)aupbFromRef:(struct OpaqueAUPB { }*)arg1;
- (id)autorelease;
- (void)blockListChanged;
- (void)checkConnectRegistrar;
- (void)copyProcessingBlock:(unsigned int)arg1 property:(unsigned int)arg2 intoReply:(id /* block */)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)getAudioUnit:(unsigned int)arg1 parameter:(unsigned int)arg2 onScope:(unsigned int)arg3 element:(unsigned int)arg4 inReply:(id /* block */)arg5;
- (void)getAudioUnit:(unsigned int)arg1 property:(unsigned int)arg2 onScope:(unsigned int)arg3 element:(unsigned int)arg4 inReply:(id /* block */)arg5;
- (void)getAudioUnit:(unsigned int)arg1 propertyInfo:(unsigned int)arg2 onScope:(unsigned int)arg3 element:(unsigned int)arg4 inReply:(id /* block */)arg5;
- (unsigned int)handleFromAUPBRef:(struct OpaqueAUPB { }*)arg1;
- (void)handleRegistrarCrash;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)processingBlock:(struct OpaqueAUPB { }*)arg1 properties:(const unsigned int*)arg2 count:(unsigned int)arg3 changedWithQualifierData:(void*)arg4 length:(unsigned int)arg5;
- (void)processingBlockRef:(struct OpaqueAUPB { }*)arg1 propertyChanged:(unsigned int)arg2;
- (int)registerAU:(struct OpaqueRemoteAudioUnit { }*)arg1 inBlock:(struct OpaqueAUPB { }*)arg2;
- (struct OpaqueAUPB { }*)registerBlock:(const struct AUPBMethods { unsigned int x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); }*)arg1 withUserData:(void*)arg2;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (void)setAudioUnit:(unsigned int)arg1 parameter:(unsigned int)arg2 onScope:(unsigned int)arg3 element:(unsigned int)arg4 value:(float)arg5 withReply:(id /* block */)arg6;
- (void)setAudioUnit:(unsigned int)arg1 property:(unsigned int)arg2 onScope:(unsigned int)arg3 element:(unsigned int)arg4 value:(id)arg5 withReply:(id /* block */)arg6;
- (void)setProcessingBlock:(unsigned int)arg1 property:(unsigned int)arg2 value:(id)arg3 withReply:(id /* block */)arg4;
- (void)startRegistrarConnection;
- (int)unregisterAU:(struct OpaqueRemoteAudioUnit { }*)arg1;
- (int)unregisterBlock:(struct OpaqueAUPB { }*)arg1;

@end
