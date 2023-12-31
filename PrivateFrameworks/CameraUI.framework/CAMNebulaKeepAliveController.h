
@interface CAMNebulaKeepAliveController : NSObject {
    bool  __didCreateKeepAliveDirectory;
    int  __nebuladKeepAliveFileDescriptor;
    NSMutableSet * __nebuladKeepAliveIdentifiers;
    NSObject<OS_dispatch_queue> * __syncQueue;
}

@property (setter=_setDidCreateKeepAliveDirectory:, nonatomic) bool _didCreateKeepAliveDirectory;
@property (setter=_setNebuladKeepAliveFileDescriptor:, nonatomic) int _nebuladKeepAliveFileDescriptor;
@property (nonatomic, readonly) NSMutableSet *_nebuladKeepAliveIdentifiers;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_syncQueue;

- (void).cxx_destruct;
- (bool)_didCreateKeepAliveDirectory;
- (id)_keepAliveFilePath;
- (int)_nebuladKeepAliveFileDescriptor;
- (id)_nebuladKeepAliveIdentifiers;
- (void)_setDidCreateKeepAliveDirectory:(bool)arg1;
- (void)_setNebuladKeepAliveFileDescriptor:(int)arg1;
- (id)_syncQueue;
- (id)init;
- (void)removeKeepAliveFileIfNotKeptForAnyIdentifiers;
- (void)startKeepAliveForIdentifier:(id)arg1;
- (void)stopKeepAliveForIdentifier:(id)arg1;

@end
