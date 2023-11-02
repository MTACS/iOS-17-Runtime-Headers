
@interface MDPathFilter : NSObject {
    int  _auxValueCount;
    unsigned long long * _auxValues;
    struct { unsigned short x1; unsigned short x2; unsigned short x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned short x9; unsigned long long x10[0]; } * _commonValues;
    unsigned long long  _defaultRule;
    struct { 
        char *containerBytes; 
        struct { 
            unsigned int embeddedReference; 
            unsigned char type; 
        } reference; 
    }  _extensionsDictionary;
    struct { 
        char *containerBytes; 
        struct { 
            unsigned int embeddedReference; 
            unsigned char type; 
        } reference; 
    }  _hiddenExtensionsDictionary;
    int  _icloudDotIndex;
    int  _icloudDotType;
    unsigned long long  _inheritMask;
    bool  _isDataROSP;
    int  _leadingDotIndex;
    int  _leadingDotType;
    unsigned short  _mountDepth;
    struct _MDPlistContainer { } * _plist;
    struct { 
        char *containerBytes; 
        struct { 
            unsigned int embeddedReference; 
            unsigned char type; 
        } reference; 
    }  _prefixesDictionary;
    bool  _processExtensions;
    struct { 
        char *containerBytes; 
        struct { 
            unsigned int embeddedReference; 
            unsigned char type; 
        } reference; 
    }  _rootArray;
    struct { unsigned short x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; } * _rootElement;
}

- (id)data;
- (void)dealloc;
- (struct { unsigned long long x1; unsigned long long x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; })filter:(const char *)arg1 allowBundleCheck:(bool)arg2;
- (struct { unsigned long long x1; unsigned long long x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; })filterFullPath:(const char *)arg1;
- (struct { unsigned long long x1; unsigned long long x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; })filterFullPathTestBundle:(const char *)arg1;
- (struct { unsigned long long x1; unsigned long long x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; })filterPartialPath:(const char *)arg1;
- (unsigned long long*)filterSubAuxValues:(struct { unsigned long long x1; unsigned long long x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; })arg1 count:(int*)arg2;
- (struct { unsigned long long x1; unsigned long long x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; })iCloudPath:(const char *)arg1 updateFilter:(struct { unsigned long long x1; unsigned long long x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; })arg2;
- (id)initWithData:(id)arg1;
- (id)initWithMDPlist:(struct _MDPlistContainer { }*)arg1;
- (bool)isDataROSP;
- (struct _MDPlistContainer { }*)plist;
- (unsigned long long)trimBundlePath:(struct { unsigned long long x1; unsigned long long x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; })arg1 path:(const char *)arg2 buffer:(char *)arg3 length:(unsigned long long)arg4;

@end
