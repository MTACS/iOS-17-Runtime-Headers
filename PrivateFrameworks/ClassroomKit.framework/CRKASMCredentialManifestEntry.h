
@interface CRKASMCredentialManifestEntry : NSObject <CRKDictionaryFormatable> {
    NSString * _fingerprint;
    NSString * _userIdentifier;
    NSDateInterval * _validityInterval;
}

@property (nonatomic, readonly, copy) NSString *fingerprint;
@property (getter=isFullyPopulated, nonatomic, readonly) bool fullyPopulated;
@property (nonatomic, readonly, copy) NSString *stringValue;
@property (nonatomic, readonly, copy) NSString *userIdentifier;
@property (nonatomic, readonly) NSDateInterval *validityInterval;

+ (id)validityIntervalWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)dictionaryValue;
- (id)fingerprint;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithUserIdentifier:(id)arg1 validityInterval:(id)arg2 fingerprint:(id)arg3;
- (bool)isFullyPopulated;
- (id)stringValue;
- (id)userIdentifier;
- (id)validityInterval;

@end
