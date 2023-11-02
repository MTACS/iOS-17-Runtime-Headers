
@protocol DNDSAppSpecificSettingsType <NSObject>

@required

+ (NSString *)appSpecificSettingsEntity;
+ (NSObject<DNDSAppSpecificSettings> *)appSpecificSettingsForManagedObject:(DNDPerModeSettingsMO *)arg1;
+ (void)completeManagedObject:(inout DNDPerModeSettingsMO *)arg1 forAppSpecificSettings:(NSObject<DNDSAppSpecificSettings> *)arg2;

@optional

+ (NSObject<DNDSAppSpecificSettings> *)appSpecificSettingsFromDictionaryRepresentation:(NSDictionary *)arg1;
+ (NSDictionary *)dictionaryRepresentationForAppSpecificSettings:(NSObject<DNDSAppSpecificSettings> *)arg1;

@end
