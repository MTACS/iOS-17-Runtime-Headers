
@interface DNDDevice : NSObject <NSCopying> {
    unsigned long long  _deviceCapabilities;
    unsigned long long  _deviceClass;
    struct { 
        long long majorVersion; 
        long long minorVersion; 
        long long patchVersion; 
    }  _frameworkVersion;
}

@property (nonatomic, readonly) unsigned long long deviceCapabilities;
@property (nonatomic, readonly) unsigned long long deviceClass;
@property (nonatomic, readonly) struct { long long x1; long long x2; long long x3; } frameworkVersion;

+ (id)currentDevice;
+ (id)deviceWithClass:(unsigned long long)arg1 deviceCapabilities:(unsigned long long)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)deviceCapabilities;
- (unsigned long long)deviceClass;
- (struct { long long x1; long long x2; long long x3; })frameworkVersion;
- (unsigned long long)hash;
- (id)initWithClass:(unsigned long long)arg1 deviceCapabilities:(unsigned long long)arg2 frameworkVersion:(struct { long long x1; long long x2; long long x3; })arg3;
- (bool)isEqual:(id)arg1;

@end
