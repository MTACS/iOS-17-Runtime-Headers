
@interface AXImageCaptionModelAssetAssertion : NSObject <AXAssetAssertion> {
    unsigned long long  _assertionType;
    NSString * _clientIdentifier;
    NSNumber * _maximumCompatibilityVersion;
    NSNumber * _minimumCompatibilityVersion;
    NSString * _modelLanguage;
    NSString * _modelStage;
    NSString * _modelVersion;
}

@property (nonatomic) unsigned long long assertionType;
@property (nonatomic, readonly) NSString *assetType;
@property (nonatomic, retain) NSString *clientIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSNumber *maximumCompatibilityVersion;
@property (nonatomic, retain) NSNumber *minimumCompatibilityVersion;
@property (nonatomic, retain) NSString *modelLanguage;
@property (nonatomic, retain) NSString *modelStage;
@property (nonatomic, retain) NSString *modelVersion;
@property (readonly) Class superclass;

+ (id)assertionWithPropertyListRepresentation:(id)arg1 error:(id*)arg2;
+ (id)assertionsWithPropertyListRepresentations:(id)arg1;
+ (void)partitionAssertionsWithPropertyListRepresentations:(id)arg1 intoVersionLockedAssertions:(id)arg2 upgradableAssertions:(id)arg3;

- (void).cxx_destruct;
- (unsigned long long)assertionType;
- (id)assetType;
- (id)clientIdentifier;
- (id)description;
- (id)maximumCompatibilityVersion;
- (id)minimumCompatibilityVersion;
- (id)modelLanguage;
- (id)modelStage;
- (id)modelVersion;
- (id)propertyListRepresentation;
- (void)setAssertionType:(unsigned long long)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setMaximumCompatibilityVersion:(id)arg1;
- (void)setMinimumCompatibilityVersion:(id)arg1;
- (void)setModelLanguage:(id)arg1;
- (void)setModelStage:(id)arg1;
- (void)setModelVersion:(id)arg1;

@end
