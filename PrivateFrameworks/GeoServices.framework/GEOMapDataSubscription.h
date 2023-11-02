
@interface GEOMapDataSubscription : NSObject <NSSecureCoding> {
    unsigned long long  _dataTypes;
    NSString * _displayName;
    NSDate * _expirationDate;
    NSString * _identifier;
    NSString * _originatingBundleIdentifier;
    long long  _policy;
    GEOMapRegion * _region;
}

@property (nonatomic, readonly) unsigned long long dataTypes;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) NSString *identifier;
@property (getter=_originatingBundleIdentifier, nonatomic, readonly, copy) NSString *originatingBundleIdentifier;
@property (nonatomic, readonly) long long policy;
@property (nonatomic, readonly) GEOMapRegion *region;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)_originatingBundleIdentifier;
- (unsigned long long)dataTypes;
- (id)debugDescription;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 originatingBundleIdentifier:(id)arg2 dataTypes:(unsigned long long)arg3 policy:(long long)arg4 expirationDate:(id)arg5 region:(id)arg6 displayName:(id)arg7;
- (bool)isEqual:(id)arg1;
- (long long)policy;
- (id)region;

@end
