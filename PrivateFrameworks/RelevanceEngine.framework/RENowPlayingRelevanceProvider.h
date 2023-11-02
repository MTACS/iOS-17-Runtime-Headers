
@interface RENowPlayingRelevanceProvider : RERelevanceProvider {
    NSString * _bundleIdentifier;
    NSString * _itemIdentifer;
    unsigned long long  _state;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *itemIdentifer;
@property (nonatomic, readonly) unsigned long long state;

+ (id)relevanceSimulatorID;

- (void).cxx_destruct;
- (unsigned long long)_hash;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryEncoding;
- (id)initWithDictionary:(id)arg1;
- (id)initWithState:(unsigned long long)arg1;
- (id)initWithState:(unsigned long long)arg1 bundleIdentifier:(id)arg2 itemIdentifier:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)itemIdentifer;
- (unsigned long long)state;

@end
