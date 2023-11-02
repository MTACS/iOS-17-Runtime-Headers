
@interface CSBluetoothWirelessSplitterInfo : NSObject {
    NSMutableArray * _splitterDeviceList;
    bool  _splitterEnabled;
}

@property (nonatomic, readonly) bool shouldDisableSpeakerVerificationInSplitterMode;
@property (nonatomic) bool splitterEnabled;

- (void).cxx_destruct;
- (bool)_hasDeviceTemporaryPairedNotInContacts;
- (void)addDeviceIntoSplitterDeviceList:(id)arg1;
- (id)description;
- (id)init;
- (void)setSplitterEnabled:(bool)arg1;
- (bool)shouldDisableSpeakerVerificationInSplitterMode;
- (id)splitterDeviceList;
- (bool)splitterEnabled;
- (unsigned long long)splitterState;

@end
