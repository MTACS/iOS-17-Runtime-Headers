
@interface DOMCharacterData : DOMNode

@property (copy) NSString *data;
@property (readonly) unsigned int length;

- (void)appendData:(id)arg1;
- (id)data;
- (void)deleteData:(unsigned int)arg1 :(unsigned int)arg2;
- (void)deleteData:(unsigned int)arg1 length:(unsigned int)arg2;
- (void)insertData:(unsigned int)arg1 :(id)arg2;
- (void)insertData:(unsigned int)arg1 data:(id)arg2;
- (unsigned int)length;
- (id)nextElementSibling;
- (id)previousElementSibling;
- (void)remove;
- (void)replaceData:(unsigned int)arg1 :(unsigned int)arg2 :(id)arg3;
- (void)replaceData:(unsigned int)arg1 length:(unsigned int)arg2 data:(id)arg3;
- (void)setData:(id)arg1;
- (id)substringData:(unsigned int)arg1 :(unsigned int)arg2;
- (id)substringData:(unsigned int)arg1 length:(unsigned int)arg2;

@end
