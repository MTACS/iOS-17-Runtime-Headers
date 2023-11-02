
@interface HFAccessoryTypeGroup : NSObject <HFAccessoryRepresentableObjectFiltering, HUTintColorProviding> {
    NSString * __fullName;
    NSString * _name;
    NSSet * _types;
    NSUUID * _uniqueIdentifier;
}

@property (nonatomic, retain) NSString *_fullName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *fullName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIColor *hu_tintColor;
@property (nonatomic, readonly) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSSet *types;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)accessoryTypeGroupWithIdentifier:(id)arg1;
+ (id)climateAccessoryTypeGroup;
+ (id)energyAccessoryTypeGroup;
+ (id)hiddenFromScenesAndAutomationsAccessoryTypeGroup;
+ (id)lightAccessoryTypeGroup;
+ (id)mediaAccessoryTypeGroup;
+ (id)otherAccessoryTypeGroup;
+ (id)outletAccessoryTypeGroup;
+ (id)securityAccessoryTypeGroup;
+ (id)sensorAccessoryTypeGroup;
+ (id)switchAccessoryTypeGroup;
+ (id)unionGroups:(id)arg1;
+ (void)warmUp;
+ (id)waterAccessoryTypeGroup;

- (void).cxx_destruct;
- (id)_fullName;
- (id)_initWithIdentifier:(id)arg1 name:(id)arg2 set:(id)arg3;
- (id)_initWithIdentifierString:(id)arg1 name:(id)arg2 accessoryTypes:(id)arg3;
- (id)_initWithName:(id)arg1 set:(id)arg2;
- (bool)containsType:(id)arg1;
- (id)debugDescription;
- (id)filterAccessoryRepresentableObjects:(id)arg1;
- (id)fullName;
- (id)groupByIntersectingGroup:(id)arg1;
- (id)groupBySubtractingGroup:(id)arg1;
- (id)groupByUnioningGroup:(id)arg1;
- (id)initWithAccessoryTypes:(id)arg1;
- (id)initWithName:(id)arg1 accessoryTypes:(id)arg2;
- (bool)intersectsGroup:(id)arg1;
- (id)name;
- (void)set_fullName:(id)arg1;
- (id)types;
- (id)uniqueIdentifier;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

- (id)hu_tintColor;

@end
