
@interface CRKToolCommand : NSObject <CATTaskClientDelegate> {
    <CRKToolCommandDelegate> * _delegate;
    bool  _printJSON;
    bool  _printVerbose;
    NSString * _sessionIdentifier;
    CRKClassroomInstallation * _targetClassroomInstallation;
    bool  _useDMFRequest;
    CATOperation * mOperation;
    CATOperationQueue * mOperationQueue;
    NSObject<OS_dispatch_source> * mSIGINTSource;
    CATTaskClient * mTaskClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CRKToolCommandDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=shouldPrintJSON, nonatomic) bool printJSON;
@property (getter=shouldPrintVerbose, nonatomic) bool printVerbose;
@property (nonatomic, copy) NSString *sessionIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, retain) CRKClassroomInstallation *targetClassroomInstallation;
@property (getter=shouldUseDMFRequest, nonatomic) bool useDMFRequest;

+ (id)aliases;
+ (id)description;
+ (bool)handlesProgress;
+ (id)help;
+ (bool)instructorCommand;
+ (void)printHelp;
+ (id)subcommandPath;
+ (bool)supportsDMFRequest;
+ (bool)supportsJSON;
+ (bool)supportsVerboseOutput;

- (void).cxx_destruct;
- (id)DMFRequestWithArguments:(id)arg1;
- (void)_remoteTaskDidFinish:(id)arg1;
- (void)_remoteTaskDidProgress:(id)arg1;
- (id)arrayByParsingAndRemovingArgumentFlags:(id)arg1;
- (void)cleanupAndExitIfNeeded;
- (void)client:(id)arg1 didInterruptWithError:(id)arg2;
- (void)client:(id)arg1 didReceiveNotificationWithName:(id)arg2 userInfo:(id)arg3;
- (void)clientDidConnect:(id)arg1;
- (void)clientDidDisconnect:(id)arg1;
- (void)connectToTaskClientWithCompletionBlock:(id /* block */)arg1;
- (id)delegate;
- (bool)didCommandSucceed;
- (bool)didOperationSucceed:(id)arg1;
- (void)executeOperation:(id)arg1;
- (id)init;
- (bool)isCommandFinished;
- (id)operationWithClient:(id)arg1 arguments:(id)arg2;
- (void)remoteTaskDidFinish:(id)arg1;
- (void)remoteTaskDidProgress:(id)arg1;
- (id)requestWithArguments:(id)arg1;
- (void)runWithArguments:(id)arg1;
- (void)runWithClient:(id)arg1 arguments:(id)arg2;
- (id)sessionIdentifier;
- (void)setDelegate:(id)arg1;
- (void)setPrintJSON:(bool)arg1;
- (void)setPrintVerbose:(bool)arg1;
- (void)setSessionIdentifier:(id)arg1;
- (void)setTargetClassroomInstallation:(id)arg1;
- (void)setUseDMFRequest:(bool)arg1;
- (bool)shouldPrintJSON;
- (bool)shouldPrintVerbose;
- (bool)shouldUseDMFRequest;
- (id)targetClassroomInstallation;
- (id)transportProvider;

@end
