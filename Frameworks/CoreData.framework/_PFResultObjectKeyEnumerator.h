
@interface _PFResultObjectKeyEnumerator : NSEnumerator {
    unsigned long long  _index;
    const id * _keys;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    unsigned long long * _referenceItems;
    id  _target;
}

- (void)dealloc;
- (id)initWithArray:(const id*)arg1 forTarget:(id)arg2 withReferenceValues:(unsigned long long*)arg3 andRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (id)nextObject;

@end
