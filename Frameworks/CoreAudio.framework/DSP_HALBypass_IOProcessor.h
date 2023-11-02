
@interface DSP_HALBypass_IOProcessor : NSObject <HAL_DSP_IOProcessor> {
    void * _dspCallbacks;
    <HAL_DSP_HostCallbacks> * _hostCallbacks;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) void*dspCallbacks;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <HAL_DSP_HostCallbacks> *hostCallbacks;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)adaptToConfigurationChange:(id)arg1 withCallbacks:(void*)arg2 error:(id*)arg3;
- (void)dealloc;
- (void*)dspCallbacks;
- (id)getCustomProperty:(struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; })arg1;
- (id)getCustomPropertyList;
- (bool)hasCustomProperty:(struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; })arg1;
- (id)hostCallbacks;
- (id)init;
- (id)negotiateConfigurationChange:(id)arg1 error:(id*)arg2;
- (id)retrieveFormats:(id)arg1 error:(id*)arg2;
- (bool)setCustomProperty:(struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; })arg1 withData:(id)arg2 error:(id*)arg3;
- (void)setDspCallbacks:(void*)arg1;
- (void)setHostCallbacks:(id)arg1;

@end
