
@interface BlastDoorSMSMessage_SMSFilteringSettings : NSObject {
    void sMSMessage_SMSFilteringSettings;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *filterExtensionName;
@property (nonatomic, readonly) unsigned long long smsFilterCapabilitiesOptions;

- (void).cxx_destruct;
- (id)description;
- (id)filterExtensionName;
- (id)init;
- (unsigned long long)smsFilterCapabilitiesOptions;

@end
