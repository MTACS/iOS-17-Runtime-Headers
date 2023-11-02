
@interface SPAKE2Verifier : NSObject <SPAKE2Protocol> {
    SPAKE2Common * _common;
}

@property (retain) SPAKE2Common *common;

+ (id)generateCodeWithError:(id*)arg1;

- (void).cxx_destruct;
- (id)common;
- (id)decryptMessage:(id)arg1 error:(id*)arg2;
- (id)encryptMessage:(id)arg1 error:(id*)arg2;
- (id)getCode;
- (id)getKey;
- (id)getMsg1WithError:(id*)arg1;
- (id)getMsg2WithError:(id*)arg1;
- (id)initWithSalt:(id)arg1 code:(id)arg2 error:(id*)arg3;
- (bool)isVerified;
- (bool)processMsg1:(id)arg1 error:(id*)arg2;
- (bool)processMsg2:(id)arg1 error:(id*)arg2;
- (void)setCommon:(id)arg1;

@end
