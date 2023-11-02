
@interface REForcedRelevanceProvider : RERelevanceProvider {
    bool  _isHistoric;
    float  _relevance;
}

@property (nonatomic, readonly) bool isHistoric;
@property (nonatomic, readonly) float relevance;

+ (id)relevanceSimulatorID;

- (unsigned long long)_hash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryEncoding;
- (id)initWithDictionary:(id)arg1;
- (id)initWithForcedRelevance:(float)arg1;
- (id)initWithForcedRelevance:(float)arg1 isHistoric:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isHistoric;
- (float)relevance;

@end
