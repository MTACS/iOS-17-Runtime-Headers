
@interface CKDFetchTranscodeServerPublicKeyOperation : CKDOperation {
    NSString * _transcodeServerHostname;
    CKPublicKey * _transcodeServerPublicKey;
    NSURL * _transcodeServerPublicKeyURL;
    long long  _type;
}

@property (nonatomic) unsigned long long state;
@property (nonatomic, readonly) NSString *transcodeServerHostname;
@property (retain) CKPublicKey *transcodeServerPublicKey;
@property (nonatomic, retain) NSURL *transcodeServerPublicKeyURL;
@property (nonatomic) long long type;

+ (struct __SecPolicy { }*)createTranscodeServerTrustPolicy;
+ (id)nameForState:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)activityCreate;
- (void)determineTranscodeServerPublicKeyURL;
- (void)fetchCachedTranscodePublicKey;
- (void)fetchRemoteTranscodePublicKey;
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;
- (void)main;
- (bool)makeStateTransition;
- (void)setTranscodeServerPublicKey:(id)arg1;
- (void)setTranscodeServerPublicKeyURL:(id)arg1;
- (void)setType:(long long)arg1;
- (id)transcodeServerHostname;
- (id)transcodeServerPublicKey;
- (id)transcodeServerPublicKeyURL;
- (long long)type;

@end
