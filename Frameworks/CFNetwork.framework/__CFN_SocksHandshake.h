
@interface __CFN_SocksHandshake : NSObject {
    NSDictionary * _credentials;
    bool  _finished;
    NSString * _host;
    unsigned short  _port;
}

- (void).cxx_destruct;
- (id)finish:(int)arg1;
- (bool)parse:(const char *)arg1 len:(long long)arg2 completion:(id /* block */)arg3;

@end
