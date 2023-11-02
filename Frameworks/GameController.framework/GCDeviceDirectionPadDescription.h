
@interface GCDeviceDirectionPadDescription : GCDeviceElementDescription {
    NSSet * _additionalAliases;
    unsigned long long  _attributes;
    NSString * _name;
    NSString * _nameLocalizationKey;
    unsigned long long  _sourceAttributes;
    unsigned long long  _sourceDownExtendedEventFieldIndex;
    unsigned long long  _sourceLeftExtendedEventFieldIndex;
    NSString * _sourceNameLocalizationKey;
    float  _sourcePressedThreshold;
    unsigned long long  _sourceRightExtendedEventFieldIndex;
    NSString * _sourceSymbolName;
    unsigned long long  _sourceUpExtendedEventFieldIndex;
    NSString * _symbolName;
}

@property (getter=isDigital, readonly) bool digital;
@property (readonly) unsigned long long sourceDownExtendedEventFieldIndex;
@property (readonly) unsigned long long sourceLeftExtendedEventFieldIndex;
@property (readonly) NSString *sourceNameLocalizationKey;
@property (readonly) float sourcePressedThreshold;
@property (readonly) unsigned long long sourceRightExtendedEventFieldIndex;
@property (readonly) NSString *sourceSymbolName;
@property (readonly) unsigned long long sourceUpExtendedEventFieldIndex;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)additionalAliases;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 additionalAliases:(id)arg2 attributes:(unsigned long long)arg3 nameLocalizationKey:(id)arg4 symbolName:(id)arg5 sourceAttributes:(unsigned long long)arg6 sourceNameLocalizationKey:(id)arg7 sourceSymbolName:(id)arg8 sourcePressedThreshold:(float)arg9 sourceUpExtendedEventField:(unsigned long long)arg10 sourceDownExtendedEventField:(unsigned long long)arg11 sourceLeftExtendedEventField:(unsigned long long)arg12 sourceRightExtendedEventField:(unsigned long long)arg13;
- (id)initWithName:(id)arg1 additionalAliases:(id)arg2 attributes:(unsigned long long)arg3 nameLocalizationKey:(id)arg4 symbolName:(id)arg5 sourceAttributes:(unsigned long long)arg6 sourceUpExtendedEventField:(unsigned long long)arg7 sourceDownExtendedEventField:(unsigned long long)arg8 sourceLeftExtendedEventField:(unsigned long long)arg9 sourceRightExtendedEventField:(unsigned long long)arg10;
- (bool)isBoundToSystemGesture;
- (bool)isDigital;
- (bool)isMappableToSystemGestures;
- (bool)isRemappable;
- (id)name;
- (id)nameLocalizationKey;
- (unsigned long long)sourceDownExtendedEventFieldIndex;
- (unsigned long long)sourceLeftExtendedEventFieldIndex;
- (id)sourceNameLocalizationKey;
- (float)sourcePressedThreshold;
- (unsigned long long)sourceRightExtendedEventFieldIndex;
- (id)sourceSymbolName;
- (unsigned long long)sourceUpExtendedEventFieldIndex;
- (id)symbolName;

@end
