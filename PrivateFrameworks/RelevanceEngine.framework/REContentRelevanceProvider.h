
@interface REContentRelevanceProvider : RERelevanceProvider {
    NSArray * _keywords;
}

@property (nonatomic, readonly) NSArray *keywords;

+ (id)relevanceSimulatorID;

- (void).cxx_destruct;
- (unsigned long long)_hash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryEncoding;
- (id)init;
- (id)initWithContent:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithKeywords:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)keywords;

@end
