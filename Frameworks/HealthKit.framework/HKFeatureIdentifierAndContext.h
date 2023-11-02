
@interface HKFeatureIdentifierAndContext : NSObject <NSCopying> {
    NSString * _context;
    NSString * _featureIdentifier;
}

@property (nonatomic, readonly, copy) NSString *context;
@property (nonatomic, readonly, copy) NSString *featureIdentifier;

- (void).cxx_destruct;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)featureIdentifier;
- (unsigned long long)hash;
- (id)initWithFeatureIdentifier:(id)arg1 context:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
