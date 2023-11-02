
@interface DNDSAppSpecificSettingsTypeAppConfigurationPredicate : NSObject <DNDSAppSpecificSettingsType>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)appSpecificSettingsClass;
+ (Class)appSpecificSettingsEncodedClass;
+ (id)appSpecificSettingsEntity;
+ (id)appSpecificSettingsForManagedObject:(id)arg1;
+ (id)appSpecificSettingsFromDictionaryRepresentation:(id)arg1;
+ (void)completeManagedObject:(inout id)arg1 forAppSpecificSettings:(id)arg2;
+ (id)dictionaryRepresentationForAppSpecificSettings:(id)arg1;

@end
