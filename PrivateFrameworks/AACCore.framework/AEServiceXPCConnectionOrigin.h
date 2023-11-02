
@interface AEServiceXPCConnectionOrigin : NSObject <AEXPCConnectionOrigin> {
    NSString * _serviceName;
}

- (void).cxx_destruct;
- (id)makeConnection;

@end
