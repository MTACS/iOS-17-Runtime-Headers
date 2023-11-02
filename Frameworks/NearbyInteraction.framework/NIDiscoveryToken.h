
@interface NIDiscoveryToken : NSObject <NSCopying, NSSecureCoding> {
    NSData * _identifyingSequence;
    NSData * _rawToken;
    NSNumber * _shortDeviceAddress;
}

@property (nonatomic, readonly, copy) <NIDeviceCapability> *deviceCapabilities;
@property (readonly, copy) NSData *rawToken;
@property (readonly) NSString *rawTokenAsString;
@property (readonly) long long tokenVariant;

+ (id)_identifyingSequenceFromBytes:(id)arg1;
+ (id)deserialize:(id)arg1;
+ (id)generateFindingTokenWithIRK:(id)arg1;
+ (id)generateFindingTokenWithIRK:(id)arg1 forExternalUse:(bool)arg2;
+ (id)serialize:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionInternal;
- (id)deviceCapabilities;
- (void)encodeWithCoder:(id)arg1;
- (id)getIRK;
- (id)getSessionIdentifier;
- (unsigned long long)hash;
- (id)initWithBytes:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceAddress:(unsigned short)arg1;
- (bool)isEqual:(id)arg1;
- (id)objectInRawTokenOPACKDictForKey:(id)arg1;
- (id)rawToken;
- (id)rawTokenAsString;
- (id)shortDeviceAddress;
- (long long)tokenVariant;

@end
