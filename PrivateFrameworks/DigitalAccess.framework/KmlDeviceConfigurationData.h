
@interface KmlDeviceConfigurationData : NSObject {
    NSData * _confMailboxSettingAsData;
    NSData * _deviceBtIntroKey;
    NSData * _deviceBtOOBKey;
    unsigned char  _immoTokenConfig;
    bool  _keyTrackingReceiptRequired;
    NSData * _mfiPPID;
    NSData * _oemSpecificContentAsData;
    bool  _onlineAttestationDeliverySupported;
    NSData * _privateMailboxSettingAsData;
    NSData * _readerBtIRK;
    NSData * _readerBtIdAddress;
    bool  _readerSupportsLELR;
    bool  _readerSupportsNfc;
    bool  _readerSupportsUwb;
    NSMutableArray * _remainingTlvs;
    bool  _sharingConfigTagParsed;
    unsigned char  _sharingPasswordLength;
    NSData * _sharingPasswordLengthAsData;
    bool  _sharingPasswordRequired;
    NSData * _supportedKeyProfiles;
    bool  _supportedRadioTagParsed;
    bool  _uwbDisabledLocally;
}

- (void).cxx_destruct;

@end
