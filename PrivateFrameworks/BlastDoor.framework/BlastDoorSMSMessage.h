
@interface BlastDoorSMSMessage : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  sMSMessage;
}

@property (nonatomic, readonly) NSString *GUID;
@property (nonatomic, readonly) NSString *contentType;
@property (nonatomic, readonly) NSString *countryCode;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *fallbackHash;
@property (nonatomic, readonly) long long filterSubCategory;
@property (nonatomic, readonly) bool has_iMessageCapability;
@property (nonatomic, readonly) bool has_replaceMessage;
@property (nonatomic, readonly) bool has_sendEnabled;
@property (nonatomic, readonly) bool has_spamCategory;
@property (nonatomic, readonly) bool has_trackMessage;
@property (nonatomic, readonly) long long iMessageCapability;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly) NSString *originatedDeviceEmail;
@property (nonatomic, readonly) NSString *originatedDeviceNumber;
@property (nonatomic, readonly) NSString *originatedDeviceSIM;
@property (nonatomic, readonly) NSString *originatedDeviceUniqueID;
@property (nonatomic, readonly) NSArray *recipients;
@property (nonatomic, readonly) long long replaceMessage;
@property (nonatomic, readonly) bool sendEnabled;
@property (nonatomic, readonly) NSString *sender;
@property (nonatomic, readonly) NSString *serviceCenter;
@property (nonatomic, readonly) BlastDoorSMSMessage_SMSFilteringSettings *smsFilteringSettings;
@property (nonatomic, readonly) long long spamCategory;
@property (nonatomic, readonly) NSString *subject;
@property (nonatomic, readonly) bool trackMessage;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSString *version;

- (void).cxx_destruct;
- (id)GUID;
- (id)contentType;
- (id)countryCode;
- (id)date;
- (id)description;
- (id)fallbackHash;
- (long long)filterSubCategory;
- (bool)has_iMessageCapability;
- (bool)has_replaceMessage;
- (bool)has_sendEnabled;
- (bool)has_spamCategory;
- (bool)has_trackMessage;
- (long long)iMessageCapability;
- (id)init;
- (id)items;
- (id)originatedDeviceEmail;
- (id)originatedDeviceNumber;
- (id)originatedDeviceSIM;
- (id)originatedDeviceUniqueID;
- (id)recipients;
- (long long)replaceMessage;
- (bool)sendEnabled;
- (id)sender;
- (id)serviceCenter;
- (id)smsFilteringSettings;
- (long long)spamCategory;
- (id)subject;
- (bool)trackMessage;
- (long long)type;
- (id)version;

@end
