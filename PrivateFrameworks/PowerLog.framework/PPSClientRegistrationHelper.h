
@interface PPSClientRegistrationHelper : NSObject {
    NSXPCConnection * _connectionToServer;
}

@property (nonatomic, retain) NSXPCConnection *connectionToServer;

- (void).cxx_destruct;
- (void)closeXPCConnection;
- (id)connectionToServer;
- (id)createXPCConnection;
- (bool)permissionsForSubsystem:(id)arg1 category:(id)arg2;
- (void)setConnectionToServer:(id)arg1;

@end
