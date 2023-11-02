
@interface ENTestResultPersistentSession : NSObject {
    NSData * _HMACKey;
    NSString * _certificate;
    NSDictionary * _fetchedMetadata;
    NSString * _revisionToken;
    NSArray * _teks;
    NSError * _verificationError;
    NSString * _verificationToken;
}

@property (nonatomic, copy) NSData *HMACKey;
@property (nonatomic, copy) NSString *certificate;
@property (nonatomic, copy) NSDictionary *fetchedMetadata;
@property (nonatomic, copy) NSString *revisionToken;
@property (nonatomic, copy) NSArray *teks;
@property (nonatomic, copy) NSError *verificationError;
@property (nonatomic, copy) NSString *verificationToken;

- (void).cxx_destruct;
- (id)HMACKey;
- (id)certificate;
- (id)fetchedMetadata;
- (id)revisionToken;
- (void)setCertificate:(id)arg1;
- (void)setFetchedMetadata:(id)arg1;
- (void)setHMACKey:(id)arg1;
- (void)setRevisionToken:(id)arg1;
- (void)setTeks:(id)arg1;
- (void)setVerificationError:(id)arg1;
- (void)setVerificationToken:(id)arg1;
- (id)teks;
- (id)verificationError;
- (id)verificationToken;

@end
