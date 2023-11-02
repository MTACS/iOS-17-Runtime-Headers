
@interface HMDAccessoryFirmwareUpdatePolicyCriteria : NSObject {
    bool  _anyUserAtHome;
    NSArray * _characteristicConfigurations;
    bool  _checkForScheduledAutomation;
    bool  _noUserAtHome;
    HMDAccessoryFirmwareUpdateTimeWindow * _updateTimeWindow;
}

@property bool anyUserAtHome;
@property (retain) NSArray *characteristicConfigurations;
@property bool checkForScheduledAutomation;
@property bool noUserAtHome;
@property (retain) HMDAccessoryFirmwareUpdateTimeWindow *updateTimeWindow;

- (void).cxx_destruct;
- (bool)anyUserAtHome;
- (id)characteristicConfigurations;
- (bool)checkForScheduledAutomation;
- (id)init;
- (bool)noUserAtHome;
- (void)setAnyUserAtHome:(bool)arg1;
- (void)setCharacteristicConfigurations:(id)arg1;
- (void)setCheckForScheduledAutomation:(bool)arg1;
- (void)setNoUserAtHome:(bool)arg1;
- (void)setUpdateTimeWindow:(id)arg1;
- (id)updateTimeWindow;

@end
