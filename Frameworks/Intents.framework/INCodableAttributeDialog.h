
@interface INCodableAttributeDialog : NSObject <INCodableCoding, INWidgetPlistRepresentable, NSCopying, NSSecureCoding> {
    INCodableAttribute * _codableAttribute;
    bool  _defaultDialog;
    NSString * _formatString;
    NSString * _formatStringID;
}

@property (setter=_setCodableAttribute:, nonatomic) INCodableAttribute *_codableAttribute;
@property (nonatomic, readonly) INCodableDescription *_codableDescription;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isDefaultDialog, nonatomic) bool defaultDialog;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *formatString;
@property (nonatomic, copy) NSString *formatStringID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)makeFromWidgetPlistableRepresentation:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)__INCodableDescriptionFormatStringDictionaryKey;
- (id)__INCodableDescriptionFormatStringDictionaryLanguageCodeKey;
- (id)__INCodableDescriptionFormatStringIDKey;
- (id)__INCodableDescriptionFormatStringKey;
- (id)__INCodableDescriptionFormatStringLanguageCodeKey;
- (id)_codableAttribute;
- (id)_codableDescription;
- (void)_setCodableAttribute:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)formatString;
- (id)formatStringID;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isDefaultDialog;
- (bool)isEqual:(id)arg1;
- (id)localizedDialogWithIntent:(id)arg1 tokens:(id)arg2;
- (id)localizedDialogWithIntent:(id)arg1 tokens:(id)arg2 forLanguage:(id)arg3;
- (id)localizedDialogWithIntent:(id)arg1 tokens:(id)arg2 localizer:(id)arg3;
- (void)setDefaultDialog:(bool)arg1;
- (void)setFormatString:(id)arg1;
- (void)setFormatStringID:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
- (id)widgetPlistableRepresentationWithParameters:(id)arg1 error:(id*)arg2;

@end
