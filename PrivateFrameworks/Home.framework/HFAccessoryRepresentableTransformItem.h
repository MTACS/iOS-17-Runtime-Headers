
@interface HFAccessoryRepresentableTransformItem : HFTransformItem <HFAccessoryRepresentableItem, HUTintColorProviding>

@property (nonatomic, readonly) <HFAccessoryRepresentable> *accessoryRepresentableObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (nonatomic, readonly) UIColor *hu_tintColor;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)itemWithAccessoryRepresentableObject:(id)arg1 valueSource:(id)arg2;

- (id)accessoryRepresentableObject;
- (id)homeKitObject;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

- (id)hu_tintColor;

@end
