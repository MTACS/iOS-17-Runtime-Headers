
@interface HMAccessoryCollectionSettingItem : NSObject <HFStateDumpBuildable, NSCopying, NSSecureCoding> {
    NSUUID * _identifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSData * _serializedValue;
    HMAccessoryCollectionSetting * _setting;
    <NSObject><NSCopying><NSSecureCoding> * _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *identifier;
@property (readonly) NSData *serializedValue;
@property HMAccessoryCollectionSetting *setting;
@property (readonly) Class superclass;
@property (readonly, copy) <NSObject><NSCopying><NSSecureCoding> *value;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (bool)requiresCustomItemValueClassesToDecodeForKeyPath:(id)arg1;
+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 value:(id)arg2;
- (id)initWithValue:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)serializedValue;
- (void)setSetting:(id)arg1;
- (id)setting;
- (id)shortDescription;
- (bool)shouldBlockValueDecode;
- (id)value;

// Image: /System/Library/PrivateFrameworks/CoordinationCore.framework/CoordinationCore

+ (id)co_accessoryCollectionSettingItemWithAlarm:(id)arg1;

- (id)_co_alarm;
- (id)co_alarm;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)hf_alarmItemsMatchingAlarmId:(id)arg1 withinItemArray:(id)arg2;
+ (id)hf_collectionSettingItemForAlarm:(id)arg1;

- (id)hf_stateDumpBuilderWithContext:(id)arg1;

@end
