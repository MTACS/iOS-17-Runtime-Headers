
@interface REGeofenceRelevanceProvider : RERelevanceProvider {
    NSString * _bundleIdentifier;
    CLCircularRegion * _region;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) CLCircularRegion *region;

+ (id)relevanceSimulatorID;

- (void).cxx_destruct;
- (unsigned long long)_hash;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryEncoding;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithRegion:(id)arg1;
- (id)initWithRegion:(id)arg1 bundleIdentifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)region;

@end
