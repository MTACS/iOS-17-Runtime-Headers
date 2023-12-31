
@interface MBDigestSHA256 : MBDigest {
    struct CC_SHA256state_st { 
        unsigned int count[2]; 
        unsigned int hash[8]; 
        unsigned int wbuf[16]; 
    }  _context;
}

- (id)final;
- (void)finalWithBytes:(void*)arg1 length:(unsigned long long)arg2;
- (id)init;
- (void)updateWithBytes:(const void*)arg1 length:(unsigned long long)arg2;

@end
