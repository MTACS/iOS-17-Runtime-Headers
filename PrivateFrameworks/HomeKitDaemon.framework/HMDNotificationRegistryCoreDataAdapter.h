
@interface HMDNotificationRegistryCoreDataAdapter : HMFObject <HMFLogging> {
    HMDHome * _home;
}

@property (readonly, copy) NSSet *characteristicRegistrations;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMDHome *home;
@property (readonly) NSSet *mediaRegistrations;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (bool)_deleteAllCharacteristicRegistrationsWithContext:(id)arg1;
- (bool)_deleteAllMKFRegistrationsForMediaProfileUUID:(id)arg1 withMediaProperty:(id)arg2 hmcContext:(id)arg3;
- (bool)_deleteAllRegistrationsForCharacteristicIIDs:(id)arg1 withAccessoryUUID:(id)arg2 hmcContext:(id)arg3;
- (bool)_deleteAllRegistrationsWithEntityName:(id)arg1 withHomeKeypath:(id)arg2 hmcContext:(id)arg3;
- (bool)_disableRegistration:(id)arg1;
- (bool)_enableRegistration:(id)arg1;
- (id)_fetchEnabledMKFRegistrationsForHMDCharacteristics:(id)arg1 context:(id)arg2;
- (id)_fetchEnabledMKFRegistrationsForMediaProfileUUID:(id)arg1 withMediaProperty:(id)arg2 context:(id)arg3;
- (id)_fetchMKFCharacteristicsFromHMDCharacteristics:(id)arg1 context:(id)arg2;
- (id)_fetchMKFHAPAccessoryWithUUID:(id)arg1 context:(id)arg2;
- (id)_fetchMKFRegistrationsWithUserUUID:(id)arg1 withCharacteristicIIDs:(id)arg2 withAccessoryUUID:(id)arg3 withDeviceIdsDestination:(id)arg4 withPrefetchPaths:(id)arg5 context:(id)arg6;
- (id)_fetchMKFRegistrationsWithUserUUID:(id)arg1 withCharacteristicIIDs:(id)arg2 withAccessoryUUIDs:(id)arg3 withDeviceIdsDestination:(id)arg4 withPrefetchPaths:(id)arg5 context:(id)arg6;
- (id)_fetchMKFRegistrationsWithUserUUID:(id)arg1 withMediaProfileUUID:(id)arg2 withMediaPropertyIn:(id)arg3 withDeviceIdsDestination:(id)arg4 withAccessoryUUID:(id)arg5 withPrefetchPaths:(id)arg6 context:(id)arg7;
- (id)_fetchMKFUserAndRegistrationsWithUserUUID:(id)arg1 withCharacteristicIIDs:(id)arg2 withAccessoryUUID:(id)arg3 withDeviceIdsDestination:(id)arg4 withPrefetchPaths:(id)arg5 outUser:(id*)arg6 context:(id)arg7;
- (id)_fetchMKFUserAndRegistrationsWithUserUUID:(id)arg1 withCharacteristicIIDs:(id)arg2 withAccessoryUUIDs:(id)arg3 withDeviceIdsDestination:(id)arg4 withPrefetchPaths:(id)arg5 outUser:(id*)arg6 context:(id)arg7;
- (id)_fetchMKFUserAndRegistrationsWithUserUUID:(id)arg1 withMediaProfileUUID:(id)arg2 withMediaPropertyIn:(id)arg3 withDeviceIdsDestination:(id)arg4 withAccessoryUUID:(id)arg5 withPrefetchPaths:(id)arg6 outUser:(id*)arg7 context:(id)arg8;
- (id)_fetchMKFUserWithUUID:(id)arg1 context:(id)arg2;
- (id)_fetchRequestForAllCharacteristicRegistrations;
- (id)_fetchRequestForAllMediaProfileRegistrations;
- (id)_fetchRequestForCharacteristicRegistrationsWithoutAllowedDestinations:(id)arg1;
- (id)_fetchRequestForMediaProfileRegistrationsWithoutAllowedDestinations:(id)arg1;
- (bool)_insertNotificationRegistrationForCharacteristic:(id)arg1 deviceIdsDestination:(id)arg2 user:(id)arg3 mkfCharacteristic:(id)arg4 context:(id)arg5;
- (bool)_insertNotificationRegistrationForMediaProperty:(id)arg1 mediaProfile:(id)arg2 deviceIdsDestination:(id)arg3 user:(id)arg4 accessory:(id)arg5 context:(id)arg6;
- (id)_processDisableCharacteristicsRequest:(id)arg1 registrationsForAccessory:(id)arg2 context:(id)arg3;
- (id)_processEnableCharacteristicsRequest:(id)arg1 mkfUser:(id)arg2 registrationsForAccessory:(id)arg3 context:(id)arg4;
- (id)_processGroupedCharacteristicsRequests:(id)arg1 user:(id)arg2 destination:(id)arg3 context:(id)arg4;
- (id)_requestToFetchMKFRegistrationsWithMediaProfileUUID:(id)arg1 withMediaProperty:(id)arg2 context:(id)arg3;
- (id)characteristicRegistrations;
- (id)destinationsToNotifyForCharacteristic:(id)arg1;
- (id)destinationsToNotifyForMediaPropertyResponse:(id)arg1;
- (void)disableAllCharacteristicRegistrations;
- (id)disableAllMediaProfileRegistrations;
- (id)disableNotificationForCharacteristics:(id)arg1 user:(id)arg2 deviceIdsDestination:(id)arg3;
- (bool)disableNotificationForMediaProfile:(id)arg1 mediaProperties:(id)arg2 user:(id)arg3 deviceIdsDestination:(id)arg4;
- (bool)enableNotificationForMediaProfile:(id)arg1 mediaProperties:(id)arg2 user:(id)arg3 deviceIdsDestination:(id)arg4;
- (bool)enableNotificationsForCharacteristics:(id)arg1 user:(id)arg2 deviceIdsDestination:(id)arg3;
- (id)home;
- (id)initWithHome:(id)arg1;
- (id)mediaPropertiesRegisteredForMediaProfileUniqueIdentifier:(id)arg1;
- (id)mediaRegistrations;
- (id)processCharacteristicsRequests:(id)arg1;
- (void)removeAllCharacteristicRegistrations;
- (id)removeAllMediaProfileRegistrations;
- (id)removeCharacteristicRegistrationsWithoutAllowedDestinations:(id)arg1;
- (id)removeMediaRegistrationsWithoutAllowedDestinations:(id)arg1;
- (void)removeRegistrationsForCharacteristics:(id)arg1;
- (bool)removeRegistrationsForMediaProfile:(id)arg1;
- (id)shortDescription;

@end
