
@interface TRIFBImmutableBoxedBool : TRIFBBoxedBool <AFBBufferReferencing> {
    AFBBufRef * _br;
    const struct BoxedBool { unsigned char x1; } * _ptr;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (const struct BoxedBool { unsigned char x1; }*)cppPointer;
- (id)initWithBufRef:(id)arg1 rawPointer:(const void*)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)val;

@end
