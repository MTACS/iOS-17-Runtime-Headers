
@interface BKSSystemService : NSObject {
    FBSSystemService * _fbsSystemService;
}

- (void).cxx_destruct;
- (bool)canOpenApplication:(id)arg1 reason:(int*)arg2;
- (void)cleanupClientPort:(unsigned int)arg1;
- (unsigned int)createClientPort;
- (id)init;
- (void)openApplication:(id)arg1 options:(id)arg2 clientPort:(unsigned int)arg3 withResult:(id /* block */)arg4;
- (void)openApplication:(id)arg1 options:(id)arg2 withResult:(id /* block */)arg3;
- (void)openURL:(id)arg1 application:(id)arg2 options:(id)arg3 clientPort:(unsigned int)arg4 withResult:(id /* block */)arg5;
- (int)pidForApplication:(id)arg1;
- (id)systemApplicationBundleIdentifier;
- (void)terminateApplication:(id)arg1 forReason:(int)arg2 andReport:(bool)arg3 withDescription:(id)arg4;

@end
