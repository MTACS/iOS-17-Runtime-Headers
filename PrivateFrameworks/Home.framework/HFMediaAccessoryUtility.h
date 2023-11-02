
@interface HFMediaAccessoryUtility : NSObject {
    NSMutableDictionary * _restartStateList;
    NSMutableArray * _uuidTrackingList;
}

@property (retain) NSMutableDictionary *restartStateList;
@property (retain) NSMutableArray *uuidTrackingList;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)checkIfAccessoryisPartofHomeAndHasLanguageSettings:(id)arg1;
- (bool)checkIfLanguageSetupIsDoneForAccessory:(id)arg1;
- (id)init;
- (bool)isHomePodRestartInitiated:(id)arg1;
- (bool)isHomePodRestartingCurrently:(id)arg1;
- (void)markUUIDReachableViaRapport:(id)arg1;
- (void)markUUIDUnreachableViaRapport:(id)arg1;
- (id)restartStateList;
- (void)setRestartStateList:(id)arg1;
- (void)setUuidTrackingList:(id)arg1;
- (void)updateHomePodAccessoryRestartState:(unsigned long long)arg1 with:(id)arg2;
- (id)uuidTrackingList;

@end
