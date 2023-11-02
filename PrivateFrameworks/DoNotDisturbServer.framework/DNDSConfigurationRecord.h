
@interface DNDSConfigurationRecord : NSObject <DNDSBackingStoreRecord, NSCopying, NSMutableCopying> {
    NSNumber * _applicationConfigurationType;
    NSNumber * _compatibilityVersion;
    NSNumber * _hideApplicationBadges;
    NSNumber * _minimumBreakthroughUrgency;
    NSNumber * _senderConfigurationType;
    NSNumber * _suppressionMode;
    NSNumber * _suppressionType;
}

@property (nonatomic, readonly, copy) NSNumber *applicationConfigurationType;
@property (nonatomic, readonly, copy) NSNumber *compatibilityVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSNumber *hideApplicationBadges;
@property (nonatomic, readonly, copy) NSNumber *minimumBreakthroughUrgency;
@property (nonatomic, readonly, copy) NSNumber *senderConfigurationType;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSNumber *suppressionMode;
@property (nonatomic, readonly, copy) NSNumber *suppressionType;

+ (id)migrateDictionaryRepresentation:(id)arg1 fromVersionNumber:(unsigned long long)arg2 toVersionNumber:(unsigned long long)arg3;
+ (id)newWithDictionaryRepresentation:(id)arg1 context:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithApplicationConfigurationType:(id)arg1 senderConfigurationType:(id)arg2 suppressionType:(id)arg3 suppressionMode:(id)arg4 minimumBreakthroughUrgency:(id)arg5 hideApplicationBadges:(id)arg6 compatibilityVersion:(id)arg7;
- (id)_initWithRecord:(id)arg1;
- (id)applicationConfigurationType;
- (id)compatibilityVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentationWithContext:(id)arg1;
- (unsigned long long)hash;
- (id)hideApplicationBadges;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)minimumBreakthroughUrgency;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)senderConfigurationType;
- (id)suppressionMode;
- (id)suppressionType;

@end
