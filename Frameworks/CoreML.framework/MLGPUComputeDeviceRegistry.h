
@interface MLGPUComputeDeviceRegistry : NSObject <MLComputeDeviceRegistryProtocol> {
    NSMutableDictionary * _availableGPUDevices;
    MLMetalDeviceObserver * _metalDeviceObserver;
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _mutex;
    <NSObject> * _observationToken;
    NSMutableArray * _pendingChanges;
}

@property (nonatomic, readonly, copy) NSMutableDictionary *availableGPUDevices;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MLMetalDeviceObserver *metalDeviceObserver;
@property (nonatomic, retain) <NSObject> *observationToken;
@property (nonatomic, readonly, copy) NSMutableArray *pendingChanges;
@property (nonatomic, readonly, copy) NSArray *registeredAndAccessibleComputeDevices;
@property (nonatomic, readonly, copy) NSArray *registeredComputeDevices;
@property (readonly) Class superclass;

+ (id)registryWithMetalDeviceObserver:(id)arg1;
+ (id)sharedRegistry;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)availableGPUDevices;
- (void)dealloc;
- (id)initWithMetalDeviceObserver:(id)arg1;
- (id)metalDeviceObserver;
- (id)observationToken;
- (id)pendingChanges;
- (void)registerGPUDevices;
- (id)registeredAndAccessibleComputeDevices;
- (id)registeredComputeDevices;
- (void)setObservationToken:(id)arg1;

@end
