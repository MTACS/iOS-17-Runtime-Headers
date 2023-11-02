
@interface CKContextFingerprintMinHash : CKContextFingerprint {
    int * _hashes;
    unsigned int  _numHashes;
}

@property (nonatomic, readonly) int*hashes;
@property (nonatomic, readonly) unsigned int numHashes;

+ (id)parse:(id)arg1;
+ (bool)supportsSecureCoding;

- (float)compareFingerprintWith:(id)arg1;
- (id)data;
- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (int*)hashes;
- (id)initWithCoder:(id)arg1;
- (id)initWithHashes:(int*)arg1 count:(unsigned int)arg2;
- (unsigned int)numHashes;

@end
