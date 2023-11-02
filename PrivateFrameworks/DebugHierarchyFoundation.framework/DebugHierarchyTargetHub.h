
@interface DebugHierarchyTargetHub : NSObject {
    NSObject<OS_dispatch_queue> * _agentConnectionQueue;
    NSObject<OS_xpc_object> * _currentReply;
    NSString * _currentRequestInBase64;
    int  _currentResponseFileDescriptor;
    int  _darwinNotificationToken;
    NSMapTable * _knownObjectsMap;
    NSData * _response;
    DebugHierarchyRuntimeInfo * _runtimeInfo;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *agentConnectionQueue;
@property (nonatomic, retain) NSObject<OS_xpc_object> *currentReply;
@property (nonatomic, retain) NSString *currentRequestInBase64;
@property (nonatomic) int currentResponseFileDescriptor;
@property (nonatomic, readonly) int darwinNotificationToken;
@property (nonatomic, readonly) NSMapTable *knownObjectsMap;
@property (nonatomic, readonly) NSData *response;
@property (nonatomic, readonly) DebugHierarchyRuntimeInfo *runtimeInfo;

+ (float)debugHierarchyVersion;
+ (id)performDebugRequest:(long long)arg1;
+ (id)sharedHub;

- (void).cxx_destruct;
- (id)agentConnectionQueue;
- (void)clearAllRequestsAndData;
- (id)currentReply;
- (id)currentRequestInBase64;
- (const void*)currentResponseBytes;
- (int)currentResponseFileDescriptor;
- (unsigned long long)currentResponseLength;
- (int)darwinNotificationToken;
- (void)handleXPCEvent:(id)arg1;
- (id)init;
- (id)knownObjectsMap;
- (void)openXPCConnection;
- (id)performRequest:(id)arg1;
- (id)performRequest:(id)arg1 error:(id*)arg2;
- (void)performRequestAndWriteResponseToFileDescriptorWithRequestInBase64:(id)arg1 fileDescriptor:(int)arg2;
- (bool)performRequestInPlaceWithRequestInBase64:(id)arg1;
- (id)performRequestWithRequestInBase64:(id)arg1;
- (void)registerForDarwinNotifications;
- (id)response;
- (id)runtimeInfo;
- (void)setCurrentReply:(id)arg1;
- (void)setCurrentRequest:(id)arg1 responseFileDescriptor:(int)arg2 reply:(id)arg3;
- (void)setCurrentRequestInBase64:(id)arg1;
- (void)setCurrentResponseFileDescriptor:(int)arg1;

@end
