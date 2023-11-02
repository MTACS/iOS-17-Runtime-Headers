
@interface HKSPXPCClient : NSObject <BSDescriptionProviding, HDSPSource> {
    HKSPXPCClientIdentifier * _clientIdentifier;
    NAFuture * _clientIdentifierProvider;
    <HKSPClient> * _clientLink;
    NSXPCConnection * _connection;
}

@property (copy) HKSPXPCClientIdentifier *clientIdentifier;
@property (nonatomic, readonly) NAFuture *clientIdentifierProvider;
@property (nonatomic, readonly) <HKSPClient> *clientLink;
@property (nonatomic, readonly) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool dontNotify;
@property (nonatomic, readonly) bool dontSync;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int processID;
@property (nonatomic, readonly) NSString *sourceIdentifier;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/Sleep.framework/Sleep

+ (id)clientForConnection:(id)arg1 clientIdentifierProvider:(id)arg2 clientLink:(id)arg3;
+ (id)clientForConnection:(id)arg1 clientLink:(id)arg2;

- (void).cxx_destruct;
- (id)clientIdentifier;
- (id)clientIdentifierProvider;
- (id)clientLink;
- (id)connection;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)hash;
- (id)initWithConnection:(id)arg1 clientIdentifierProvider:(id)arg2 clientLink:(id)arg3;
- (bool)isEqual:(id)arg1;
- (int)processID;
- (void)setClientIdentifier:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

// Image: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon

- (id)sourceIdentifier;

@end
