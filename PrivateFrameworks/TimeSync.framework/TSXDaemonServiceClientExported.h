
@interface TSXDaemonServiceClientExported : NSObject <TSXDaemonServiceClientProtocol> {
    TSXDaemonServiceClient * _object;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) TSXDaemonServiceClient *object;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)daemonClientNotification:(unsigned int)arg1 ioResult:(unsigned int)arg2 arguments:(struct ScalarArgsArray { unsigned long long x1[16]; unsigned int x2; }*)arg3;
- (void)daemonClientRefresh;
- (id)object;
- (void)setObject:(id)arg1;

@end
