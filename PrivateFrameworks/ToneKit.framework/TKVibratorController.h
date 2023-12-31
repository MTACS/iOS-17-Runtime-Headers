
@interface TKVibratorController : NSObject {
    TLAccessQueue * _accessQueue;
    NSUUID * _activePlayRequestIdentifier;
    NSMutableSet * _pendingStopRequestIdentifiers;
}

@property (nonatomic, readonly) unsigned long long vibratorState;

- (void).cxx_destruct;
- (unsigned int)_previewVibrationSystemSoundID;
- (void)_turnOffIfAppropriate;
- (void)_vibrationDidCompleteWithPlayRequestIdentifier:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)turnOff;
- (void)turnOnWithVibrationPattern:(id)arg1;
- (unsigned long long)vibratorState;

@end
