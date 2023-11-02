
@interface DDScannerObject : NSObject {
    NSXPCConnection * _connectionToService;
    bool  _hasBasicType;
    long long  _jobIdentifier;
    struct __DDScanner { } * _scanner;
    int  _type;
}

- (void).cxx_destruct;
- (void)dealloc;

@end
