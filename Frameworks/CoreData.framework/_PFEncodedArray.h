
@interface _PFEncodedArray : NSArray {
    int  _cd_rc;
    unsigned int  _count;
    NSData * _sourceData;
}

+ (Class)classForKeyedUnarchiver;

- (bool)_isDeallocating;
- (void)_replaceObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)_tryRetain;
- (const id*)_values;
- (Class)classForCoder;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)mutableCopy;
- (id)objectAtIndex:(unsigned long long)arg1;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end
