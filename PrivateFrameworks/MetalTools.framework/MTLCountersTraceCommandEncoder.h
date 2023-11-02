
@interface MTLCountersTraceCommandEncoder : NSObject {
    unsigned long long  _flags;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _segment;
    struct BinaryBuffer { int (**x1)(); struct StreamBuffer { char *x_2_1_1; char *x_2_1_2; char *x_2_1_3; } x2; struct mach_timebase_info { unsigned int x_3_1_1; unsigned int x_3_1_2; } x3; } * _stream;
    unsigned long long  _timer;
}

@property (nonatomic, readonly) unsigned long long flags;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } segment;

- (void)endEncoding;
- (unsigned long long)flags;
- (id)init:(struct BinaryBuffer { int (**x1)(); struct StreamBuffer { char *x_2_1_1; char *x_2_1_2; char *x_2_1_3; } x2; struct mach_timebase_info { unsigned int x_3_1_1; unsigned int x_3_1_2; } x3; }*)arg1 flags:(unsigned long long)arg2;
- (void)insertDebugSignpost:(id)arg1;
- (void)popDebugGroup;
- (void)pushDebugGroup:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })segment;
- (void)setLabel:(id)arg1;

@end
