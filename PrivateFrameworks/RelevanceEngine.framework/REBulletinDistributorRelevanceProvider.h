
@interface REBulletinDistributorRelevanceProvider : RERelevanceProvider {
    NSString * _bulletinSectionIdentifier;
}

@property (nonatomic, readonly) NSString *bulletinSectionIdentifier;

+ (id)relevanceSimulatorID;

- (void).cxx_destruct;
- (unsigned long long)_hash;
- (id)bulletinSectionIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryEncoding;
- (id)initWithBulletinSectionIdentifier:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
