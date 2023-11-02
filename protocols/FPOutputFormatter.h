
@protocol FPOutputFormatter <NSObject>

@required

- (void)endAtTime:(FPTime *)arg1;
- (void)endProcessHeader:(FPProcess *)arg1;
- (void)printGlobalAuxData:(NSDictionary *)arg1;
- (void)printProcessAuxData:(NSDictionary *)arg1 forProcess:(FPProcess *)arg2;
- (void)printProcessCategories:(NSDictionary *)arg1 total:(const struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned int x6; }*)arg2 forProcess:(FPProcess *)arg3;
- (void)printProcessHeader:(FPProcess *)arg1;
- (void)printProcessTotal:(NSNumber *)arg1 forProcess:(FPProcess *)arg2;
- (void)printProcessesWithWarnings:(NSArray *)arg1 processesWithErrors:(NSArray *)arg2 globalErrors:(NSArray *)arg3;
- (void)printSharedCache:(FPSharedCache *)arg1 categories:(NSDictionary *)arg2 sharedWith:(FPProcessGroup *)arg3 total:(const struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned int x6; }*)arg4;
- (void)printSharedCategories:(NSDictionary *)arg1 sharedWith:(FPProcessGroup *)arg2 forProcess:(FPProcess *)arg3 hasProcessView:(bool)arg4 total:(const struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned int x6; }*)arg5;
- (void)printSummaryCategories:(NSDictionary *)arg1 total:(const struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned int x6; }*)arg2 hadErrors:(bool)arg3;

@optional

- (void)close;
- (void)configureForMultipleOutputs;
- (void)printHeader;
- (void)printVmmapLikeOutputForProcess:(FPProcess *)arg1 regions:(NSArray *)arg2;
- (void)startAtTime:(FPTime *)arg1;

@end
