
@interface HMLightProfileSettings : NSObject <HMFObject, NSCopying, NSSecureCoding> {
    bool  _naturalLightingEnabled;
    unsigned long long  _supportedFeatures;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isNaturalLightingEnabled, readonly) bool naturalLightingEnabled;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (readonly) unsigned long long supportedFeatures;

+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSupportedFeatures:(unsigned long long)arg1 naturalLightingEnabled:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isNaturalLightingEnabled;
- (id)privateDescription;
- (id)shortDescription;
- (unsigned long long)supportedFeatures;

@end
