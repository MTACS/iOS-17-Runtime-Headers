
@interface DSP_HostCallbacks : NSObject <HAL_DSP_HostCallbacks> {
    struct function<void (const DSP_Host_Types::MutationRequestConfiguration &)>="__f_"{__value_func<void (const DSP_Host_Types::MutationRequestConfiguration &)>="__buf_"{type="__lx"[24C] {}  _mutationRequestListener;
    struct DSP_Host_IOProcessor { int (**x1)(); } * _owner;
    struct function<void (const AudioObjectPropertyAddress &)>="__f_"{__value_func<void (const AudioObjectPropertyAddress &)>="__buf_"{type="__lx"[24C] {}  _propertyChangeListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct function<void (const DSP_Host_Types::MutationRequestConfiguration &)>={__value_func<void (const DSP_Host_Types::MutationRequestConfiguration &)>={type=[24C] {} mutationRequestListener;
@property (nonatomic) struct DSP_Host_IOProcessor { int (**x1)(); }*owner;
@property (nonatomic) struct function<void (const AudioObjectPropertyAddress &)>={__value_func<void (const AudioObjectPropertyAddress &)>={type=[24C] {} propertyChangeListener;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct function<void (const DSP_Host_Types::MutationRequestConfiguration &)>={__value_func<void (const DSP_Host_Types::MutationRequestConfiguration &)>={type=[24C] {})mutationRequestListener;
- (void)notifyClientsOfCustomPropertyChange:(struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; })arg1;
- (struct DSP_Host_IOProcessor { int (**x1)(); }*)owner;
- (struct function<void (const AudioObjectPropertyAddress &)>={__value_func<void (const AudioObjectPropertyAddress &)>={type=[24C] {})propertyChangeListener;
- (void)requestMutation:(id)arg1;
- (void)setMutationRequestListener:(struct function<void (const DSP_Host_Types::MutationRequestConfiguration &)>={__value_func<void (const DSP_Host_Types::MutationRequestConfiguration &)>={type=[24C] {})arg1;
- (void)setOwner:(struct DSP_Host_IOProcessor { int (**x1)(); }*)arg1;
- (void)setPropertyChangeListener:(struct function<void (const AudioObjectPropertyAddress &)>={__value_func<void (const AudioObjectPropertyAddress &)>={type=[24C] {})arg1;

@end
