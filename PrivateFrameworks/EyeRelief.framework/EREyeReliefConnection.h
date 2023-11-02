
@interface EREyeReliefConnection : NSObject <EREyeReliefProtocol> {
    NSXPCConnection * _connection;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedConnection;

- (void).cxx_destruct;
- (id)connection;
- (id)connectionWithErrorHandler:(id /* block */)arg1;
- (void)isDistanceSamplingEnabled:(id /* block */)arg1;
- (void)setConnection:(id)arg1;
- (void)toggleDistanceSampling:(id /* block */)arg1;

@end
