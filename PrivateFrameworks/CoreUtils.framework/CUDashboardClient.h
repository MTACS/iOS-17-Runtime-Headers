
@interface CUDashboardClient : NSObject {
    NSString * _server;
}

@property (nonatomic, copy) NSString *server;

- (void).cxx_destruct;
- (int)_logCStr:(const char *)arg1 length:(unsigned long long)arg2;
- (int)activate;
- (void)invalidate;
- (int)logJSON:(id)arg1;
- (int)logf:(const char *)arg1;
- (int)logv:(const char *)arg1 args:(char *)arg2;
- (id)server;
- (void)setServer:(id)arg1;

@end
