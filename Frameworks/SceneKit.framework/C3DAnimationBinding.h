
@interface C3DAnimationBinding : NSObject {
    struct __C3DModelTarget { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; void *x2; void *x3; short x4; BOOL x5; unsigned char x6; unsigned char x7; bool x8; int (*x9)(); int (*x10)(); } * _destination;
    void * _owner;
    struct __C3DModelTarget { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; void *x2; void *x3; short x4; BOOL x5; unsigned char x6; unsigned char x7; bool x8; int (*x9)(); int (*x10)(); } * _source;
    id /* block */  _valueTransformer;
}

- (void)dealloc;

@end
