
@interface MLNeuralEngineComputeDevice : NSObject <MLComputeDeviceProtocol> {
    long long  _totalCoreCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long totalCoreCount;

// Image: /System/Library/Frameworks/CoreML.framework/CoreML

+ (id)physicalDevice;

- (id)description;
- (id)initWithTotalCoreCount:(long long)arg1;
- (bool)isAccessible;
- (long long)totalCoreCount;

// Image: /System/Library/Frameworks/Vision.framework/Vision

- (long long)VNComputeDevicePerformanceScore;
- (unsigned long long)VNComputeDeviceType;

// Image: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition

- (unsigned long long)_crComputeDeviceType;

@end
