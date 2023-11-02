
@interface HMDDoorbellChimeController : HMFObject <HMDCharacteristicsAvailabilityListenerDelegate, HMFLogging> {
    NSSet * _availableCharacteristics;
    <HMDDoorbellChimeControllerContext> * _context;
    NSDate * _lastUnidentifiedChimeDate;
}

@property (copy) NSSet *availableCharacteristics;
@property (readonly) <HMDDoorbellChimeControllerContext> *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSDate *lastUnidentifiedChimeDate;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_chimeCoreUtilDoorbellWithDestination:(id)arg1 shouldPlayChime:(bool)arg2 logEvent:(id)arg3 personIdentificationText:(id)arg4;
- (id)_destinationIDsToNotifyForDoorbellChimeUsingCoreUtilAction;
- (void)_handleCharacteristicsValueUpdatedNotification:(id)arg1;
- (bool)_isDoorbellChimeSettingEnabledForHomePodAccessory:(id)arg1;
- (void)_notifyAllAccessoriesForDoorbellPressAndPlayChimeSound:(bool)arg1 attemptCloudPullIfNoPersonsFound:(bool)arg2;
- (unsigned long long)_numHomePodsWithDoorbellChimeEnabled;
- (id)availableCharacteristics;
- (id)clientIdentifier;
- (void)configure;
- (id)context;
- (void)dealloc;
- (void)handleCharacteristicsValueUpdatedNotification:(id)arg1;
- (void)handleUpdatedPersonIdentificationInformation;
- (id)initWithContext:(id)arg1;
- (id)initWithWorkQueue:(id)arg1 accessory:(id)arg2;
- (id)lastUnidentifiedChimeDate;
- (void)listener:(id)arg1 didUpdateAvailableCharacteristics:(id)arg2;
- (id)logIdentifier;
- (void)setAvailableCharacteristics:(id)arg1;
- (void)setLastUnidentifiedChimeDate:(id)arg1;

@end
