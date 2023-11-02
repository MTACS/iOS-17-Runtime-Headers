
@interface REDailyRoutineRelevanceProvider : RERelevanceProvider {
    unsigned long long  _type;
}

@property (nonatomic, readonly) unsigned long long type;

+ (id)relevanceSimulatorID;

- (unsigned long long)_hash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryEncoding;
- (id)init;
- (id)initWithDailyRoutineType:(unsigned long long)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)type;

@end
