
@interface AWDLTrafficRegistrationConfiguration : NSObject <NSCopying, NSSecureCoding> {
    bool  _activeFlagOverride;
    NSString * _derivedLocalization;
    long long  _options;
    WiFiMACAddress * _peerAddress;
    unsigned short  _preferredChannel;
    unsigned short  _secondaryPreferredChannel;
    NSString * _uniqueIdentifier;
}

@property (nonatomic) bool activeFlagOverride;
@property (nonatomic, readonly) NSString *localization;
@property (nonatomic) long long options;
@property (nonatomic, copy) WiFiMACAddress *peerAddress;
@property (nonatomic) unsigned short preferredChannel;
@property (nonatomic) unsigned short secondaryPreferredChannel;
@property (nonatomic, copy) NSString *uniqueIdentifier;

+ (id)localizedErrorForConflictBetweenExistingService:(id)arg1 withNewService:(id)arg2 localDeviceName:(id)arg3 localization:(id)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)activeFlagOverride;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasSimilarOptionsTo:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(struct __CFDictionary { }*)arg1 isActive:(bool*)arg2;
- (id)initWithUniqueIdentifier:(id)arg1 peerAddress:(id)arg2;
- (id)initWithUniqueIdentifier:(id)arg1 peerIPv6Address:(struct in6_addr { union { unsigned char x_1_1_1[16]; unsigned short x_1_1_2[8]; unsigned int x_1_1_3[4]; } x1; })arg2;
- (bool)isEqual:(id)arg1;
- (id)localization;
- (long long)options;
- (id)peerAddress;
- (unsigned short)preferredChannel;
- (unsigned short)secondaryPreferredChannel;
- (void)setActiveFlagOverride:(bool)arg1;
- (void)setOptions:(long long)arg1;
- (void)setPeerAddress:(id)arg1;
- (void)setPreferredChannel:(unsigned short)arg1;
- (void)setSecondaryPreferredChannel:(unsigned short)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (id)uniqueIdentifier;

@end
