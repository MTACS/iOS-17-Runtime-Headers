
@interface NEByteParser : NSObject <NSCopying> {
    const char * _bytes;
    const char * _cursor;
    NSData * _data;
    unsigned long long  _offset;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
