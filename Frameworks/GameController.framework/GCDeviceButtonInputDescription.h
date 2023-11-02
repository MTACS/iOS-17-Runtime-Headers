
@interface GCDeviceButtonInputDescription : GCDeviceElementDescription {
    NSSet * _additionalAliases;
    unsigned long long  _attributes;
    NSString * _name;
    NSString * _nameLocalizationKey;
    unsigned long long  _sourceAttributes;
    long long  _sourceExtendedEventFieldIndex;
    NSString * _sourceNameLocalizationKey;
    float  _sourcePressedThreshold;
    NSString * _sourceSymbolName;
    float  _sourceTouchedThreshold;
    NSString * _symbolName;
}

@property (getter=isDigital, readonly) bool digital;
@property (readonly) long long sourceExtendedEventFieldIndex;
@property (readonly) NSString *sourceNameLocalizationKey;
@property (readonly) float sourcePressedThreshold;
@property (readonly) NSString *sourceSymbolName;
@property (readonly) float sourceTouchedThreshold;
@property (readonly) bool supportsTouch;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)additionalAliases;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 additionalAliases:(id)arg2 attributes:(unsigned long long)arg3 nameLocalizationKey:(id)arg4 symbolName:(id)arg5 sourceAttributes:(unsigned long long)arg6 sourceExtendedEventField:(long long)arg7;
- (id)initWithName:(id)arg1 additionalAliases:(id)arg2 attributes:(unsigned long long)arg3 nameLocalizationKey:(id)arg4 symbolName:(id)arg5 sourceAttributes:(unsigned long long)arg6 sourceNameLocalizationKey:(id)arg7 sourceSymbolName:(id)arg8 sourceTouchedThreshold:(float)arg9 sourcePressedThreshold:(float)arg10 sourceExtendedEventField:(long long)arg11;
- (bool)isBoundToSystemGesture;
- (bool)isDigital;
- (bool)isMappableToSystemGestures;
- (bool)isRemappable;
- (id)name;
- (id)nameLocalizationKey;
- (long long)sourceExtendedEventFieldIndex;
- (id)sourceNameLocalizationKey;
- (float)sourcePressedThreshold;
- (id)sourceSymbolName;
- (float)sourceTouchedThreshold;
- (bool)supportsTouch;
- (id)symbolName;

@end
