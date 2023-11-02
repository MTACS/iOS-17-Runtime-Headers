
@interface SPSimpleBeaconContext : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleIdentifier;
    unsigned long long  _fetchProperties;
    NSArray * _filterBeaconUUIDs;
    bool  _sendInitialBeacons;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic) unsigned long long fetchProperties;
@property (nonatomic, copy) NSArray *filterBeaconUUIDs;
@property (nonatomic) bool sendInitialBeacons;

+ (id)defaultContext;
+ (id)deviceManagerContext;
+ (id)fmipItemContext;
+ (id)fmipItemContextForBeaconUUIDs:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)fetchProperties;
- (id)filterBeaconUUIDs;
- (id)initWithCoder:(id)arg1;
- (id)initWithFetchProperties:(unsigned long long)arg1 filterBeaconUUIDs:(id)arg2;
- (bool)sendInitialBeacons;
- (void)setBundleIdentifier:(id)arg1;
- (void)setFetchProperties:(unsigned long long)arg1;
- (void)setFilterBeaconUUIDs:(id)arg1;
- (void)setSendInitialBeacons:(bool)arg1;

@end
