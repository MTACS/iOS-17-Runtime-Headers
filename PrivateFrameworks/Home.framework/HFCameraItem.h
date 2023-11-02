
@interface HFCameraItem : HFAccessoryProfileItem <HFCompoundItemProtocol, HUServiceContainerItem>

@property (nonatomic, readonly) NSArray *allHomeKitObjects;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (nonatomic, readonly) bool isCompoundItem;
@property (nonatomic, readonly) unsigned long long numberOfCompoundItems;
@property (nonatomic, readonly) <HFHomeKitObject> *primaryHomeKitObject;
@property (nonatomic, readonly) HMCameraProfile *profile;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (bool)cameraContainsMotionServiceItem:(id)arg1;
+ (void)getErrorDescription:(out id*)arg1 detailedErrorDescription:(out id*)arg2 forCameraStreamError:(id)arg3;
+ (bool)shouldIgnoreStreamErrorForCameraSettings:(id)arg1;
+ (bool)shouldReportNotificationsAsDisabledForProfile:(id)arg1;

- (id)_subclass_updateWithOptions:(id)arg1;
- (id)description;
- (bool)isCompoundItem;
- (unsigned long long)numberOfCompoundItems;
- (id)primaryHomeKitObject;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

- (id)hu_containedAccessories;
- (id)hu_containedServices;

@end
