
@interface WBSFormAutoFillCorrectionSet : NSObject {
    NSString * _domain;
    NSDictionary * _fingerprintsToClassifications;
    NSDictionary * _fingerprintsToCorrections;
}

@property (nonatomic, readonly) NSString *domain;
@property (nonatomic, readonly) NSDictionary *fingerprintsToClassifications;
@property (nonatomic, readonly) NSDictionary *fingerprintsToCorrections;

- (void).cxx_destruct;
- (id)domain;
- (id)fingerprintsToClassifications;
- (id)fingerprintsToCorrections;
- (unsigned long long)hash;
- (id)initWithDomain:(id)arg1 fingerprintsToClassifications:(id)arg2;
- (id)initWithDomain:(id)arg1 fingerprintsToCorrections:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
