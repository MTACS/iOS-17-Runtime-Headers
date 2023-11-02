
@interface SAVolumeSizeInfo : NSObject <NSSecureCoding> {
    unsigned long long  _capacity;
    NSString * _mountedOn;
    unsigned long long  _purgeableSize;
    unsigned long long  _rawUsed;
    unsigned long long  _used;
}

@property unsigned long long capacity;
@property (retain) NSString *mountedOn;
@property unsigned long long purgeableSize;
@property unsigned long long rawUsed;
@property unsigned long long used;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)capacity;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)mountedOn;
- (unsigned long long)purgeableSize;
- (unsigned long long)rawUsed;
- (void)setCapacity:(unsigned long long)arg1;
- (void)setMountedOn:(id)arg1;
- (void)setPurgeableSize:(unsigned long long)arg1;
- (void)setRawUsed:(unsigned long long)arg1;
- (void)setUsed:(unsigned long long)arg1;
- (unsigned long long)used;

@end
