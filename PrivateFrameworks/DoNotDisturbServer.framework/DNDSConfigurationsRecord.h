
@interface DNDSConfigurationsRecord : NSObject <DNDSBackingStoreRecord, NSCopying, NSMutableCopying> {
    NSMutableDictionary * _modeConfigurations;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSDictionary *modeConfigurations;
@property (readonly) Class superclass;

+ (id)migrateDictionaryRepresentation:(id)arg1 fromVersionNumber:(unsigned long long)arg2 toVersionNumber:(unsigned long long)arg3;
+ (id)newWithDictionaryRepresentation:(id)arg1 context:(id)arg2;

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
- (id)modeConfigurations;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end
