
@interface wspDisconnectIn : NSObject {
    struct { 
        unsigned int msgid; 
        unsigned int status; 
        unsigned int checksum; 
        unsigned int reserved2; 
    }  msghdr;
}

- (int)encodeBuffer:(id)arg1 BufferOffset:(unsigned int)arg2 BytesWritten:(unsigned int*)arg3;
- (id)init;

@end
