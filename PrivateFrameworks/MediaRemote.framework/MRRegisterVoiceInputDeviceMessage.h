
@interface MRRegisterVoiceInputDeviceMessage : MRProtocolMessage {
    MRVirtualVoiceInputDeviceDescriptor * _descriptor;
}

@property (nonatomic, readonly) MRVirtualVoiceInputDeviceDescriptor *descriptor;

- (void).cxx_destruct;
- (id)descriptor;
- (id)initWithDescriptor:(id)arg1;
- (unsigned long long)type;

@end
