
@interface _AFAudioPowerXPCSharedMemory : NSObject {
    unsigned long long  _mappedLength;
    void * _sharedRegion;
    NSObject<OS_xpc_object> * _xpcObject;
}

@property (nonatomic, readonly) float averagePower;
@property (nonatomic, readonly) float peakPower;

- (void).cxx_destruct;
- (void)_destroyMapping;
- (float)averagePower;
- (void)dealloc;
- (id)initWithXPCObject:(id)arg1;
- (float)peakPower;

@end
