
@interface OSALog : NSObject {
    NSString * _bugType;
    bool  _deleteOnRetire;
    NSString * _filepath;
    NSDictionary * _metaData;
    NSString * _oldFilePath;
    bool  _preserveFiles;
    struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; } * _stream;
}

@property (readonly) NSString *bugType;
@property bool deleteOnRetire;
@property (readonly) NSString *filepath;
@property (readonly) NSDictionary *metaData;
@property (copy) NSString *oldFilePath;
@property (readonly) struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*stream;

// Image: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics

+ (id)additionalRootsInstalled;
+ (void)cleanupForUser:(id)arg1;
+ (void)cleanupRetired:(id)arg1;
+ (id)commonFieldsForBody:(id)arg1;
+ (id)createForSubmission:(id)arg1 metadata:(id)arg2 options:(id)arg3 error:(id*)arg4 writing:(id /* block */)arg5;
+ (void)createRetiredDirectory:(id)arg1;
+ (bool)isDataVaultEnabled;
+ (void)iterateLogsWithOptions:(id)arg1 usingBlock:(id /* block */)arg2;
+ (id)locallyCreateForSubmission:(id)arg1 metadata:(id)arg2 options:(id)arg3 error:(id*)arg4 writing:(id /* block */)arg5;
+ (id)logObjForBugType:(id)arg1;
+ (void)markDescriptor:(int)arg1 forKey:(id)arg2 withObj:(id)arg3;
+ (void)markDescriptor:(int)arg1 withPairs:(id)arg2 andOptions:(id)arg3;
+ (void)markFile:(id)arg1 withKey:(const char *)arg2 value:(const char *)arg3;
+ (void)markPurgeableLevel:(unsigned long long)arg1 path:(id)arg2;
+ (void)purgeLogs:(id)arg1;
+ (bool)randomlySelectForRetention:(id)arg1;
+ (unsigned int)scanLogs:(id)arg1 from:(id)arg2;
+ (unsigned int)scanLogs:(id)arg1 from:(id)arg2 options:(id)arg3;
+ (id)scanProxies:(id)arg1;

- (void).cxx_destruct;
- (id)bugType;
- (void)closeFileStream;
- (void)dealloc;
- (bool)deleteOnRetire;
- (id)description;
- (id)filepath;
- (id)initWithFilepath:(id)arg1 type:(id)arg2;
- (id)initWithPath:(id)arg1 forRouting:(id)arg2 options:(id)arg3;
- (id)initWithPath:(id)arg1 forRouting:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (id)initWithPath:(id)arg1 forRouting:(id)arg2 usingConfig:(id)arg3 options:(id)arg4 error:(id*)arg5;
- (id)initWithPath:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)initWithType:(id)arg1 filepath:(id)arg2 metadata:(id)arg3 options:(id)arg4 at:(double)arg5 error:(id*)arg6;
- (bool)isReasonableSize:(long long)arg1 forRouting:(id)arg2;
- (void)markWithKey:(const char *)arg1 value:(const char *)arg2;
- (id)metaData;
- (id)oldFilePath;
- (void)rename:(id)arg1;
- (bool)retire:(const char *)arg1;
- (void)setDeleteOnRetire:(bool)arg1;
- (void)setOldFilePath:(id)arg1;
- (struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)stream;

// Image: /System/Library/PrivateFrameworks/OSAnalyticsPrivate.framework/OSAnalyticsPrivate

- (id)getFilenames;

@end
