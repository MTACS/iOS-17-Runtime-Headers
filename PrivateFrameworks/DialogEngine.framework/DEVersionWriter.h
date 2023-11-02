
@interface DEVersionWriter : NSObject <DEWriter> {
    struct CC_SHA256state_st { 
        unsigned int count[2]; 
        unsigned int hash[8]; 
        unsigned int wbuf[16]; 
    }  _context;
    NSData * _version;
}

@property (nonatomic) struct CC_SHA256state_st { unsigned int x1[2]; unsigned int x2[8]; unsigned int x3[16]; } context;
@property (nonatomic, retain) NSData *version;

+ (id)dataWithHexString:(id)arg1;
+ (id)getURLFor:(id)arg1 version:(id)arg2 base:(id)arg3;
+ (bool)prepareDirsFor:(id)arg1;
+ (id)versionData:(id)arg1;
+ (id)versionFile:(id)arg1;
+ (id)versionString:(id)arg1;
+ (id)versionToString:(id)arg1;

- (void).cxx_destruct;
- (void)close;
- (struct CC_SHA256state_st { unsigned int x1[2]; unsigned int x2[8]; unsigned int x3[16]; })context;
- (id)init;
- (void)setContext:(struct CC_SHA256state_st { unsigned int x1[2]; unsigned int x2[8]; unsigned int x3[16]; })arg1;
- (void)setVersion:(id)arg1;
- (id)version;
- (void)writeData:(id)arg1;

@end
