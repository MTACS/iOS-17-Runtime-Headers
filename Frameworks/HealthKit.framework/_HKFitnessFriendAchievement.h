
@interface _HKFitnessFriendAchievement : HKSample <ASCloudKitCodable, HDCoding, NSCopying> {
    NSDate * _completedDate;
    NSUUID * _friendUUID;
    NSString * _templateUniqueName;
    NSNumber * _value;
}

@property (nonatomic, readonly) ASCodableCloudKitAchievement *codableAchievement;
@property (nonatomic, retain) NSDate *completedDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSUUID *friendUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *templateUniqueName;
@property (nonatomic, retain) NSNumber *value;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (id)achievementWithTemplateUniqueName:(id)arg1 completedDate:(id)arg2 value:(id)arg3 friendUUID:(id)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)completedDate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)friendUUID;
- (id)initWithCoder:(id)arg1;
- (void)setCompletedDate:(id)arg1;
- (void)setFriendUUID:(id)arg1;
- (void)setTemplateUniqueName:(id)arg1;
- (void)setValue:(id)arg1;
- (id)templateUniqueName;
- (id)value;

// Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing

+ (id)_fitnessFriendAchievementWithCodableAchievement:(id)arg1 friendUUID:(id)arg2;
+ (id)fitnessFriendAchievementWithCodableAchievement:(id)arg1;
+ (id)fitnessFriendAchievementWithCodableAchievement:(id)arg1 friendUUID:(id)arg2;
+ (id)fitnessFriendAchievementWithRecord:(id)arg1 friendUUID:(id)arg2;

- (id)codableAchievement;
- (id)recordWithZoneID:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ActivitySharingDaemonCore.framework/ActivitySharingDaemonCore

- (id)filter_date;
- (id)filter_friendUUID;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;
+ (Class)hd_dataEntityClass;

- (bool)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;

@end
