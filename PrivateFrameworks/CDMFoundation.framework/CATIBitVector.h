
@interface CATIBitVector : NSObject {
    unsigned long long  _bitShift;
    unsigned long long  _bitsPerBlock;
    char * _data;
    unsigned long long  _numberOfBits;
    unsigned long long  _numberOfBytes;
}

@property (readonly) unsigned long long numberOfBits;
@property (readonly) unsigned long long numberOfBytes;

- (id)data;
- (void)dealloc;
- (id)initWithNumberOfBits:(unsigned long long)arg1;
- (unsigned long long)numberOfBits;
- (unsigned long long)numberOfBytes;
- (void)setAtIndex:(unsigned long long)arg1;
- (bool)testAtIndex:(unsigned long long)arg1;

@end
