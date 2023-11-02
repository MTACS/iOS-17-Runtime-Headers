
@interface CKFetchTranscodeServerPublicKeyOperationInfo : CKOperationInfo {
    NSString * _transcodeServerHostname;
    long long  _type;
}

@property (nonatomic, retain) NSString *transcodeServerHostname;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (void)setTranscodeServerHostname:(id)arg1;
- (void)setType:(long long)arg1;
- (id)transcodeServerHostname;
- (long long)type;

@end
