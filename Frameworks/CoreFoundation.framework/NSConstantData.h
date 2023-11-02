
@interface NSConstantData : NSData {
    const char * _bytes;
    unsigned long long  _length;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)new;

- (bool)_copyWillRetain;
- (bool)_isCompact;
- (bool)_isDeallocating;
- (bool)_providesConcreteBacking;
- (bool)_tryRetain;
- (id)autorelease;
- (const void*)bytes;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2 copy:(bool)arg3 deallocator:(id /* block */)arg4;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 freeWhenDone:(bool)arg3;
- (id)initWithData:(id)arg1;
- (unsigned long long)length;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end
