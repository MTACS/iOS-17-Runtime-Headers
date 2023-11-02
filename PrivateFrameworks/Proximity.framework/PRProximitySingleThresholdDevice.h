
@interface PRProximitySingleThresholdDevice : NSObject <PRProximityDeviceProtocol> {
    struct unique_ptr<SingleThresholdProx::Estimator, std::default_delete<SingleThresholdProx::Estimator>> { 
        struct __compressed_pair<SingleThresholdProx::Estimator *, std::default_delete<SingleThresholdProx::Estimator>> { 
            struct Estimator {} *__value_; 
        } __ptr_; 
    }  _estimator;
    NSObject<OS_os_log> * _logger;
    NSString * _model;
    double  _mostRecentSampleTime;
    NSUUID * _peer;
    long long  _proximity;
    long long  _sampleCount;
    struct deque<BtProxData, std::allocator<BtProxData>> { 
        struct __split_buffer<BtProxData *, std::allocator<BtProxData *>> { 
            struct BtProxData {} **__first_; 
            struct BtProxData {} **__begin_; 
            struct BtProxData {} **__end_; 
            struct __compressed_pair<BtProxData **, std::allocator<BtProxData *>> { 
                struct BtProxData {} **__value_; 
            } __end_cap_; 
        } __map_; 
        unsigned long long __start_; 
        struct __compressed_pair<unsigned long, std::allocator<BtProxData>> { 
            unsigned long long __value_; 
        } __size_; 
    }  _samples;
}

@property (readonly) NSUUID *peer;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addSample:(struct BtProxData { double x1; double x2; unsigned int x3; })arg1;
- (long long)deviceProximity;
- (id)init;
- (id)initWithPeer:(id)arg1 andPeerModel:(id)arg2 withError:(id*)arg3;
- (id)peer;
- (bool)proxReady;

@end
