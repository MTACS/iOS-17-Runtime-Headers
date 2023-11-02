
@interface UniqueAnimationKey : NSString {
    unsigned long long  _key;
}

- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (bool)getBytes:(void*)arg1 maxLength:(unsigned long long)arg2 usedLength:(unsigned long long*)arg3 encoding:(unsigned long long)arg4 options:(unsigned long long)arg5 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6 remainingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg7;
- (id)initWithKey:(unsigned long long)arg1;
- (unsigned long long)length;

@end
