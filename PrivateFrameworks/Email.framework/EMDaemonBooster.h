
@interface EMDaemonBooster : NSObject <EFLoggable> {
    EMRemoteConnection * _connection;
    NSString * _loggingDescription;
    NSProgress * _remoteBoost;
}

@property (nonatomic, retain) EMRemoteConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *loggingDescription;
@property (nonatomic, retain) NSProgress *remoteBoost;
@property (readonly) Class superclass;

+ (id)log;

- (void).cxx_destruct;
- (id)_newRemoteBoost;
- (id)connection;
- (void)dealloc;
- (id)initWithConnection:(id)arg1 description:(id)arg2;
- (id)loggingDescription;
- (id)remoteBoost;
- (void)setConnection:(id)arg1;
- (void)setLoggingDescription:(id)arg1;
- (void)setRemoteBoost:(id)arg1;

@end
