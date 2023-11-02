
@interface BKSHIDEventAuthenticationOriginator : NSObject {
    _BKSHIDEventAuthenticationKey * _key;
    double  _keyLastAccessTime;
}

- (void).cxx_destruct;
- (id)buildMessage:(id /* block */)arg1;
- (long long)validateMessage:(id)arg1;

@end
