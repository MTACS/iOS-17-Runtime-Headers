
@interface NSPByteParser : NSObject <NSCopying> {
    const char * _bytes;
    const char * _cursor;
    NSData * _data;
    unsigned long long  _offset;
}

@property (readonly) const char *bytes;
@property const char *cursor;
@property (readonly) NSData *data;
@property unsigned long long offset;

- (void).cxx_destruct;
- (bool)advanceBy:(unsigned long long)arg1 andCopyTo:(void*)arg2;
- (const char *)bytes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (const char *)cursor;
- (id)data;
- (id)initWithData:(id)arg1;
- (unsigned long long)offset;
- (unsigned short)parse16Bits:(bool*)arg1;
- (unsigned int)parse32Bits:(bool*)arg1;
- (unsigned char)parse8Bits:(bool*)arg1;
- (id)parseAddressWithFamily:(unsigned char)arg1;
- (const char *)parseBytes:(unsigned long long)arg1;
- (id)parseDomainName;
- (void)setCursor:(const char *)arg1;
- (void)setOffset:(unsigned long long)arg1;

@end
