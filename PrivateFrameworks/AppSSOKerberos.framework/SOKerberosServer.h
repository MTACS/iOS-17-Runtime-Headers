
@interface SOKerberosServer : NSObject {
    NSString * _host;
    NSString * _path;
    NSString * _port;
    NSString * _protocol;
}

@property (readonly) NSString *host;
@property (readonly) NSString *path;
@property (readonly) NSString *port;
@property (readonly) NSString *protocol;

+ (id)serverWithString:(id)arg1;

- (void).cxx_destruct;
- (id)host;
- (id)initWithHost:(id)arg1 port:(id)arg2 protocol:(id)arg3 path:(id)arg4;
- (id)path;
- (id)port;
- (id)protocol;

@end
