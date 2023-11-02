
@interface ktrace.ProviderList : NSObject {
    void machine;
    void providers;
}

- (void).cxx_destruct;
- (void)configurePostprocessingWithSession:(void*)arg1;
- (void)configureWithSession:(void*)arg1;
- (bool)containsWithName:(id)arg1;
- (void)didEndTracingWithFile:(void*)arg1;
- (void)didStartTracingWithFile:(void*)arg1;
- (id)init;
- (id)initWithMachine:(struct ktrace_machine { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; char *x6; char *x7; char *x8; char *x9; char *x10; char *x11; char *x12; char *x13; char *x14; char *x15; char *x16; unsigned int *x17; unsigned long long *x18; unsigned int *x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; int x28; int x29; int x30; bool x31; bool x32; bool x33; bool x34; bool x35; struct __CFDictionary {} *x36; }*)arg1;
- (void)postprocessingCompleteWithFile:(void*)arg1;
- (bool)shouldStartTracingWithConfiguration:(struct ktrace_config { char *x1; char *x2; char *x3; struct { char *x_4_1_1; int *x_4_1_2; unsigned long long *x_4_1_3; unsigned long long *x_4_1_4; unsigned long long x_4_1_5; unsigned int x_4_1_6; unsigned int x_4_1_7; unsigned int x_4_1_8; bool x_4_1_9; bool x_4_1_10; bool x_4_1_11; } x4; struct { unsigned long long *x_5_1_1; unsigned long long *x_5_1_2; int *x_5_1_3; unsigned int *x_5_1_4; unsigned long long *x_5_1_5; char *x_5_1_6; unsigned int x_5_1_7; unsigned int x_5_1_8; unsigned int x_5_1_9; unsigned int x_5_1_10; int x_5_1_11; unsigned int x_5_1_12; unsigned int x_5_1_13; unsigned long long x_5_1_14; unsigned int x_5_1_15; unsigned long long x_5_1_16; unsigned int x_5_1_17; } x5; struct { unsigned long long *x_6_1_1; unsigned long long *x_6_1_2; unsigned int *x_6_1_3; unsigned int x_6_1_4; unsigned long long x_6_1_5; unsigned long long x_6_1_6; unsigned int x_6_1_7; unsigned int x_6_1_8; } x6; int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned long long x11; }*)arg1 error:(id*)arg2;
- (void)willEndTracingWithFile:(void*)arg1;
- (void)willFinishWithCatalog:(void*)arg1 file:(void*)arg2;
- (void)willStartTracingWithFile:(void*)arg1;

@end
