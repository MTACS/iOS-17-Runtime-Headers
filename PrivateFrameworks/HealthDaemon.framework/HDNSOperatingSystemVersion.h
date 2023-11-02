
@interface HDNSOperatingSystemVersion : NSObject {
    struct { 
        long long majorVersion; 
        long long minorVersion; 
        long long patchVersion; 
    }  _versionStruct;
}

@end
