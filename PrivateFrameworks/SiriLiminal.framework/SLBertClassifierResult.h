
@interface SLBertClassifierResult : NSObject {
    NSString * _assetVersion;
    NSArray * _domainProb;
    NSDictionary * _extractedFeats;
}

@property (nonatomic, readonly) NSString *assetVersion;
@property (nonatomic, readonly) NSArray *domainProb;
@property (nonatomic, readonly) NSDictionary *extractedFeats;

- (void).cxx_destruct;
- (id)assetVersion;
- (id)dictionaryRepresentation;
- (id)domainProb;
- (id)extractedFeats;
- (id)initWithScore:(id)arg1 assetVersion:(id)arg2 extractedFeats:(id)arg3;

@end
