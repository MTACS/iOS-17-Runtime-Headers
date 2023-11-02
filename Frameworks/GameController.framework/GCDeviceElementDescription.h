
@interface GCDeviceElementDescription : NSObject <NSCopying, NSSecureCoding> {
    NSString * _nameLocalizationKey;
}

@property (readonly) NSSet *additionalAliases;
@property (getter=isBoundToSystemGesture, readonly) bool boundToSystemGesture;
@property (getter=isMappableToSystemGestures, readonly) bool mappableToSystemGestures;
@property (readonly) NSString *name;
@property (readonly) NSString *nameLocalizationKey;
@property (getter=isRemappable, readonly) bool remappable;
@property (readonly) NSString *symbolName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)additionalAliases;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isBoundToSystemGesture;
- (bool)isEqual:(id)arg1;
- (bool)isMappableToSystemGestures;
- (bool)isRemappable;
- (id)localizedName;
- (id)name;
- (id)nameLocalizationKey;
- (id)symbolName;

@end
