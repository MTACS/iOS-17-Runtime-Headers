
@interface RemoteBundleLoader : NSObject {
    bool  _attemptedSymbolLookup;
    bool  _exited;
    NSString * _helperLaunchPath;
    NSObject<OS_dispatch_queue> * _injectionQueue;
    NSError * _missingSymbolError;
    id /* block */  _releaseOpaqueSymbolicator;
    struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; unsigned long long x17; } * _remoteFunctionAddresses;
    NSObject<OS_dispatch_queue> * _symbolLookupQueue;
    int  _targetPid;
    unsigned int  _targetTask;
}

- (void).cxx_destruct;
- (void)_lookupFunctionAddresses:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg1;
- (void)dealloc;
- (id)initWithTask:(unsigned int)arg1;
- (void)scheduleLibraryLoad:(id)arg1 calling:(id)arg2 arguments:(id)arg3 callback:(id /* block */)arg4;

@end
