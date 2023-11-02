
@interface CNDSIMCardMonitor : NSObject <CNDSIMCardMonitor> {
    CoreTelephonyClient * _coreTelephonyClient;
    <CNDCoreTelephonyServices> * _coreTelephonyServices;
    struct __CTServerConnection { } * _serverConnection;
    NSObject<OS_dispatch_queue> * _serverConnectionQueue;
    CNReplaySubject * _subject;
    <CNCancelable> * _subjectToken;
}

@property (nonatomic, readonly) CoreTelephonyClient *coreTelephonyClient;
@property (nonatomic, readonly) <CNDCoreTelephonyServices> *coreTelephonyServices;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct __CTServerConnection { }*serverConnection;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serverConnectionQueue;
@property (nonatomic, readonly) CNReplaySubject *subject;
@property (nonatomic, retain) <CNCancelable> *subjectToken;
@property (readonly) Class superclass;

+ (id)continuousPhoneNumberObservableWithCoreTelephonyClient:(id)arg1 services:(id)arg2 serverConnection:(struct __CTServerConnection { }*)arg3;
+ (void)infoWithClient:(id)arg1 completion:(id /* block */)arg2;
+ (id)infoWithCompletion:(id /* block */)arg1;
+ (id)os_log;
+ (id)phoneNumberChangedObservableWithCoreTelephonyServices:(id)arg1 serverConnection:(struct __CTServerConnection { }*)arg2;
+ (id)phoneNumberObservableWithCoreTelephonyClient:(id)arg1;

- (void).cxx_destruct;
- (id)addInfoChangeHandler:(id /* block */)arg1;
- (void)configureStateIfNecessary;
- (id)coreTelephonyClient;
- (id)coreTelephonyServices;
- (void)dealloc;
- (id)init;
- (id)initWithCoreTelephonyClient:(id)arg1 services:(id)arg2;
- (void)nts_configureConnectionIfNecessary;
- (void)nts_configureSubjectIfNecessary;
- (struct __CTServerConnection { }*)serverConnection;
- (id)serverConnectionQueue;
- (void)setServerConnection:(struct __CTServerConnection { }*)arg1;
- (void)setServerConnectionQueue:(id)arg1;
- (void)setSubjectToken:(id)arg1;
- (id)subject;
- (id)subjectToken;

@end
