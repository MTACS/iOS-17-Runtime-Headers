
@interface CBPairingInfo : NSObject <CUXPCCodable> {
    CBDevice * _device;
    NSError * _error;
    unsigned int  _flags;
    long long  _pairingType;
    NSString * _pin;
}

@property (nonatomic, retain) CBDevice *device;
@property (nonatomic, copy) NSError *error;
@property (nonatomic) unsigned int flags;
@property (nonatomic) long long pairingType;
@property (nonatomic, copy) NSString *pin;

- (void).cxx_destruct;
- (id)description;
- (id)device;
- (void)encodeWithXPCObject:(id)arg1;
- (id)error;
- (unsigned int)flags;
- (id)initWithXPCObject:(id)arg1 error:(id*)arg2;
- (long long)pairingType;
- (id)pin;
- (void)setDevice:(id)arg1;
- (void)setError:(id)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setPairingType:(long long)arg1;
- (void)setPin:(id)arg1;

@end
