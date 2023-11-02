
@interface ENCoreTelephonyUtility : NSObject <CoreTelephonyClientDelegate, CoreTelephonyClientRegistrationDelegate> {
    CoreTelephonyClient * _ctClient;
    struct __CTServerConnection { } * _ctServerConnection;
    NSHashTable * _observersTable;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, readonly) CoreTelephonyClient *ctClient;
@property (nonatomic, readonly) struct __CTServerConnection { }*ctServerConnection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSHashTable *observersTable;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) Class superclass;

+ (id)countryCodeISOForMobileCountryCode:(id)arg1;
+ (id)mobileCountryCodeForISO:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)cellMonitorUpdate:(id)arg1 info:(id)arg2;
- (id)countryCodeISOForMobileCountryCode:(id)arg1;
- (id)ctClient;
- (struct __CTServerConnection { }*)ctServerConnection;
- (id)currentMobileCountryCode;
- (id)currentPhoneNumbers;
- (void)dealloc;
- (id)init;
- (id)observersTable;
- (void)removeObserver:(id)arg1;
- (id)serialQueue;
- (void)setObserversTable:(id)arg1;
- (void)setSerialQueue:(id)arg1;

@end
