
@interface CWFBSS : NSObject <CWFJSONEncodable, NSCopying, NSSecureCoding> {
    NSMutableDictionary * _internal;
}

@property (nonatomic, copy) NSDate *AWDLRealTimeModeTimestamp;
@property (nonatomic, copy) NSString *BSSID;
@property (nonatomic, copy) NSData *DHCPServerID;
@property (nonatomic, copy) NSData *DHCPv6ServerID;
@property (nonatomic, copy) NSString *IPv4NetworkSignature;
@property (nonatomic, copy) NSString *IPv6NetworkSignature;
@property (nonatomic, copy) NSDictionary *OSSpecificAttributes;
@property (nonatomic, copy) CWFChannel *channel;
@property (nonatomic, copy) CWFChannel *colocated2GHzRNRChannel;
@property (nonatomic, copy) CWFChannel *colocated5GHzRNRChannel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *internal;
@property (nonatomic, copy) NSDate *lastAssociatedAt;
@property (nonatomic, copy) CLLocation *location;
@property (nonatomic, readonly, copy) NSSet *properties;
@property (readonly) Class superclass;

+ (id)supportedOSSpecificKeys;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)AWDLRealTimeModeTimestamp;
- (id)BSSID;
- (id)DHCPServerID;
- (id)DHCPv6ServerID;
- (id)IPv4NetworkSignature;
- (id)IPv6NetworkSignature;
- (id)JSONCompatibleKeyValueMap;
- (id)OSSpecificAttributes;
- (id)OSSpecificValueForKey:(id)arg1;
- (id)__coreWiFiSpecificProperties;
- (id)__defaultProperties;
- (id)__filteredBSSWithProperties:(id)arg1 includeRequiredProperties:(bool)arg2 OSSpecificKeys:(id)arg3;
- (id)__keyForProperty:(long long)arg1;
- (long long)__propertyForKey:(id)arg1;
- (id)__requiredProperties;
- (id)channel;
- (id)colocated2GHzRNRChannel;
- (id)colocated5GHzRNRChannel;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)coreWiFiSpecificAttributes;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)externalForm;
- (id)filteredBSSWithProperties:(id)arg1;
- (id)filteredBSSWithProperties:(id)arg1 OSSpecificKeys:(id)arg2;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithExternalForm:(id)arg1;
- (id)internal;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToBSS:(id)arg1;
- (id)lastAssociatedAt;
- (id)location;
- (void)mergeWithBSS:(id)arg1;
- (id)properties;
- (void)setAWDLRealTimeModeTimestamp:(id)arg1;
- (void)setBSSID:(id)arg1;
- (void)setChannel:(id)arg1;
- (void)setColocated2GHzRNRChannel:(id)arg1;
- (void)setColocated5GHzRNRChannel:(id)arg1;
- (void)setCoreWiFiSpecificAttributes:(id)arg1;
- (void)setDHCPServerID:(id)arg1;
- (void)setDHCPv6ServerID:(id)arg1;
- (void)setIPv4NetworkSignature:(id)arg1;
- (void)setIPv6NetworkSignature:(id)arg1;
- (void)setInternal:(id)arg1;
- (void)setLastAssociatedAt:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setOSSpecificAttributes:(id)arg1;
- (void)setOSSpecificValue:(id)arg1 forKey:(id)arg2;

@end
