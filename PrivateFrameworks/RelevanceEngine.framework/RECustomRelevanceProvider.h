
@interface RECustomRelevanceProvider : RERelevanceProvider {
    REFeature * _feature;
    unsigned long long  _value;
}

@property (nonatomic, readonly) REFeature *feature;
@property (nonatomic, readonly) unsigned long long value;

+ (id)relevanceSimulatorID;

- (void).cxx_destruct;
- (unsigned long long)_hash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryEncoding;
- (id)feature;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFeature:(id)arg1 value:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)value;

@end
