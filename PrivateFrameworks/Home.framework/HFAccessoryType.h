
@interface HFAccessoryType : NSObject <HFAccessoryRepresentableObjectFiltering, HUTintColorProviding, NAIdentifiable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIColor *hu_tintColor;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)categoryType:(id)arg1;
+ (id)categoryTypeWithCategory:(id)arg1;
+ (id)mediaSystemType;
+ (id)na_identity;
+ (id)serviceType:(id)arg1;
+ (id)serviceType:(id)arg1 subtype:(id)arg2;
+ (id)serviceTypeWithService:(id)arg1;

- (id)_init;
- (id)filterAccessoryRepresentableObjects:(id)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

- (id)hu_tintColor;

@end
