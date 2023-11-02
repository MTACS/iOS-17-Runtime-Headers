
@interface CNRegulatoryLogger : NSObject <CNRegulatoryLogger> {
    NSObject<OS_tcc_identity> * _assumedIdentity;
    CNAuditToken * _cnAuditToken;
    unsigned long long  _greenTeaDiagnosticEventCounter;
    unsigned long long  _greenTeaDiagnosticLogFaultForEventCount;
    struct ct_green_tea_logger_s { } * _greenTeaLogger;
    bool  _isGreenTeaDiagnosticsEnabled;
    bool  _isPrivacyAccountingDiagnosticsEnabled;
    NSObject<OS_os_log> * _os_log;
    PAApplication * _privacyAccountingAccessor;
    PAAccessLogger * _privacyAccountingLogger;
    NSString * _processDescription;
}

@property (nonatomic, readonly) NSObject<OS_tcc_identity> *assumedIdentity;
@property (nonatomic, readonly) CNAuditToken *cnAuditToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long greenTeaDiagnosticEventCounter;
@property (nonatomic) unsigned long long greenTeaDiagnosticLogFaultForEventCount;
@property (nonatomic, readonly) struct ct_green_tea_logger_s { }*greenTeaLogger;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isGreenTeaDiagnosticsEnabled;
@property (nonatomic, readonly) bool isPrivacyAccountingDiagnosticsEnabled;
@property (nonatomic, readonly) NSObject<OS_os_log> *os_log;
@property (nonatomic, retain) PAApplication *privacyAccountingAccessor;
@property (nonatomic, retain) PAAccessLogger *privacyAccountingLogger;
@property (nonatomic, retain) NSString *processDescription;
@property (readonly) Class superclass;

+ (id)sharedInstanceForAddressBook;

- (void).cxx_destruct;
- (id)accessorForAuditTokenValidatingAssumedIdentity;
- (id)assumedIdentity;
- (id)cnAuditToken;
- (void)dealloc;
- (void)deletingContactsData;
- (void)displayingOOPContactPicker;
- (unsigned long long)greenTeaDiagnosticEventCounter;
- (unsigned long long)greenTeaDiagnosticLogFaultForEventCount;
- (struct ct_green_tea_logger_s { }*)greenTeaLogger;
- (id)initWithAuditToken:(id)arg1 assumedIdentity:(id)arg2;
- (id)initWithAuditToken:(id)arg1 assumedIdentity:(id)arg2 logCategory:(const char *)arg3;
- (bool)isGreenTeaDiagnosticsEnabled;
- (bool)isPrivacyAccountingDiagnosticsEnabled;
- (void)logContactPickerAccessEvent;
- (void)logContactsDataAccessEvent;
- (void)logContactsDataAccessEventWithAssetIdentifiers:(id)arg1;
- (void)logGreenTeaEvent:(id)arg1;
- (void)logPrivacyAccountingAccessEvent:(id)arg1;
- (void)modifyingContactsData;
- (id)os_log;
- (id)privacyAccountingAccessor;
- (id)privacyAccountingAccessorImpl;
- (id)privacyAccountingLogger;
- (id)processDescription;
- (id)processDescriptionImpl;
- (void)readAndTransmittingContactsData;
- (void)readingContactsData;
- (void)receivingContactsDataFromOOPContactPicker;
- (void)setGreenTeaDiagnosticEventCounter:(unsigned long long)arg1;
- (void)setGreenTeaDiagnosticLogFaultForEventCount:(unsigned long long)arg1;
- (void)setPrivacyAccountingAccessor:(id)arg1;
- (void)setPrivacyAccountingLogger:(id)arg1;
- (void)setProcessDescription:(id)arg1;
- (void)willLogContactPickerAccessEvent;
- (void)willLogContactsDataAccessEvent;
- (void)willLogContactsDataAccessEventWithAssetIdentifiers:(id)arg1;
- (void)willNotLogContactPickerAccessEventAsLoggingDisabled;
- (void)willNotLogContactPickerAccessEventAsLoggingInProcess;
- (void)willNotLogContactsDataAccessEventAsLoggingDisabled;

@end
