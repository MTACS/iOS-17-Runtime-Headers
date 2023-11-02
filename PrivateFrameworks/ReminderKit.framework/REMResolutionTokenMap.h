
@interface REMResolutionTokenMap : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary * _map;
}

@property (nonatomic, retain) NSMutableDictionary *map;

+ (id)mapWithData:(id)arg1;
+ (id)resolutionTokenMapWithJSONData:(id)arg1 keyMap:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)archivedData;
- (long long)compare:(id)arg1 forKey:(id)arg2;
- (long long)compareAndMergeWithMap:(id)arg1 forKey:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (void)forceMergeFromMap:(id)arg1 forKey:(id)arg2;
- (id)getTokenForKey:(id)arg1;
- (id)getTokenKeys;
- (id)init;
- (void)initTokenWithDefaultValueIfNecessaryForKey:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMap:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)map;
- (bool)mergeWithMap:(id)arg1 forKey:(id)arg2;
- (void)setMap:(id)arg1;
- (void)setToken:(id)arg1 forKey:(id)arg2;
- (void)updateForKey:(id)arg1;

@end
