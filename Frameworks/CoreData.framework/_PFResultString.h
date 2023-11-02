
@interface _PFResultString : _PFAbstractString {
    id  _parentObject;
}

+ (unsigned long long)bufferOffset;

- (bool)_isDeallocating;
- (bool)_tryRetain;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end
