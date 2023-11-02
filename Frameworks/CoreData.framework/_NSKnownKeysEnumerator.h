
@interface _NSKnownKeysEnumerator : NSEnumerator {
    unsigned long long  _flags;
    unsigned long long  _index;
    const id * _list;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    const id * _referenceItems;
    id  _target;
}

- (void)dealloc;
- (id)nextObject;

@end
