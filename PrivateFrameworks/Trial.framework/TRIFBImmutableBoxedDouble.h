
@interface TRIFBImmutableBoxedDouble : TRIFBBoxedDouble <AFBBufferReferencing> {
    AFBBufRef * _br;
    const struct BoxedDouble { double x1; } * _ptr;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (const struct BoxedDouble { double x1; }*)cppPointer;
- (id)initWithBufRef:(id)arg1 rawPointer:(const void*)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (double)val;

@end
