
@interface HMDBulletinCategory : HMFObject

+ (id)_enumerationValueLocalizationKeys;
+ (id)_localizedStateForValue:(id)arg1 characteristicType:(id)arg2;
+ (id)_presentationTypeForType:(id)arg1;
+ (id)_secureStateMap;
+ (id)_sensorMap;
+ (id)bulletinReasonForChangedCharacteristic:(id)arg1;
+ (id)composedNameForCharacteristic:(id)arg1;
+ (bool)isSecureServiceType:(id)arg1;
+ (bool)isSensorDetectedCharacteristic:(id)arg1;
+ (id)localizedActionForCharacteristic:(id)arg1;
+ (id)localizedStateForCharacteristic:(id)arg1;
+ (id)localizedStringForItems:(id)arg1;
+ (id)presentationValueForValue:(id)arg1 type:(id)arg2;
+ (id)targetCurrentCharacteristicTypeMap;
+ (id)trimLeadingAndTailingDotInName:(id)arg1;
+ (id)trimLeadingAndTailingSpacesInName:(id)arg1;

@end
