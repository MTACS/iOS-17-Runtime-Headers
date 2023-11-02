
@interface ENScanInstance : NSObject <CUXPCCodable> {
    unsigned char  _minimumAttenuation;
    long long  _secondsSinceLastScan;
    unsigned char  _typicalAttenuation;
}

@property (nonatomic) unsigned char minimumAttenuation;
@property (nonatomic) long long secondsSinceLastScan;
@property (nonatomic) unsigned char typicalAttenuation;

- (id)description;
- (void)encodeWithXPCObject:(id)arg1;
- (id)initWithXPCObject:(id)arg1 error:(id*)arg2;
- (unsigned char)minimumAttenuation;
- (long long)secondsSinceLastScan;
- (void)setMinimumAttenuation:(unsigned char)arg1;
- (void)setSecondsSinceLastScan:(long long)arg1;
- (void)setTypicalAttenuation:(unsigned char)arg1;
- (unsigned char)typicalAttenuation;

@end
