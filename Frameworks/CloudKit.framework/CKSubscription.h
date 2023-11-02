
@interface CKSubscription : NSObject <HMBModelObjectStorage, NSCopying, NSSecureCoding> {
    CKNotificationInfo * _notificationInfo;
    NSString * _recordType;
    NSString * _subscriptionID;
    long long  _subscriptionType;
    CKRecordZoneID * _zoneID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) CKNotificationInfo *notificationInfo;
@property (copy) NSString *recordType;
@property (readonly, copy) NSString *subscriptionID;
@property (readonly) long long subscriptionType;
@property (readonly) Class superclass;
@property (nonatomic, copy) CKRecordZoneID *zoneID;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithSubscriptionID:(id)arg1 subscriptionType:(long long)arg2 recordType:(id)arg3 zoneID:(id)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordType:(id)arg1 predicate:(id)arg2 options:(unsigned long long)arg3;
- (id)initWithRecordType:(id)arg1 predicate:(id)arg2 subscriptionID:(id)arg3 options:(unsigned long long)arg4;
- (id)initWithZoneID:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithZoneID:(id)arg1 subscriptionID:(id)arg2 options:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (id)notificationInfo;
- (id)predicate;
- (id)recordType;
- (void)setNotificationInfo:(id)arg1;
- (void)setRecordType:(id)arg1;
- (void)setSubscriptionID_modelMutation:(id)arg1;
- (void)setZoneID:(id)arg1;
- (id)subscriptionID;
- (unsigned long long)subscriptionOptions;
- (long long)subscriptionType;
- (id)zoneID;

// Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore

+ (id)hmbDecodeData:(id)arg1 fromStorageLocation:(unsigned long long)arg2 error:(id*)arg3;

- (id)hmbEncodeForStorageLocation:(unsigned long long)arg1 error:(id*)arg2;

@end
