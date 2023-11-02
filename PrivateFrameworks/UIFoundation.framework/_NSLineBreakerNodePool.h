
@interface _NSLineBreakerNodePool : NSObject {
    _NSBumpAllocator * _allocator;
    struct _WLNode { struct _WLNode {} *x1; unsigned long long x2; unsigned long long x3; double x4; bool x5; unsigned char x6; unsigned long long x7; struct { struct _NSRange { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_8_1_1; double x_8_1_2; double x_8_1_3; double x_8_1_4; double x_8_1_5; unsigned short x_8_1_6; double x_8_1_7; } x8; } * _freeList;
}

- (void).cxx_destruct;
- (struct _WLNode { struct _WLNode {} *x1; unsigned long long x2; unsigned long long x3; double x4; bool x5; unsigned char x6; unsigned long long x7; struct { struct _NSRange { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_8_1_1; double x_8_1_2; double x_8_1_3; double x_8_1_4; double x_8_1_5; unsigned short x_8_1_6; double x_8_1_7; } x8; }*)allocNode;
- (void)releaseNode:(struct _WLNode { struct _WLNode {} *x1; unsigned long long x2; unsigned long long x3; double x4; bool x5; unsigned char x6; unsigned long long x7; struct { struct _NSRange { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_8_1_1; double x_8_1_2; double x_8_1_3; double x_8_1_4; double x_8_1_5; unsigned short x_8_1_6; double x_8_1_7; } x8; }*)arg1;
- (void)reset;
- (struct _WLNode { struct _WLNode {} *x1; unsigned long long x2; unsigned long long x3; double x4; bool x5; unsigned char x6; unsigned long long x7; struct { struct _NSRange { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_8_1_1; double x_8_1_2; double x_8_1_3; double x_8_1_4; double x_8_1_5; unsigned short x_8_1_6; double x_8_1_7; } x8; }*)retainNode:(struct _WLNode { struct _WLNode {} *x1; unsigned long long x2; unsigned long long x3; double x4; bool x5; unsigned char x6; unsigned long long x7; struct { struct _NSRange { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_8_1_1; double x_8_1_2; double x_8_1_3; double x_8_1_4; double x_8_1_5; unsigned short x_8_1_6; double x_8_1_7; } x8; }*)arg1;

@end
