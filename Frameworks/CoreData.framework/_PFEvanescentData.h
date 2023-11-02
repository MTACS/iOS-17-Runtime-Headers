
@interface _PFEvanescentData : NSData {
    const void * _activeMap;
    NSURL * _fileURL;
    unsigned long long  _length;
    int  _mapRefCount;
    int  _openfd;
}

+ (Class)classForKeyedUnarchiver;

- (const void*)bytes;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)enumerateByteRangesUsingBlock:(id /* block */)arg1;
- (void)getBytes:(void*)arg1;
- (void)getBytes:(void*)arg1 length:(unsigned long long)arg2;
- (void)getBytes:(void*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)hash;
- (id)initWithPath:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)invalidate;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToData:(id)arg1;
- (unsigned long long)length;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
