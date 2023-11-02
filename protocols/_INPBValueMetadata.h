
@protocol _INPBValueMetadata <NSObject>

@required

- (int)StringAsRequiredEntitlements:(NSString *)arg1;
- (void)addRequiredEntitlement:(int)arg1;
- (NSString *)canonicalValue;
- (void)clearRequiredEntitlements;
- (_INPBConfidenceScore *)confidenceScore;
- (bool)confirmed;
- (bool)hasCanonicalValue;
- (bool)hasConfidenceScore;
- (bool)hasConfirmed;
- (bool)hasInput;
- (bool)hasSource;
- (bool)hasSourceAppBundleIdentifier;
- (bool)hasUuid;
- (NSString *)input;
- (int)requiredEntitlementAtIndex:(unsigned long long)arg1;
- (int*)requiredEntitlements;
- (NSString *)requiredEntitlementsAsString:(int)arg1;
- (unsigned long long)requiredEntitlementsCount;
- (void)setCanonicalValue:(NSString *)arg1;
- (void)setConfidenceScore:(_INPBConfidenceScore *)arg1;
- (void)setConfirmed:(bool)arg1;
- (void)setHasConfirmed:(bool)arg1;
- (void)setInput:(NSString *)arg1;
- (void)setRequiredEntitlements:(int*)arg1 count:(unsigned long long)arg2;
- (void)setSource:(NSString *)arg1;
- (void)setSourceAppBundleIdentifier:(NSString *)arg1;
- (void)setUuid:(NSString *)arg1;
- (NSString *)source;
- (NSString *)sourceAppBundleIdentifier;
- (NSString *)uuid;

@end
