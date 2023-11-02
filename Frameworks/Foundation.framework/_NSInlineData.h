
@interface _NSInlineData : NSData {
    unsigned short  _length;
}

+ (id)_allocWithExtraBytes:(unsigned long long)arg1;

- (id)_createDispatchData;
- (bool)_isCompact;
- (bool)_providesConcreteBacking;
- (const void*)bytes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)length;

@end
