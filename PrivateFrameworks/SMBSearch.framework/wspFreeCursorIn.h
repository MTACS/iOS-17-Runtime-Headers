
@interface wspFreeCursorIn : NSObject {
    unsigned int  _cursorToFree;
    struct { 
        unsigned int msgid; 
        unsigned int status; 
        unsigned int checksum; 
        unsigned int reserved2; 
    }  msghdr;
}

@property unsigned int cursorToFree;

- (unsigned int)cursorToFree;
- (int)encodeBuffer:(id)arg1 BufferOffset:(unsigned int)arg2 BytesWritten:(unsigned int*)arg3;
- (id)initWithCursor:(unsigned int)arg1;
- (void)setCursorToFree:(unsigned int)arg1;

@end
