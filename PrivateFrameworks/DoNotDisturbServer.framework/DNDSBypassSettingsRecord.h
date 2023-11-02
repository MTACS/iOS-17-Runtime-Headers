
@interface DNDSBypassSettingsRecord : NSObject <DNDSBackingStoreRecord, NSCopying, NSMutableCopying> {
    NSString * _immediateBypassCNGroupIdentifier;
    NSNumber * _immediateBypassEventSourceType;
    NSNumber * _repeatEventSourceBehaviorEnabledSetting;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *immediateBypassCNGroupIdentifier;
@property (nonatomic, readonly, copy) NSNumber *immediateBypassEventSourceType;
@property (nonatomic, readonly, copy) NSNumber *repeatEventSourceBehaviorEnabledSetting;
@property (readonly) Class superclass;

+ (id)_recordWithEncodedInfo:(id)arg1 error:(id*)arg2;
+ (id)migrateDictionaryRepresentation:(id)arg1 fromVersionNumber:(unsigned long long)arg2 toVersionNumber:(unsigned long long)arg3;
+ (id)newWithDictionaryRepresentation:(id)arg1 context:(id)arg2;
+ (id)recordForLegacyPrivilegedSenderType:(unsigned long long)arg1 legacyAddressBookID:(int)arg2;

- (void).cxx_destruct;
- (id)_initWithImmediateBypassEventSourceType:(id)arg1 immediateBypassCNGroupIdentifier:(id)arg2 repeatEventSourceBehaviorEnabledSetting:(id)arg3;
- (id)_initWithRecord:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentationWithContext:(id)arg1;
- (unsigned long long)hash;
- (id)immediateBypassCNGroupIdentifier;
- (id)immediateBypassEventSourceType;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)legacyPrivilegedSenderType;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)repeatEventSourceBehaviorEnabledSetting;

@end
