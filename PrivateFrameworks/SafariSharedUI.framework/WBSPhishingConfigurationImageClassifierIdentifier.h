
@interface WBSPhishingConfigurationImageClassifierIdentifier : NSObject {
    NSString * _domainName;
    float  _minimumConfidence;
}

@property (nonatomic, readonly, copy) NSString *domainName;
@property (nonatomic, readonly) float minimumConfidence;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)domainName;
- (id)initWithDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithDomain:(id)arg1 minimumConfidence:(float)arg2;
- (float)minimumConfidence;

@end
