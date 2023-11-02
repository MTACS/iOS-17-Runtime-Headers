
@interface VMUArchitecture : NSObject <NSCoding, NSCopying> {
    int  _cpuSubtype;
    int  _cpuType;
}

+ (id)anyArchitecture;
+ (id)architectureWithCpuType:(int)arg1 cpuSubtype:(int)arg2;
+ (id)armArchitecture;
+ (id)currentArchitecture;
+ (id)i386Architecture;
+ (void)initialize;
+ (id)ppc32Architecture;
+ (id)ppc64Architecture;
+ (id)ppcArchitecture;
+ (id)x86_32Architecture;
+ (id)x86_64Architecture;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)cpuSubtype;
- (int)cpuType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithCpuType:(int)arg1 cpuSubtype:(int)arg2;
- (bool)is32Bit;
- (bool)is64Bit;
- (bool)isBigEndian;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToArchitecture:(id)arg1;
- (bool)isLittleEndian;
- (bool)matchesArchitecture:(id)arg1;

@end