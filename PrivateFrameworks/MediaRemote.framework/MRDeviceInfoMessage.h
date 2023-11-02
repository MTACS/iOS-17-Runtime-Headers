
@interface MRDeviceInfoMessage : MRProtocolMessage {
    MRSupportedProtocolMessages * _supportedProtocolMessages;
}

@property (nonatomic, readonly) MRDeviceInfo *deviceInfo;
@property (nonatomic, readonly) MRSupportedProtocolMessages *supportedProtocolMessages;

- (void).cxx_destruct;
- (id)deviceInfo;
- (unsigned long long)encryptionType;
- (id)initWithDeviceInfo:(id)arg1;
- (id)supportedProtocolMessages;
- (unsigned long long)type;

@end
