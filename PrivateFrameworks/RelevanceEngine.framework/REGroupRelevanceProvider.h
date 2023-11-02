
@interface REGroupRelevanceProvider : RERelevanceProvider {
    NSString * _groupIdentifier;
}

@property (nonatomic, readonly) NSString *groupIdentifier;

+ (id)relevanceSimulatorID;

- (void).cxx_destruct;
- (unsigned long long)_hash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryEncoding;
- (id)groupIdentifier;
- (id)initWithDictionary:(id)arg1;
- (id)initWithGroupIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
