
@interface MTLArchitecture : NSObject <NSCopying> {
    int  _cpuSubtype;
    int  _cpuType;
    NSString * _name;
    NSString * _revision;
}

@property (readonly) int cpuSubtype;
@property (readonly) int cpuType;
@property (readonly) NSString *name;
@property (readonly) NSString *revision;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)cpuSubtype;
- (int)cpuType;
- (void)dealloc;
- (id)initWithCPUType:(int)arg1 cpuSubtype:(int)arg2;
- (id)initWithCPUType:(int)arg1 cpuSubtype:(int)arg2 revision:(id)arg3;
- (id)name;
- (id)revision;

@end
