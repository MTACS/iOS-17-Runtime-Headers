
@interface SATurnstileInfoWithPortLabel : SATurnstileInfo {
    unsigned char  _portDomain;
    unsigned short  _portFlags;
    NSString * _portName;
}

@property unsigned long long portDomain;
@property unsigned long long portFlags;
@property (retain) NSString *portName;

- (void).cxx_destruct;
- (id)initWithKCDataTurnstileInfo:(const struct stackshot_thread_turnstileinfo_v2 { unsigned long long x1; unsigned long long x2; unsigned char x3; unsigned char x4; unsigned long long x5; short x6; }*)arg1;
- (unsigned long long)portDomain;
- (unsigned long long)portFlags;
- (id)portName;
- (void)setPortDomain:(unsigned long long)arg1;
- (void)setPortFlags:(unsigned long long)arg1;
- (void)setPortName:(id)arg1;

@end
