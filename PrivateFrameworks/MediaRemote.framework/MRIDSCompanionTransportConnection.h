
@interface MRIDSCompanionTransportConnection : MRExternalDeviceTransportConnection <NSStreamDelegate> {
    MRIDSCompanionConnection * _connection;
    NSString * _destination;
    NSError * _error;
    NSString * _session;
    NSString * _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *destination;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *session;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *type;

- (void).cxx_destruct;
- (id)_exportDescriptorForOutputDevice:(id)arg1 endpoint:(id)arg2 remoteControl:(bool)arg3;
- (long long)_idsPriorityFromPriority:(long long)arg1;
- (void)closeWithError:(id)arg1;
- (void)dealloc;
- (id)destination;
- (id)error;
- (id)exportEndpoint:(id)arg1;
- (id)exportOutputDevice:(id)arg1 endpoint:(id)arg2;
- (void)ingestData:(id)arg1;
- (id)initWithConnection:(id)arg1 type:(id)arg2 destination:(id)arg3 session:(id)arg4;
- (bool)isValid;
- (id)runLoop;
- (unsigned long long)sendTransportData:(id)arg1 options:(id)arg2;
- (id)session;
- (void)setRunLoop:(id)arg1;
- (id)type;

@end
