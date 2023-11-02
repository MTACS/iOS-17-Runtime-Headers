
@interface HFActionBuilder : HFItemBuilder <HFComparable>

@property (nonatomic, readonly) HMAction *action;
@property (getter=isAffectedByEndEvents, nonatomic, readonly) bool affectedByEndEvents;
@property (nonatomic, readonly) NSArray *containedAccessoryRepresentables;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool requiresDeviceUnlock;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)actionBuilderForAction:(id)arg1 inHome:(id)arg2;
+ (Class)homeKitRepresentationClass;

- (id)action;
- (id)asGeneric;
- (bool)canUpdateWithActionBuilder:(id)arg1;
- (id)compareToObject:(id)arg1;
- (id)containedAccessoryRepresentables;
- (id)copyForCreatingNewAction;
- (id)createNewAction;
- (id)debugDescription;
- (id)getOrCreateAction;
- (bool)hasSameTargetAsAction:(id)arg1;
- (bool)hasSameTargetAsActionBuilder:(id)arg1;
- (unsigned long long)hash;
- (bool)isAffectedByEndEvents;
- (bool)isEquivalentToAction:(id)arg1;
- (id)performValidation;
- (bool)requiresDeviceUnlock;
- (void)setAction:(id)arg1;
- (bool)updateWithActionBuilder:(id)arg1;
- (id)validationError;

// Image: /System/Library/PrivateFrameworks/HomeRecommendationEngine.framework/HomeRecommendationEngine

+ (id)hre_sortActionBuilders:(id)arg1;

- (id)recommendableObjectsInvolved;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

- (id)filteredToAccessoriesShownInStatus;

@end
