
@interface HMCameraSnapshot : HMCameraSource <HMFObject> {
    NSDate * _captureDate;
    bool  _didFillSlot;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (nonatomic, readonly, copy) NSDate *captureDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool didFillSlot;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *hf_localizedAge;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)logCategory;
+ (id)shortDescription;

- (void).cxx_destruct;
- (void)_releaseSlotIdentifier;
- (id)attributeDescriptions;
- (id)captureDate;
- (void)dealloc;
- (id)description;
- (bool)didFillSlot;
- (void)fillSlotWithCompletionHandler:(id /* block */)arg1;
- (id)initWithProfileUniqueIdentifier:(id)arg1 slotIdentifier:(id)arg2 aspectRatio:(id)arg3 captureDate:(id)arg4;
- (id)privateDescription;
- (void)setDidFillSlot:(bool)arg1;
- (id)shortDescription;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)hf_localizedAgeForCaptureDate:(id)arg1;

- (id)hf_localizedAge;

@end
