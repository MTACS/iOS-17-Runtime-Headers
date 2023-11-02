
@interface REMotionRelevanceProvider : RERelevanceProvider {
    unsigned long long  _motionTypes;
}

@property (nonatomic, readonly) unsigned long long motionTypes;

+ (id)relevanceSimulatorID;

- (unsigned long long)_hash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryEncoding;
- (id)initWithDictionary:(id)arg1;
- (id)initWithMotionTypes:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)motionTypes;

@end
