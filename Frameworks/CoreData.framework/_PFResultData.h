
@interface _PFResultData : NSData {
    int  _cd_rc;
    unsigned int  _length;
    id  _parentObject;
}

+ (Class)classForKeyedUnarchiver;

- (const void*)bytes;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)getBytes:(void*)arg1 length:(unsigned long long)arg2;
- (void)getBytes:(void*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqualToData:(id)arg1;
- (unsigned long long)length;
- (id)mutableCopy;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfData:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (void)setParentObject:(id)arg1;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)writeToFile:(id)arg1 atomically:(bool)arg2;
- (bool)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (bool)writeToURL:(id)arg1 atomically:(bool)arg2;
- (bool)writeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;

@end
