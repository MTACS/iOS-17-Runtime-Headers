
@interface PLJournalChecksumContext : NSObject {
    struct CC_SHA256state_st { 
        unsigned int count[2]; 
        unsigned int hash[8]; 
        unsigned int wbuf[16]; 
    }  _context;
    NSString * _finalizedChecksum;
}

- (void).cxx_destruct;
- (id)finalizedChecksum;
- (id)init;
- (void)update:(id)arg1;

@end
