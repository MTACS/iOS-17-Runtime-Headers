
@interface INCodableEnumValueSynonym : NSObject <INCodableCoding, INWidgetPlistRepresentable, NSCopying, NSSecureCoding> {
    INCodableEnumValue * _codableEnumValue;
    NSString * _pronunciationHint;
    NSString * _pronunciationHintLocID;
    NSString * _synonym;
    NSString * _synonymLocID;
}

@property (nonatomic, readonly) INCodableEnum *_codableEnum;
@property (setter=_setCodableEnumValue:, nonatomic) INCodableEnumValue *_codableEnumValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *localizedPronunciationHint;
@property (nonatomic, readonly, copy) NSString *localizedSynonym;
@property (nonatomic, copy) NSString *pronunciationHint;
@property (nonatomic, copy) NSString *pronunciationHintLocID;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *synonym;
@property (nonatomic, copy) NSString *synonymLocID;

+ (id)makeFromWidgetPlistableRepresentation:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)__INCodableEnumPronunciationHintIDKey;
- (id)__INCodableEnumPronunciationHintKey;
- (id)__INCodableEnumSynonymIDKey;
- (id)__INCodableEnumSynonymKey;
- (id)_codableEnum;
- (id)_codableEnumValue;
- (void)_setCodableEnumValue:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedPronunciationHint;
- (id)localizedPronunciationHintForLanguage:(id)arg1;
- (id)localizedPronunciationHintWithLocalizer:(id)arg1;
- (id)localizedSynonym;
- (id)localizedSynonymForLanguage:(id)arg1;
- (id)localizedSynonymWithLocalizer:(id)arg1;
- (id)pronunciationHint;
- (id)pronunciationHintLocID;
- (void)setPronunciationHint:(id)arg1;
- (void)setPronunciationHintLocID:(id)arg1;
- (void)setSynonym:(id)arg1;
- (void)setSynonymLocID:(id)arg1;
- (id)synonym;
- (id)synonymLocID;
- (void)updateWithDictionary:(id)arg1;
- (id)widgetPlistableRepresentationWithParameters:(id)arg1 error:(id*)arg2;

@end
