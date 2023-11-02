
@interface TPHashBuilder : NSObject {
    long long  _algo;
    struct CC_SHA256state_st { 
        unsigned int count[2]; 
        unsigned int hash[8]; 
        unsigned int wbuf[16]; 
    }  _ctxSHA256;
    struct CC_SHA512state_st { 
        unsigned long long count[2]; 
        unsigned long long hash[8]; 
        unsigned long long wbuf[16]; 
    }  _ctxSHA512;
}

@property (nonatomic) long long algo;
@property (nonatomic) struct CC_SHA256state_st { unsigned int x1[2]; unsigned int x2[8]; unsigned int x3[16]; } ctxSHA256;
@property (nonatomic) struct CC_SHA512state_st { unsigned long long x1[2]; unsigned long long x2[8]; unsigned long long x3[16]; } ctxSHA512;

+ (long long)algoOfHash:(id)arg1;
+ (id)hashWithAlgo:(long long)arg1 ofBytes:(const void*)arg2 len:(unsigned long long)arg3;
+ (id)hashWithAlgo:(long long)arg1 ofData:(id)arg2;

- (long long)algo;
- (struct CC_SHA256state_st { unsigned int x1[2]; unsigned int x2[8]; unsigned int x3[16]; })ctxSHA256;
- (struct CC_SHA512state_st { unsigned long long x1[2]; unsigned long long x2[8]; unsigned long long x3[16]; })ctxSHA512;
- (id)finalHash;
- (id)init;
- (id)initWithAlgo:(long long)arg1;
- (void)resetWithAlgo:(long long)arg1;
- (void)setAlgo:(long long)arg1;
- (void)setCtxSHA256:(struct CC_SHA256state_st { unsigned int x1[2]; unsigned int x2[8]; unsigned int x3[16]; })arg1;
- (void)setCtxSHA512:(struct CC_SHA512state_st { unsigned long long x1[2]; unsigned long long x2[8]; unsigned long long x3[16]; })arg1;
- (void)throwInvalidAlgo;
- (void)updateWithBytes:(const void*)arg1 len:(unsigned long long)arg2;
- (void)updateWithData:(id)arg1;

@end
