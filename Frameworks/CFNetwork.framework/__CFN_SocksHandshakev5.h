
@interface __CFN_SocksHandshakev5 : __CFN_SocksHandshake {
    unsigned char  _addressType;
    NSMutableSet * _authMethods;
    unsigned short  _destPort;
    int  _destinationLen;
    NSMutableString * _domainName;
    bool  _done;
    int  _numberOfAuthVersionSupported;
    NSMutableString * _password;
    int  _passwordLen;
    int  _portLen;
    unsigned long long  _state;
    NSMutableString * _username;
    int  _usernameLen;
    unsigned char  ipaddr;
}

- (void).cxx_destruct;
- (id)finish:(int)arg1;
- (bool)parse:(const char *)arg1 len:(long long)arg2 completion:(id /* block */)arg3;

@end
