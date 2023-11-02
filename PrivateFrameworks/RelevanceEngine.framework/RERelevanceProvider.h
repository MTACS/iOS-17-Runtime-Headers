
@interface RERelevanceProvider : NSObject <NSCopying> {
    unsigned long long  _cachedHash;
    RERelevanceProviderEnvironment * _environment;
    unsigned long long  _priority;
}

+ (id)customRelevanceProviderForFeature:(id)arg1 withValue:(id)arg2;
+ (id)relevanceSimulatorID;

- (void).cxx_destruct;
- (unsigned long long)_hash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryEncoding;
- (id)environment;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)providerWithPriority:(unsigned long long)arg1;
- (unsigned long long)relevancePriority;
- (void)setEnvironment:(id)arg1;

@end
