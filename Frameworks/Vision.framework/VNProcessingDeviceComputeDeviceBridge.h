
@interface VNProcessingDeviceComputeDeviceBridge : NSObject <MLComputeDeviceProtocol> {
    VNProcessingDevice * _processingDevice;
}

@property (readonly) <MLComputeDeviceProtocol> *computeDevice;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) VNProcessingDevice *processingDevice;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)computeDevice;
- (id)description;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithProcessingDevice:(id)arg1;
- (id)processingDevice;

@end
