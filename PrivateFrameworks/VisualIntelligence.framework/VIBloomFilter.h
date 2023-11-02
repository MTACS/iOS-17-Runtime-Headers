
@interface VIBloomFilter : NSObject {
    VIBitVector * _bits;
    unsigned int  _numberOfAddedItems;
    unsigned long long  _numberOfBits;
    unsigned int  _numberOfHashes;
    unsigned int  _seed;
}

@property (readonly) unsigned int numberOfAddedItems;
@property (readonly) unsigned long long numberOfBits;
@property (readonly) unsigned int numberOfHashes;
@property (readonly) unsigned int seed;

- (void).cxx_destruct;
- (void)addItem:(id)arg1;
- (bool)containsItem:(id)arg1;
- (id)data;
- (id)description;
- (id)initWithData:(id)arg1 numberOfHashes:(unsigned int)arg2 numberOfBits:(unsigned int)arg3 seed:(unsigned int)arg4 error:(id*)arg5;
- (id)initWithNumberOfHashes:(unsigned int)arg1 numberOfBits:(unsigned long long)arg2 seed:(unsigned int)arg3;
- (unsigned int)numberOfAddedItems;
- (unsigned long long)numberOfBits;
- (unsigned int)numberOfHashes;
- (unsigned int)seed;

@end
