
@interface BPSWatchMigrationController : BPSWelcomeOptinViewController {
    bool  _iTunes;
    NSString * _localizedDetailText;
    NSArray * _migratableDevices;
    <BPSWatchMigrationControllerDelegate> * _migrationDelegate;
    NSString * _sourceDeviceName;
}

@property (nonatomic) bool iTunes;
@property (nonatomic, retain) NSString *localizedDetailText;
@property (nonatomic, retain) NSArray *migratableDevices;
@property (nonatomic) <BPSWatchMigrationControllerDelegate> *migrationDelegate;
@property (nonatomic, retain) NSString *sourceDeviceName;

- (void).cxx_destruct;
- (void)_notifyDelegateShouldMigrateWithData:(id)arg1;
- (void)_saveMigrationPreference:(bool)arg1;
- (void)alternateButtonPressed:(id)arg1;
- (id)alternateButtonTitle;
- (id)detailString;
- (bool)iTunes;
- (id)imageResource;
- (id)imageResourceBundleIdentifier;
- (id)init;
- (id)initWithSnapshot:(id)arg1;
- (id)initWithSourceDeviceName:(id)arg1;
- (void)loadView;
- (id)localizedDetailText;
- (id)migratableDevices;
- (id)migrationDelegate;
- (void)setITunes:(bool)arg1;
- (void)setLocalizedDetailText:(id)arg1;
- (void)setMigratableDevices:(id)arg1;
- (void)setMigrationDelegate:(id)arg1;
- (void)setSourceDeviceName:(id)arg1;
- (bool)shouldBeDisplayedGivenMigrationData:(id)arg1;
- (id)sourceDeviceName;
- (void)suggestedButtonPressed:(id)arg1;
- (id)suggestedButtonTitle;
- (id)titleString;
- (bool)useBridgeStyling;

@end
