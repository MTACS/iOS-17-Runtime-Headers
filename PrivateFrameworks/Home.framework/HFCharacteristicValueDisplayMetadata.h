
@interface HFCharacteristicValueDisplayMetadata : NSObject {
    HFCharacteristicValueDisplayError * _error;
    long long  _primaryState;
    long long  _priority;
    HFServiceState * _serviceState;
    NSString * _sortKey;
    NAFuture * _splitAccountFuture;
    long long  _transitioningPrimaryState;
}

@property (nonatomic, retain) HFCharacteristicValueDisplayError *error;
@property (nonatomic) long long primaryState;
@property (nonatomic) long long priority;
@property (nonatomic, retain) HFServiceState *serviceState;
@property (nonatomic, copy) NSString *sortKey;
@property (nonatomic, retain) NAFuture *splitAccountFuture;
@property (nonatomic) long long transitioningPrimaryState;

+ (void)_displayAppleIDSplitErrorForMediaProfile:(id)arg1 havingMetadata:(id)arg2 withContextProvider:(id)arg3;
+ (id)_errorForSymptomHandler:(id)arg1 isFixingCurrently:(bool)arg2 withContextProvider:(id)arg3;
+ (void)_populateSplitMediaAccountErrorForMedatadata:(id)arg1 withContextProvider:(id)arg2;
+ (long long)_unknownStatePriorityForServiceDescriptor:(id)arg1 characteristicReadResponse:(id)arg2;
+ (id)displayMetadataForAccessory:(id)arg1 withContextProvider:(id)arg2;
+ (id)displayMetadataForMediaProfile:(id)arg1 withContextProvider:(id)arg2;
+ (id)displayMetadataForService:(id)arg1 characteristicReadResponse:(id)arg2;

- (void).cxx_destruct;
- (void)dealloc;
- (id)error;
- (void)parseActiveStateForServiceType:(id)arg1 response:(id)arg2;
- (void)parseAirPurifierResponse:(id)arg1;
- (void)parseCurrentTargetPositionForServiceType:(id)arg1 response:(id)arg2;
- (void)parseGarageDoorOpenerResponse:(id)arg1;
- (void)parseHumidifierDehumidifierResponse:(id)arg1;
- (void)parseInformationalSensorWithServiceType:(id)arg1 response:(id)arg2;
- (void)parseLockMechanismResponse:(id)arg1;
- (void)parsePowerStateForServiceType:(id)arg1 response:(id)arg2;
- (void)parseProgammableSwitchOfType:(id)arg1 response:(id)arg2;
- (void)parseSecuritySystemResponse:(id)arg1;
- (void)parseThermostatResponse:(id)arg1 serviceType:(id)arg2;
- (void)parseWarningSensorWithServiceType:(id)arg1 response:(id)arg2;
- (long long)primaryState;
- (long long)priority;
- (id)serviceState;
- (void)setError:(id)arg1;
- (void)setPrimaryState:(long long)arg1;
- (void)setPriority:(long long)arg1;
- (void)setServiceState:(id)arg1;
- (void)setSortKey:(id)arg1;
- (void)setSplitAccountFuture:(id)arg1;
- (void)setTransitioningPrimaryState:(long long)arg1;
- (id)sortKey;
- (id)splitAccountFuture;
- (long long)transitioningPrimaryState;

@end
