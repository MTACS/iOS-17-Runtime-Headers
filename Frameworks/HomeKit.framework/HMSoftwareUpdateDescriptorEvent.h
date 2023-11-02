
@interface HMSoftwareUpdateDescriptorEvent : HMEEvent {
    HMSoftwareUpdateDescriptor * _descriptor;
}

@property (readonly) HMSoftwareUpdateDescriptor *descriptor;

- (void).cxx_destruct;
- (id)descriptor;
- (id)encodedData;
- (id)initWithDescriptor:(id)arg1 eventSource:(id)arg2 eventTimestamp:(double)arg3;

@end
