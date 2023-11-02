
@interface DNDSAppSpecificSettingsTypeSystemAction : NSObject <DNDSAppSpecificSettingsType>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)appSpecificSettingsClass;
+ (id)appSpecificSettingsEntity;
+ (id)appSpecificSettingsForManagedObject:(id)arg1;
+ (void)completeManagedObject:(inout id)arg1 forAppSpecificSettings:(id)arg2;

@end
