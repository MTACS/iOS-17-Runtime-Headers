
@interface OSASymbolInfo : NSObject {
    NSString * _cpuArch;
    bool  _isAppleCode;
    NSString * _name;
    NSString * _path;
    unsigned long long  _size;
    unsigned long long  _start;
    unsigned char  _uuid;
    NSString * legacy_arch;
}

@property (retain) NSString *cpuArch;
@property bool isAppleCode;
@property (retain) NSString *name;
@property (readonly) NSString *path;
@property unsigned long long size;
@property unsigned long long start;

- (void).cxx_destruct;
- (id)cpuArch;
- (id)get_uuid;
- (id)initWithAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 for:(unsigned char)arg3;
- (id)initWithSharedCache:(unsigned char)arg1 atBaseAddress:(unsigned long long)arg2;
- (bool)isAppleCode;
- (id)name;
- (id)path;
- (void)setCpuArch:(id)arg1;
- (void)setIsAppleCode:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setSize:(unsigned long long)arg1;
- (void)setStart:(unsigned long long)arg1;
- (unsigned long long)size;
- (unsigned long long)start;

@end
