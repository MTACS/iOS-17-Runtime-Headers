
@interface IOSurfaceRemotePerSurfacePerClientState : NSObject {
    IOSurfaceRemotePerSurfaceGlobalState * _globalState;
    unsigned int  _refcount;
    struct __IOSurfaceClient { } * _surface;
}

@property (nonatomic, readonly) unsigned int debugRefCount;
@property (nonatomic, retain) IOSurfaceRemotePerSurfaceGlobalState *globalState;
@property (nonatomic, readonly) struct __IOSurfaceClient { }*surface;

- (void).cxx_destruct;
- (void)addClientReferenceToSurfaceWithExtraData:(id)arg1;
- (void)dealloc;
- (unsigned int)debugRefCount;
- (id)globalState;
- (id)initWithSurface:(struct __IOSurfaceClient { }*)arg1 mappedAddress:(void*)arg2 mappedSize:(unsigned long long)arg3 extraData:(id)arg4;
- (id)mergeExtraData:(id)arg1;
- (bool)removeClientReferenceToSurface;
- (void)setGlobalState:(id)arg1;
- (struct __IOSurfaceClient { }*)surface;

@end
