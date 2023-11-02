
@interface REWorkoutRelevanceProvider : RERelevanceProvider {
    unsigned long long  _state;
}

@property (nonatomic, readonly) unsigned long long state;

+ (id)relevanceSimulatorID;

- (unsigned long long)_hash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryEncoding;
- (id)initWithDictionary:(id)arg1;
- (id)initWithState:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)state;

@end
