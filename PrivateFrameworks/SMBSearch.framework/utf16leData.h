
@interface utf16leData : NSObject {
    unsigned int  _byteCount;
    unsigned int  _charCount;
    NSData * _datab;
}

@property unsigned int byteCount;
@property unsigned int charCount;
@property (retain) NSData *datab;

- (void).cxx_destruct;
- (unsigned int)byteCount;
- (unsigned int)charCount;
- (id)datab;
- (id)initWithStr:(id)arg1;
- (void)setByteCount:(unsigned int)arg1;
- (void)setCharCount:(unsigned int)arg1;
- (void)setDatab:(id)arg1;

@end
