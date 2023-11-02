
@interface ASTUploadFilesCertsEntry : NSObject {
    NSString * _certString;
    NSString * _pubKeyDigest;
    NSString * _sigAlgo;
}

@property (nonatomic, retain) NSString *certString;
@property (nonatomic, retain) NSString *pubKeyDigest;
@property (nonatomic, retain) NSString *sigAlgo;

- (void).cxx_destruct;
- (id)certString;
- (id)initWithCert:(id)arg1 andPubKeyDigest:(id)arg2 andSigAlgo:(id)arg3;
- (id)pubKeyDigest;
- (void)setCertString:(id)arg1;
- (void)setPubKeyDigest:(id)arg1;
- (void)setSigAlgo:(id)arg1;
- (id)sigAlgo;

@end
