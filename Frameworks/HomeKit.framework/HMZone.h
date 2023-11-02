
@interface HMZone : NSObject <HFHomeKitObject, HFStateDumpBuildable, HMObjectMerge, NSSecureCoding> {
    NSString * _assistantIdentifier;
    _HMContext * _context;
    HMMutableArray * _currentRooms;
    HMHome * _home;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _name;
    NSUUID * _uniqueIdentifier;
    NSUUID * _uuid;
}

@property (nonatomic, copy) NSString *assistantIdentifier;
@property (nonatomic, retain) _HMContext *context;
@property (nonatomic, retain) HMMutableArray *currentRooms;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *hmu_accessories;
@property (nonatomic, readonly) NSArray *hmu_homePods;
@property (nonatomic) HMHome *home;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSArray *rooms;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly) NSUUID *uuid;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)__configureWithContext:(id)arg1 home:(id)arg2;
- (void)_addRoom:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_recomputeAssistantIdentifier;
- (void)_removeRoom:(id)arg1;
- (void)_removeRoom:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_unconfigure;
- (void)_unconfigureContext;
- (void)_updateName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)addRoom:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)assistantIdentifier;
- (id)context;
- (id)currentRooms;
- (void)encodeWithCoder:(id)arg1;
- (id)home;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 uuid:(id)arg2;
- (bool)mergeFromNewObject:(id)arg1;
- (id)name;
- (void)recomputeAssistantIdentifier;
- (void)removeRoom:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)roomWithUUID:(id)arg1;
- (id)rooms;
- (void)setAssistantIdentifier:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setCurrentRooms:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setName:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)uniqueIdentifier;
- (void)updateName:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)uuid;

// Image: /System/Library/PrivateFrameworks/AnnounceDaemon.framework/AnnounceDaemon

+ (id)an_zonesWithAnnounceAccessoriesFromZones:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_stateDumpBuilderWithContext:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeMessagingUtils.framework/HomeMessagingUtils

+ (id)hmu_accessoriesInZones:(id)arg1;
+ (id)hmu_roomsInZones:(id)arg1;
+ (id)hmu_roomsInZones:(id)arg1 appendingRooms:(id)arg2;
+ (id)hmu_uniqueIdentifiersFromZones:(id)arg1;
+ (id)hmu_zonesWithAnnounceAccessoriesFromZones:(id)arg1;
+ (id)hmu_zonesWithHomePodsFromZones:(id)arg1;

- (id)hmu_accessories;
- (id)hmu_homePods;

@end
