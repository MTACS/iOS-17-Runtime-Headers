
@interface MLGPUComputeDevice : NSObject <MLComputeDeviceProtocol> {
    <MTLDevice> * _metalDevice;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <MTLDevice> *metalDevice;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/CoreML.framework/CoreML

+ (id)deviceWithMetalDevice:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithMetalDevice:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)metalDevice;

// Image: /System/Library/Frameworks/Vision.framework/Vision

- (long long)VNComputeDevicePerformanceScore;
- (unsigned long long)VNComputeDeviceType;

// Image: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition

- (unsigned long long)_crComputeDeviceType;

@end
