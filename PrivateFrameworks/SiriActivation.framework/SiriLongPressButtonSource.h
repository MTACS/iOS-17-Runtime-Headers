
@interface SiriLongPressButtonSource : SiriActivationSource <SiriButtonSource, SiriLongPressButtonConfigurationUpdateDelegate> {
    long long  _buttonIdentifier;
    SiriLongPressButtonConfiguration * _configuration;
    SiriLongPressButtonContext * _context;
    id /* block */  _currentTimeGenerator;
    <SiriLongPressButtonSourceDelegate> * _delegate;
    NSMutableArray * _lock_activityAssertions;
    SiriLongPressButtonConfigurationUpdateManager * _updateManager;
}

@property (nonatomic) long long buttonIdentifier;
@property (nonatomic, copy) SiriLongPressButtonConfiguration *configuration;
@property (nonatomic, retain) SiriLongPressButtonContext *context;
@property (nonatomic, copy) id /* block */ currentTimeGenerator;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SiriLongPressButtonSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *lock_activityAssertions;
@property (readonly) Class superclass;
@property (nonatomic, retain) SiriLongPressButtonConfigurationUpdateManager *updateManager;

+ (id)longPressButtonForIdentifier:(long long)arg1;
+ (id)new;

- (void).cxx_destruct;
- (id)_deviceIdentifier;
- (id)_initWithButtonIdentifier:(long long)arg1;
- (bool)_shouldReplaceSpeechInteractionActivityTimestampWithPrewarmTimestamp;
- (bool)_sourceSupportsAutomaticConfigurationUpdates;
- (double)_timestampForSpeechInteractionActivityWithTimestamp:(double)arg1;
- (long long)buttonIdentifier;
- (id)configuration;
- (void)configurationUpdateManager:(id)arg1 configurationDidUpdateForLongPressSource:(id)arg2;
- (void)configureConnection;
- (id)context;
- (id /* block */)currentTimeGenerator;
- (id)delegate;
- (void)didRecognizeButtonSinglePressUp;
- (void)didRecognizeLongPress;
- (void)didRecognizeLongPressInteraction:(id)arg1;
- (id)init;
- (id)lock_activityAssertions;
- (long long)longPressBehavior;
- (double)longPressInterval;
- (id)prepareForActivation;
- (id)prepareForActivationWithTimestamp:(double)arg1;
- (void)requestConfigurationUpdatesBasedOnDeviceSettings;
- (void)setButtonIdentifier:(long long)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setCurrentTimeGenerator:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLock_activityAssertions:(id)arg1;
- (void)setUpdateManager:(id)arg1;
- (id)speechInteractionActivityWithTimestamp:(double)arg1;
- (void)stopConfigurationUpdates;
- (id)updateManager;

@end
