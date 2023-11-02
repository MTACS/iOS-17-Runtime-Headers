
@interface HMDMediaAccessoryBrowseOperation : HMFOperation <HMFLogging> {
    NSString * _accessoryIdentifier;
    HMDMediaEndpoint * _endpoint;
    unsigned int  _endpointFeatures;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSArray * _outputDevices;
    void * _session;
}

@property (readonly, copy) NSString *accessoryIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMDMediaEndpoint *endpoint;
@property unsigned int endpointFeatures;
@property (readonly) unsigned long long hash;
@property (readonly) NSArray *outputDevices;
@property (readonly) Class superclass;

+ (double)defaultTimeout;
+ (id)logCategory;

- (void).cxx_destruct;
- (id)accessoryIdentifier;
- (void)cancel;
- (void)dealloc;
- (id)endpoint;
- (unsigned int)endpointFeatures;
- (id)initWithAccessoryIdentifier:(id)arg1;
- (id)initWithAccessoryIdentifier:(id)arg1 timeout:(double)arg2;
- (void)main;
- (id)outputDevices;
- (void)setEndpointFeatures:(unsigned int)arg1;

@end
