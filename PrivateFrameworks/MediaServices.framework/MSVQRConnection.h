
@interface MSVQRConnection : NSObject <IDSGroupSessionDelegate> {
    NSObject<OS_nw_connection> * _connection;
    <MSVQRConnectionSessionDataSource> * _dataSource;
    <MSVQRConnectionDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSObject<OS_nw_protocol_definition> * _framerDefinition;
    MSVBlockGuard * _guard;
    MSVQRConnectionMessageCoder * _messageCoder;
    NSNumber * _participantIdentifier;
    NSObject<OS_dispatch_queue> * _queue;
    <MSVQRConnectionReportProtocol> * _report;
    IDSGroupSession * _session;
    bool  _shouldTerminate;
    unsigned long long  _state;
}

@property (nonatomic, retain) NSObject<OS_nw_connection> *connection;
@property (nonatomic, readonly) <MSVQRConnectionSessionDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MSVQRConnectionDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSObject<OS_nw_protocol_definition> *framerDefinition;
@property (nonatomic, retain) MSVBlockGuard *guard;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MSVQRConnectionMessageCoder *messageCoder;
@property (nonatomic, copy) NSNumber *participantIdentifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) <MSVQRConnectionReportProtocol> *report;
@property (nonatomic, retain) IDSGroupSession *session;
@property (nonatomic) bool shouldTerminate;
@property (nonatomic) unsigned long long state;
@property (readonly) Class superclass;

+ (id)connectionWithDataSource:(id)arg1 messageCoder:(id)arg2;
+ (id)createFramerDefinitionWithIdentifier:(id)arg1;

- (void).cxx_destruct;
- (void)_clearState;
- (void)_connectionStateDidChangeWithError:(id)arg1;
- (void)_createGroupSession;
- (void)_createQuicConnection;
- (void)_receiveNextMessage;
- (void)_sendPathWithCompletion:(id /* block */)arg1;
- (void)_terminateWithError:(id)arg1;
- (id)connection;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (id)framerDefinition;
- (id)guard;
- (id)initWithDataSource:(id)arg1 messageCoder:(id)arg2;
- (id)messageCoder;
- (id)participantIdentifier;
- (id)queue;
- (id)report;
- (void)sendMessage:(id)arg1;
- (id)session;
- (void)session:(id)arg1 didRegisterPluginAllocationInfo:(id)arg2;
- (void)sessionDidJoinGroup:(id)arg1 participantUpdate:(id)arg2 error:(id)arg3;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGuard:(id)arg1;
- (void)setParticipantIdentifier:(id)arg1;
- (void)setReport:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setShouldTerminate:(bool)arg1;
- (void)setState:(unsigned long long)arg1;
- (bool)shouldTerminate;
- (void)start;
- (unsigned long long)state;
- (void)stop;

@end
