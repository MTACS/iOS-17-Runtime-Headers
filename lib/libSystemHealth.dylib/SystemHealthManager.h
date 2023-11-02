
@interface SystemHealthManager : NSObject {
    NSXPCConnection * _connectionToService;
}

- (void).cxx_destruct;
- (id)init;
- (void)postComponentStatusEventFor:(unsigned long long)arg1 status:(unsigned long long)arg2 withReply:(id /* block */)arg3;

@end
