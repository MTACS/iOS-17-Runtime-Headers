
@interface DNDSModeConfigurationsRecord : NSObject <DNDSPartitionedBackingStoreRecord, NSCopying, NSMutableCopying> {
    NSMutableDictionary * _modeConfigurationsByModeIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *modeConfigurations;
@property (readonly) Class superclass;

+ (id)backingStoreWithFileURL:(id)arg1 secureFileURL:(id)arg2;
+ (id)migrateDictionaryRepresentation:(id)arg1 fromVersionNumber:(unsigned long long)arg2 toVersionNumber:(unsigned long long)arg3;
+ (id)newWithDictionaryRepresentation:(id)arg1 context:(id)arg2;
+ (id)newWithDictionaryRepresentation:(id)arg1 partitionedDictionaryRepresentation:(id)arg2 context:(id)arg3;

- (void).cxx_destruct;
- (id)_initWithModeConfigurations:(id)arg1;
- (id)_initWithRecord:(id)arg1;
- (id)configurationForModeIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentationWithContext:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)log:(id)arg1 withMessage:(id)arg2;
- (id)modeConfigurationForModeIdentifier:(id)arg1;
- (id)modeConfigurations;
- (id)modeForModeIdentifier:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)triggersForModeIdentifier:(id)arg1;

@end
