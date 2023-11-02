
@interface MXMInstrument : NSObject {
    struct { unsigned long long x1; unsigned long long x2; unsigned int x3; unsigned long long x4; bool x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; void *x10; void *x11; struct { unsigned long long x_12_1_1; unsigned long long x_12_1_2; } x12; struct { unsigned long long x_13_1_1; unsigned long long x_13_1_2; } x13; unsigned long long x14; void *x15; void *x16; void *x17; void **x18; bool x19; void *x20; double x21; double x22; } * _currentIteration;
    bool  _didQuiesce;
    NSArray * _instrumentals;
    NSObject<OS_dispatch_queue> * _instrumentalsQueue;
    NSData * _perfMetricsPerfdata;
    NSString * _performanceTraceFileSandboxExtensionToken;
    NSURL * _performanceTraceFileURL;
}

@property bool active;
@property struct { unsigned long long x1; unsigned long long x2; unsigned int x3; unsigned long long x4; bool x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; void *x10; void *x11; struct { unsigned long long x_12_1_1; unsigned long long x_12_1_2; } x12; struct { unsigned long long x_13_1_1; unsigned long long x_13_1_2; } x13; unsigned long long x14; void *x15; void *x16; void *x17; void **x18; bool x19; void *x20; double x21; double x22; }*currentIteration;
@property (readonly) bool didQuiesce;
@property (nonatomic, readonly) NSArray *instrumentals;
@property (readonly) NSObject<OS_dispatch_queue> *instrumentalsQueue;
@property (readonly) NSData *perfMetricsPerfdata;
@property (readonly) NSString *performanceTraceFileSandboxExtensionToken;
@property (readonly) NSURL *performanceTraceFileURL;

+ (id)activeInstrument;
+ (id)instrumentWithInstrumentals:(id)arg1;
+ (void)load;

- (void).cxx_destruct;
- (id)_defaultValueWithOption:(id)arg1;
- (id)_makeInstrumentalsForIteration:(id)arg1 shouldCopy:(bool)arg2;
- (void)_makePerfDataFromMXMResults:(id)arg1 testName:(id)arg2;
- (void)_prepareIteration:(struct { unsigned long long x1; unsigned long long x2; unsigned int x3; unsigned long long x4; bool x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; void *x10; void *x11; struct { unsigned long long x_12_1_1; unsigned long long x_12_1_2; } x12; struct { unsigned long long x_13_1_1; unsigned long long x_13_1_2; } x13; unsigned long long x14; void *x15; void *x16; void *x17; void **x18; bool x19; void *x20; double x21; double x22; }*)arg1 options:(id)arg2 instrumentals:(id)arg3 errors:(id)arg4;
- (void)_setupAndRunWithIteration:(struct { unsigned long long x1; unsigned long long x2; unsigned int x3; unsigned long long x4; bool x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; void *x10; void *x11; struct { unsigned long long x_12_1_1; unsigned long long x_12_1_2; } x12; struct { unsigned long long x_13_1_1; unsigned long long x_13_1_2; } x13; unsigned long long x14; void *x15; void *x16; void *x17; void **x18; bool x19; void *x20; double x21; double x22; }*)arg1 spawnThread:(bool)arg2 attrs:(struct _opaque_pthread_attr_t { long long x1; BOOL x2[56]; }*)arg3 pthread:(struct _opaque_pthread_t {}**)arg4 returnCode:(unsigned long long*)arg5;
- (id)_transitionWithState:(unsigned long long)arg1 iteration:(const struct { unsigned long long x1; unsigned long long x2; unsigned int x3; unsigned long long x4; bool x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; void *x10; void *x11; struct { unsigned long long x_12_1_1; unsigned long long x_12_1_2; } x12; struct { unsigned long long x_13_1_1; unsigned long long x_13_1_2; } x13; unsigned long long x14; void *x15; void *x16; void *x17; void **x18; bool x19; void *x20; double x21; double x22; }*)arg2 instrumentals:(id)arg3;
- (id)_validOptionKeys;
- (id)_valueWithOption:(id)arg1 userOptions:(id)arg2;
- (bool)active;
- (struct { unsigned long long x1; unsigned long long x2; unsigned int x3; unsigned long long x4; bool x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; void *x10; void *x11; struct { unsigned long long x_12_1_1; unsigned long long x_12_1_2; } x12; struct { unsigned long long x_13_1_1; unsigned long long x_13_1_2; } x13; unsigned long long x14; void *x15; void *x16; void *x17; void **x18; bool x19; void *x20; double x21; double x22; }*)currentIteration;
- (void)dealloc;
- (bool)didQuiesce;
- (id)initWithInstrumentals:(id)arg1;
- (id)instrumentals;
- (id)instrumentalsQueue;
- (id)measureAutomatically:(unsigned long long)arg1 block:(id /* block */)arg2;
- (id)measureAutomatically:(unsigned long long)arg1 options:(id)arg2 block:(id /* block */)arg3;
- (id)measureBlock:(id /* block */)arg1;
- (id)measureWithOptions:(id)arg1 block:(id /* block */)arg2;
- (id)perfMetricsPerfdata;
- (id)performanceTraceFileSandboxExtensionToken;
- (id)performanceTraceFileURL;
- (void)setActive:(bool)arg1;
- (void)setCurrentIteration:(struct { unsigned long long x1; unsigned long long x2; unsigned int x3; unsigned long long x4; bool x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; void *x10; void *x11; struct { unsigned long long x_12_1_1; unsigned long long x_12_1_2; } x12; struct { unsigned long long x_13_1_1; unsigned long long x_13_1_2; } x13; unsigned long long x14; void *x15; void *x16; void *x17; void **x18; bool x19; void *x20; double x21; double x22; }*)arg1;
- (void)start;
- (bool)startWithError:(id*)arg1;
- (id)stop;
- (id)stopWithError:(id*)arg1;

@end
