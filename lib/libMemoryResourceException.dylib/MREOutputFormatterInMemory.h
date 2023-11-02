
@interface MREOutputFormatterInMemory : NSObject <FPOutputFormatter> {
    NSMutableSet * _addedProcessGroups;
    NSMutableDictionary * _data;
    bool  _isPageSizeSet;
    NSMutableArray * _processes;
    bool  _verbose;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)endAtTime:(id)arg1;
- (void)endProcessHeader:(id)arg1;
- (id)init;
- (void)printGlobalAuxData:(id)arg1;
- (void)printProcessAuxData:(id)arg1 forProcess:(id)arg2;
- (void)printProcessCategories:(id)arg1 total:(const struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned int x6; }*)arg2 forProcess:(id)arg3;
- (void)printProcessHeader:(id)arg1;
- (void)printProcessTotal:(id)arg1 forProcess:(id)arg2;
- (void)printProcessesWithWarnings:(id)arg1 processesWithErrors:(id)arg2 globalErrors:(id)arg3;
- (void)printSharedCache:(id)arg1 categories:(id)arg2 sharedWith:(id)arg3 total:(const struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned int x6; }*)arg4;
- (void)printSharedCategories:(id)arg1 sharedWith:(id)arg2 forProcess:(id)arg3 hasProcessView:(bool)arg4 total:(const struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned int x6; }*)arg5;
- (void)printSummaryCategories:(id)arg1 total:(const struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned int x6; }*)arg2 hadErrors:(bool)arg3;
- (void)printVmmapLikeOutputForProcess:(id)arg1 regions:(id)arg2;

@end
