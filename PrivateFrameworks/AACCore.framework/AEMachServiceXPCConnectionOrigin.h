
@interface AEMachServiceXPCConnectionOrigin : NSObject <AEXPCConnectionOrigin> {
    NSString * _machServiceName;
    unsigned long long  _options;
}

- (void).cxx_destruct;
- (id)makeConnection;

@end
