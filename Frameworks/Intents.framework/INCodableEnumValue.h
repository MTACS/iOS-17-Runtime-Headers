
@interface INCodableEnumValue : NSObject <INCodableAttributeRelationComparing, INCodableCoding, INWidgetPlistRepresentable, NSCopying, NSSecureCoding> {
    INCodableEnum * _codableEnum;
    NSString * _displayName;
    NSString * _displayNameLocID;
    long long  _index;
    NSString * _localizedName;
    NSString * _name;
    NSArray * _synonyms;
}

@property (setter=_setCodableEnum:, nonatomic) INCodableEnum *_codableEnum;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *displayNameLocID;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long index;
@property (nonatomic, readonly, copy) NSString *localizedDisplayName;
@property (nonatomic, copy) NSString *localizedName;
@property (nonatomic, copy) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *synonyms;

+ (id)makeFromWidgetPlistableRepresentation:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)__INCodableEnumDisplayNameIDKey;
- (id)__INCodableEnumDisplayNameKey;
- (id)__INCodableEnumIndexKey;
- (id)__INCodableEnumNameKey;
- (id)__INCodableEnumSynonymsKey;
- (id)_codableEnum;
- (bool)_intents_compareValue:(id)arg1 relation:(unsigned long long)arg2;
- (void)_setCodableEnum:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;
- (id)displayName;
- (id)displayNameLocID;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (long long)index;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedDisplayName;
- (id)localizedDisplayNameForLanguage:(id)arg1;
- (id)localizedDisplayNameWithLocalizer:(id)arg1;
- (id)localizedName;
- (id)name;
- (void)setDisplayName:(id)arg1;
- (void)setDisplayNameLocID:(id)arg1;
- (void)setIndex:(long long)arg1;
- (void)setLocalizedName:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSynonyms:(id)arg1;
- (id)synonyms;
- (void)updateWithDictionary:(id)arg1;
- (id)widgetPlistableRepresentationWithParameters:(id)arg1 error:(id*)arg2;

@end
