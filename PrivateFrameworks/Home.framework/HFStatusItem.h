
@interface HFStatusItem : HFItem <NSCopying> {
    HMHome * _home;
    NSDate * _invalidationDate;
    bool  _needsInvalidation;
    HMRoom * _room;
    HFStatusItemUpdate * _statusItemUpdate;
    <HFCharacteristicValueSource> * _valueSource;
}

@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, retain) NSDate *invalidationDate;
@property (nonatomic) bool needsInvalidation;
@property (nonatomic, readonly) HMRoom *room;
@property (nonatomic, retain) HFStatusItemUpdate *statusItemUpdate;
@property (nonatomic, readonly) bool supportsInvalidation;
@property (nonatomic, readonly) <HFCharacteristicValueSource> *valueSource;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)_associatedServiceTypeToServiceTypeMap;
+ (id)_criticalServiceTypes;
+ (id)_serviceTypeToAssociatedServiceTypesMap;
+ (id)characteristicTypesForServiceType:(id)arg1 includingAssociatedTypes:(bool)arg2;

- (void).cxx_destruct;
- (id)_filteredServicesOfTypes:(id)arg1 containingCharacteristicTypes:(id)arg2;
- (bool)_shouldForceVisibleForService:(id)arg1;
- (void)_updateInvalidationDate;
- (bool)canRepresentAbnormalAndNormalHomeKitObjectsTogether;
- (bool)canScheduleInvalidation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultTitleForRepresentedHomeKitObjects:(id)arg1;
- (id)displayNameForHomeKitObject:(id)arg1;
- (id)filteredServices;
- (id)filteredServicesOfTypes:(id)arg1;
- (id)filteredServicesOfTypes:(id)arg1 containingCharacteristicTypes:(id)arg2;
- (id)home;
- (id)iconDescriptorForRepresentedHomeKitObjects:(id)arg1;
- (id)init;
- (id)initWithHome:(id)arg1 room:(id)arg2;
- (id)initWithHome:(id)arg1 room:(id)arg2 valueSource:(id)arg3;
- (id)invalidationDate;
- (double)invalidationTimeout;
- (bool)isInvalidationPending;
- (bool)isTransitioning;
- (id)itemUpdateFromLatestResults;
- (bool)needsInvalidation;
- (id)room;
- (void)scheduleInvalidation;
- (void)setInvalidationDate:(id)arg1;
- (void)setNeedsInvalidation:(bool)arg1;
- (void)setStatusItemUpdate:(id)arg1;
- (id)shortTitleForFormat:(id)arg1;
- (id)standardResultsForBatchReadResponse:(id)arg1 serviceTypes:(id)arg2;
- (id)statusItemUpdate;
- (bool)supportsInvalidation;
- (id)valueSource;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

+ (id)hu_homeMenuStatusItemClasses;

@end
