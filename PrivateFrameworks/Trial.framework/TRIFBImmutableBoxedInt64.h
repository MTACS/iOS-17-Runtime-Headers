
@interface TRIFBImmutableBoxedInt64 : TRIFBBoxedInt64 <AFBBufferReferencing> {
    AFBBufRef * _br;
    const struct BoxedInt64 { long long x1; } * _ptr;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (const struct BoxedInt64 { long long x1; }*)cppPointer;
- (id)initWithBufRef:(id)arg1 rawPointer:(const void*)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (long long)val;

@end
