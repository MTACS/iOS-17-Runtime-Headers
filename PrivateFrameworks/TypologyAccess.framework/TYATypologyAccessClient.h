
@interface TYATypologyAccessClient : NSObject {
    NSXPCConnection * _connection;
}

@property (nonatomic, retain) NSXPCConnection *connection;

- (void).cxx_destruct;
- (void)_disconnect;
- (void)_initializeConnection;
- (void)_setTypologyAccessMode:(unsigned long long)arg1;
- (id)connection;
- (void)dealloc;
- (void)enumerateTypologyLogs:(id /* block */)arg1;
- (id)init;
- (id)initWithAccessMode:(unsigned long long)arg1;
- (bool)removeAllTypologyFilesWithError:(id*)arg1;
- (bool)removeTypologyFileWithURLHandle:(id)arg1 error:(id*)arg2;
- (void)setConnection:(id)arg1;
- (bool)writeData:(id)arg1 toTypologyFileWithName:(id)arg2 error:(id*)arg3;

@end
