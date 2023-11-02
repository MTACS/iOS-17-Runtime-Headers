
@interface VIBitVector : NSObject {
    unsigned long long  _bitShift;
    char * _data;
    unsigned long long  _numberOfBits;
    unsigned long long  _numberOfBytes;
}

@property (readonly) unsigned long long numberOfBits;

- (bool)checkAtIndex:(unsigned long long)arg1;
- (void)clearAtIndex:(unsigned long long)arg1;
- (id)data;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)initWithNumberOfBits:(unsigned long long)arg1;
- (unsigned long long)numberOfBits;
- (void)setAtIndex:(unsigned long long)arg1;

@end
