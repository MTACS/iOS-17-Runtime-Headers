
@interface HKSPAlarmConfiguration : NSObject <BSDescriptionProviding, HKSPDictionarySerializable, HKSPObject, NAEquatable, NAHashable, NSMutableCopying> {
    bool  _allowsSnooze;
    bool  _enabled;
    unsigned long long  _playOptions;
    NSNumber * _soundVolume;
    NSString * _toneIdentifier;
    unsigned long long  _version;
    NSString * _vibrationIdentifier;
}

@property (nonatomic, readonly) bool allowsSnooze;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSDate *lastModifiedDate;
@property (nonatomic, readonly) unsigned long long playOptions;
@property (nonatomic, readonly, copy) NSNumber *soundVolume;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *toneIdentifier;
@property (nonatomic, readonly) unsigned long long version;
@property (nonatomic, readonly, copy) NSString *vibrationIdentifier;

+ (id)allProperties;
+ (id)propertiesForEquivalence;
+ (id)significantProperties;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_migrateForCoder:(id)arg1;
- (bool)_needsMigrationForCoder:(id)arg1;
- (bool)allowsSnooze;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initFromObject:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalentTo:(id)arg1;
- (id)mutableCopy;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)playOptions;
- (id)soundVolume;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)toneIdentifier;
- (unsigned long long)version;
- (id)vibrationIdentifier;

@end
