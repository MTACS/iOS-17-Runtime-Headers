
@interface CaptureMTLLibrary : NSObject <CaptureMTLObject, MTLLibrarySPI> {
    <MTLLibrarySPI> * _baseObject;
    CaptureMTLDevice * _captureDevice;
    NSArray * _dagFunctions;
    struct GTTraceContext { struct _opaque_pthread_mutex_t { long long x_1_1_1; BOOL x_1_1_2[56]; } x1; struct GTTraceStore {} *x2; _Atomic unsigned long long x3; _Atomic unsigned long long x4; struct apr_hash_t {} *x5; union { /* Warning: Unrecognized filer type: 'F' using 'void*' */ void*x_6_1_1; const void*x_6_1_2; void*x_6_1_3; inout out double x_6_1_4; void*x_6_1_5; } *x6; _Atomic int x7; BOOL x8[4]; struct GTTraceStream {} *x9; _Atomic bool x10; BOOL x11[7]; struct GTTraceStoreList { union { void*x_1_2_1; void*x_1_2_2; void*x_1_2_3; const void*x_1_2_4; BOOL x_1_2_5; void*x_1_2_6; unsigned short x_1_2_7; void*x_1_2_8; out const void*x_1_2_9; inout out double x_1_2_10; void*x_1_2_11; } *x_12_1_1; union { void*x_2_2_1; void*x_2_2_2; void*x_2_2_3; const void*x_2_2_4; BOOL x_2_2_5; void*x_2_2_6; unsigned short x_2_2_7; void*x_2_2_8; out const void*x_2_2_9; inout out double x_2_2_10; void*x_2_2_11; } *x_12_1_2; _Atomic int x_12_1_3; _Atomic int x_12_1_4; } x12[16]; } * _traceContext;
    struct GTTraceStream { unsigned long long x1; unsigned long long x2; unsigned long long x3; struct GTTraceMemPool {} *x4; struct GTTraceStoreList { union { /* Warning: Unrecognized filer type: 'G' using 'void*' */ void*x_1_2_1; void*x_1_2_2; void*x_1_2_3; const void*x_1_2_4; BOOL x_1_2_5; void*x_1_2_6; unsigned short x_1_2_7; void*x_1_2_8; out const void*x_1_2_9; inout out double x_1_2_10; void*x_1_2_11; } *x_5_1_1; union { void*x_2_2_1; void*x_2_2_2; void*x_2_2_3; const void*x_2_2_4; BOOL x_2_2_5; void*x_2_2_6; unsigned short x_2_2_7; void*x_2_2_8; out const void*x_2_2_9; inout out double x_2_2_10; void*x_2_2_11; } *x_5_1_2; _Atomic int x_5_1_3; _Atomic int x_5_1_4; } x5; _Atomic unsigned long long x6; } * _traceStream;
    MTLCompileOptions * options;
}

@property (readonly) <MTLLibrary> *baseObject;
@property (readonly) NSData *bitcodeData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) NSArray *externFunctionNames;
@property (readonly) NSArray *functionNames;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *installName;
@property (copy) NSString *label;
@property (readonly, copy) NSUUID *libraryIdentifier;
@property (nonatomic, copy) MTLCompileOptions *options;
@property (copy) NSString *overrideTriple;
@property (nonatomic) bool shaderValidationEnabled;
@property (readonly) unsigned long long streamReference;
@property (readonly) Class superclass;
@property (readonly) struct GTTraceContext { struct _opaque_pthread_mutex_t { long long x_1_1_1; BOOL x_1_1_2[56]; } x1; struct GTTraceStore {} *x2; _Atomic unsigned long long x3; _Atomic unsigned long long x4; struct apr_hash_t {} *x5; union { /* Warning: Unrecognized filer type: 'F' using 'void*' */ void*x_6_1_1; const void*x_6_1_2; void*x_6_1_3; inout out double x_6_1_4; void*x_6_1_5; } *x6; _Atomic int x7; BOOL x8[4]; struct GTTraceStream {} *x9; _Atomic bool x10; BOOL x11[7]; struct GTTraceStoreList { union { void*x_1_2_1; void*x_1_2_2; void*x_1_2_3; const void*x_1_2_4; BOOL x_1_2_5; void*x_1_2_6; unsigned short x_1_2_7; void*x_1_2_8; out const void*x_1_2_9; inout out double x_1_2_10; void*x_1_2_11; } *x_12_1_1; union { void*x_2_2_1; void*x_2_2_2; void*x_2_2_3; const void*x_2_2_4; BOOL x_2_2_5; void*x_2_2_6; unsigned short x_2_2_7; void*x_2_2_8; out const void*x_2_2_9; inout out double x_2_2_10; void*x_2_2_11; } *x_12_1_2; _Atomic int x_12_1_3; _Atomic int x_12_1_4; } x12[16]; }*traceContext;
@property (readonly) struct GTTraceStream { unsigned long long x1; unsigned long long x2; unsigned long long x3; struct GTTraceMemPool {} *x4; struct GTTraceStoreList { union { /* Warning: Unrecognized filer type: 'G' using 'void*' */ void*x_1_2_1; void*x_1_2_2; void*x_1_2_3; const void*x_1_2_4; BOOL x_1_2_5; void*x_1_2_6; unsigned short x_1_2_7; void*x_1_2_8; out const void*x_1_2_9; inout out double x_1_2_10; void*x_1_2_11; } *x_5_1_1; union { void*x_2_2_1; void*x_2_2_2; void*x_2_2_3; const void*x_2_2_4; BOOL x_2_2_5; void*x_2_2_6; unsigned short x_2_2_7; void*x_2_2_8; out const void*x_2_2_9; inout out double x_2_2_10; void*x_2_2_11; } *x_5_1_2; _Atomic int x_5_1_3; _Atomic int x_5_1_4; } x5; _Atomic unsigned long long x6; }*traceStream;
@property (readonly) long long type;

- (void).cxx_destruct;
- (id)baseObject;
- (id)bitcodeData;
- (bool)conformsToProtocol:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)device;
- (id)externFunctionNames;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)functionNames;
- (id)initWithBaseObject:(id)arg1 captureDevice:(id)arg2;
- (id)initWithBaseObject:(id)arg1 captureDevice:(id)arg2 captureDAGFunctions:(id)arg3;
- (id)installName;
- (id)label;
- (id)libraryIdentifier;
- (id)newExternFunctionWithName:(id)arg1;
- (void)newFunctionWithDescriptor:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)newFunctionWithDescriptor:(id)arg1 destinationArchive:(id)arg2 error:(id*)arg3;
- (id)newFunctionWithDescriptor:(id)arg1 error:(id*)arg2;
- (id)newFunctionWithName:(id)arg1;
- (void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 error:(id*)arg3;
- (void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 pipelineLibrary:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 pipelineLibrary:(id)arg3 error:(id*)arg4;
- (void)newIntersectionFunctionWithDescriptor:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)newIntersectionFunctionWithDescriptor:(id)arg1 error:(id*)arg2;
- (id)options;
- (id)originalObject;
- (id)overrideTriple;
- (bool)respondsToSelector:(SEL)arg1;
- (bool)serializeToURL:(id)arg1 error:(id*)arg2;
- (void)setLabel:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setOverrideTriple:(id)arg1;
- (void)setShaderValidationEnabled:(bool)arg1;
- (bool)shaderValidationEnabled;
- (unsigned long long)streamReference;
- (void)touch;
- (struct GTTraceContext { struct _opaque_pthread_mutex_t { long long x_1_1_1; BOOL x_1_1_2[56]; } x1; struct GTTraceStore {} *x2; _Atomic unsigned long long x3; _Atomic unsigned long long x4; struct apr_hash_t {} *x5; union { /* Warning: Unrecognized filer type: 'F' using 'void*' */ void*x_6_1_1; const void*x_6_1_2; void*x_6_1_3; inout out double x_6_1_4; void*x_6_1_5; } *x6; _Atomic int x7; BOOL x8[4]; struct GTTraceStream {} *x9; _Atomic bool x10; BOOL x11[7]; struct GTTraceStoreList { union { void*x_1_2_1; void*x_1_2_2; void*x_1_2_3; const void*x_1_2_4; BOOL x_1_2_5; void*x_1_2_6; unsigned short x_1_2_7; void*x_1_2_8; out const void*x_1_2_9; inout out double x_1_2_10; void*x_1_2_11; } *x_12_1_1; union { void*x_2_2_1; void*x_2_2_2; void*x_2_2_3; const void*x_2_2_4; BOOL x_2_2_5; void*x_2_2_6; unsigned short x_2_2_7; void*x_2_2_8; out const void*x_2_2_9; inout out double x_2_2_10; void*x_2_2_11; } *x_12_1_2; _Atomic int x_12_1_3; _Atomic int x_12_1_4; } x12[16]; }*)traceContext;
- (struct GTTraceStream { unsigned long long x1; unsigned long long x2; unsigned long long x3; struct GTTraceMemPool {} *x4; struct GTTraceStoreList { union { /* Warning: Unrecognized filer type: 'G' using 'void*' */ void*x_1_2_1; void*x_1_2_2; void*x_1_2_3; const void*x_1_2_4; BOOL x_1_2_5; void*x_1_2_6; unsigned short x_1_2_7; void*x_1_2_8; out const void*x_1_2_9; inout out double x_1_2_10; void*x_1_2_11; } *x_5_1_1; union { void*x_2_2_1; void*x_2_2_2; void*x_2_2_3; const void*x_2_2_4; BOOL x_2_2_5; void*x_2_2_6; unsigned short x_2_2_7; void*x_2_2_8; out const void*x_2_2_9; inout out double x_2_2_10; void*x_2_2_11; } *x_5_1_2; _Atomic int x_5_1_3; _Atomic int x_5_1_4; } x5; _Atomic unsigned long long x6; }*)traceStream;
- (long long)type;

@end
