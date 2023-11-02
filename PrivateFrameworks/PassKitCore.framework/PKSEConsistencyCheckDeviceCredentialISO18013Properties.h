
@interface PKSEConsistencyCheckDeviceCredentialISO18013Properties : NSObject {
    bool  _hasKeyMeterial;
    NSString * _isoIdentifier;
}

@property (nonatomic, readonly) bool hasKeyMeterial;
@property (nonatomic, readonly) NSString *isoIdentifier;

- (void).cxx_destruct;
- (id)description;
- (bool)hasKeyMeterial;
- (id)init;
- (id)isoIdentifier;

@end
