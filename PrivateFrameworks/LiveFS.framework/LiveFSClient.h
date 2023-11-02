
@interface LiveFSClient : NSObject {
    NSXPCConnection * conn;
}

+ (id)interfaceForListeners;
+ (id)newConnectionForService:(id)arg1;
+ (id)supportDirURL:(unsigned long long)arg1 forURL:(id)arg2 daemonPrefName:(id)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (void)dealloc;
- (id)forgetVolume:(id)arg1 withFlags:(unsigned int)arg2;
- (id)initConnectionForService:(id)arg1;
- (void)listenerForVolume:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)listenerForVolume:(id)arg1 error:(id*)arg2;
- (id)terminateDevice:(id)arg1;
- (void)unlockVolume:(id)arg1 password:(id)arg2 saveToKeychain:(bool)arg3 completionHandler:(id /* block */)arg4;
- (id)volumes:(id*)arg1;

@end
