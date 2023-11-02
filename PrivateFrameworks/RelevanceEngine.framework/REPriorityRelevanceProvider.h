
@interface REPriorityRelevanceProvider : RERelevanceProvider {
    float  _priority;
}

@property (nonatomic, readonly) float priority;

+ (id)relevanceSimulatorID;

- (unsigned long long)_hash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryEncoding;
- (id)initWithDictionary:(id)arg1;
- (id)initWithPriority:(float)arg1;
- (bool)isEqual:(id)arg1;
- (float)priority;

@end
