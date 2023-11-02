
@interface HMDBulletinNotificationRegistrationUtilities : HMFObject

+ (id)accessoryRegistrationFromLocalRegistration:(id)arg1;
+ (id)accessoryRegistrationFromMKFRegistration:(id)arg1;
+ (id)adjustedOffsetFromMKFLocalElementTimePeriodSunriseSunSet:(id)arg1;
+ (id)audioAnalysisNotificationRegistrationFromRemoteRegistration:(id)arg1;
+ (id)cameraAccessModeRegistrationFromLocalRegistration:(id)arg1;
+ (id)cameraAccessModeRegistrationFromMKFRegistration:(id)arg1;
+ (id)cameraReachabilityRegistrationFromLocalRegistration:(id)arg1;
+ (id)cameraReachabilityRegistrationFromMKFRegistration:(id)arg1;
+ (id)cameraSignificantEventRegistrationFromLocalRegistration:(id)arg1;
+ (id)cameraSignificantEventRegistrationFromMKFRegistration:(id)arg1;
+ (id)conditionsFromLocalConditions:(id)arg1;
+ (id)conditionsFromMKFConditions:(id)arg1;
+ (id)createAndAddLocalConditionsToRegistration:(id)arg1 moc:(id)arg2 conditions:(id)arg3;
+ (id)createAndAddLocalPresenceConditionToRegistration:(id)arg1 moc:(id)arg2 condition:(id)arg3;
+ (id)createAndAddLocalTimePeriodConditionToRegistration:(id)arg1 moc:(id)arg2 condition:(id)arg3;
+ (id)createLocalElementFromSunriseSunset:(id)arg1 moc:(id)arg2;
+ (id)createLocalElementFromTimeOfDay:(id)arg1 moc:(id)arg2;
+ (id)presenceConditionFromLocalCondition:(id)arg1;
+ (id)serviceRegistrationFromLocalRegistration:(id)arg1;
+ (id)timePeriodConditionFromLocalCondition:(id)arg1;

@end
