
@interface INCodableEnum : NSObject <INCodableCoding, INWidgetPlistRepresentable, NSCopying, NSSecureCoding> {
    NSString * _displayName;
    NSString * _displayNameID;
    NSString * _enumNamespace;
    INCodableLocalizationTable * _localizationTable;
    NSString * _name;
    long long  _type;
    NSArray * _values;
    NSDictionary * _valuesByIndex;
}

@property (setter=_setLocalizationTable:, nonatomic, copy) INCodableLocalizationTable *_localizationTable;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly, copy) NSString *displayNameID;
@property (setter=_setEnumNamespace:, nonatomic, copy) NSString *enumNamespace;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *localizedDisplayName;
@property (nonatomic, readonly, copy) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly, copy) NSArray *values;

+ (id)__DisplayNameIDKey;
+ (id)__DisplayNameKey;
+ (id)__INCodableEnumValueDisplayNameIDKey;
+ (id)__INCodableEnumValueDisplayNameKey;
+ (id)__INCodableEnumValueIndexKey;
+ (id)__INCodableEnumValueNameKey;
+ (id)__INCodableEnumValueSynonymPronunciationHintIDKey;
+ (id)__INCodableEnumValueSynonymPronunciationHintKey;
+ (id)__INCodableEnumValueSynonymSynonymIDKey;
+ (id)__INCodableEnumValueSynonymSynonymKey;
+ (id)__INCodableEnumValueSynonymsKey;
+ (id)__NameKey;
+ (id)__TypeKey;
+ (id)__ValuesKey;
+ (id)makeFromWidgetPlistableRepresentation:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_localizationTable;
- (void)_setEnumNamespace:(id)arg1;
- (void)_setLocalizationTable:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;
- (id)displayName;
- (id)displayNameID;
- (void)encodeWithCoder:(id)arg1;
- (id)enumNamespace;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 displayName:(id)arg2 displayNameID:(id)arg3 enumNamespace:(id)arg4 type:(long long)arg5 values:(id)arg6 localizationTable:(id)arg7;
- (bool)isEqual:(id)arg1;
- (id)localizedDisplayName;
- (id)localizedDisplayNameWithLocalizer:(id)arg1;
- (id)name;
- (long long)type;
- (void)updateWithDictionary:(id)arg1;
- (id)valueForIndex:(unsigned long long)arg1;
- (id)values;
- (id)valuesByIndexForValues:(id)arg1;
- (id)widgetPlistableRepresentationWithParameters:(id)arg1 error:(id*)arg2;

@end
