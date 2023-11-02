
@interface RSKeyframeMeta : NSObject <NSCopying> {
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _cameraPose;
    NSUUID * _identifier;
    unsigned long long  _size;
    double  _timestamp;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;

@end
