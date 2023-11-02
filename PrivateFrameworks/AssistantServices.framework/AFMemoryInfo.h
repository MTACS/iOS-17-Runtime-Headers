
@interface AFMemoryInfo : NSObject <NSCopying, NSSecureCoding> {
    int  _numberOfRegions;
    int  _pageSizeInBytes;
    unsigned long long  _peakResidentMemorySizeInBytes;
    unsigned long long  _physicalMemoryFootprintInBytes;
    unsigned long long  _residentMemorySizeInBytes;
    unsigned long long  _virtualMemorySizeInBytes;
}

@property (nonatomic, readonly) int numberOfRegions;
@property (nonatomic, readonly) int pageSizeInBytes;
@property (nonatomic, readonly) unsigned long long peakResidentMemorySizeInBytes;
@property (nonatomic, readonly) unsigned long long physicalMemoryFootprintInBytes;
@property (nonatomic, readonly) unsigned long long residentMemorySizeInBytes;
@property (nonatomic, readonly) unsigned long long virtualMemorySizeInBytes;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVirtualMemorySizeInBytes:(unsigned long long)arg1 numberOfRegions:(int)arg2 pageSizeInBytes:(int)arg3 residentMemorySizeInBytes:(unsigned long long)arg4 peakResidentMemorySizeInBytes:(unsigned long long)arg5 physicalMemoryFootprintInBytes:(unsigned long long)arg6;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (int)numberOfRegions;
- (int)pageSizeInBytes;
- (unsigned long long)peakResidentMemorySizeInBytes;
- (unsigned long long)physicalMemoryFootprintInBytes;
- (unsigned long long)residentMemorySizeInBytes;
- (unsigned long long)virtualMemorySizeInBytes;

@end
