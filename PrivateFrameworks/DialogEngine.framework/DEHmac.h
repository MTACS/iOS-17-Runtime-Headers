
@interface DEHmac : NSObject <DEWriter> {
    struct { 
        unsigned int ctx[96]; 
    }  _context;
    NSData * _hmac;
}

@property (nonatomic) struct { unsigned int x1[96]; } context;
@property (nonatomic, retain) NSData *hmac;

+ (bool)verify:(id)arg1 computed:(id)arg2;

- (void).cxx_destruct;
- (void)close;
- (struct { unsigned int x1[96]; })context;
- (id)hmac;
- (id)initWithKey:(id)arg1 iv:(id)arg2;
- (void)setContext:(struct { unsigned int x1[96]; })arg1;
- (void)setHmac:(id)arg1;
- (void)writeData:(id)arg1;

@end
