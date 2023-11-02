
@interface SESClient : NSObject {
    NSXPCConnection * _connection;
    NSString * _serviceName;
}

- (void).cxx_destruct;

@end
