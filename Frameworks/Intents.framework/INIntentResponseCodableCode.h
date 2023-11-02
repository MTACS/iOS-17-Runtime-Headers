
@interface INIntentResponseCodableCode : NSObject <INCodableCoding, INWidgetPlistRepresentable, NSSecureCoding> {
    INIntentResponseCodableDescription * __codableDescription;
    NSString * _conciseFormatString;
    NSString * _conciseFormatStringLocID;
    NSString * _formatString;
    NSString * _formatStringLocID;
    NSString * _name;
    bool  _success;
    long long  _value;
}

@property (setter=_setCodableDescription:, nonatomic) INIntentResponseCodableDescription *_codableDescription;
@property (nonatomic, copy) NSString *conciseFormatString;
@property (nonatomic, copy) NSString *conciseFormatStringLocID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *formatString;
@property (nonatomic, copy) NSString *formatStringLocID;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) NSArray *parameterNames;
@property (getter=isSuccess, nonatomic) bool success;
@property (readonly) Class superclass;
@property (nonatomic) long long value;

+ (id)makeFromWidgetPlistableRepresentation:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)__INCodableDescriptionConciseFormatStringDictionaryKey;
- (id)__INCodableDescriptionConciseFormatStringDictionaryLanguageCodeKey;
- (id)__INCodableDescriptionConciseFormatStringIDKey;
- (id)__INCodableDescriptionConciseFormatStringKey;
- (id)__INCodableDescriptionConciseFormatStringLanguageCodeKey;
- (id)__INCodableDescriptionFormatStringDictionaryKey;
- (id)__INCodableDescriptionFormatStringDictionaryLanguageCodeKey;
- (id)__INCodableDescriptionFormatStringIDKey;
- (id)__INCodableDescriptionFormatStringKey;
- (id)__INCodableDescriptionFormatStringLanguageCodeKey;
- (id)__INCodableDescriptionNameKey;
- (id)__INCodableDescriptionSuccessKey;
- (id)_codableDescription;
- (id)_parameterNamesFromString:(id)arg1;
- (void)_setCodableDescription:(id)arg1;
- (id)conciseFormatString;
- (id)conciseFormatStringLocID;
- (id)dictionaryRepresentation;
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)formatString;
- (id)formatStringLocID;
- (id)initWithCoder:(id)arg1;
- (bool)isSuccess;
- (id)name;
- (id)parameterNames;
- (void)setConciseFormatString:(id)arg1;
- (void)setConciseFormatStringLocID:(id)arg1;
- (void)setFormatString:(id)arg1;
- (void)setFormatStringLocID:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSuccess:(bool)arg1;
- (void)setValue:(long long)arg1;
- (void)updateWithDictionary:(id)arg1;
- (long long)value;
- (id)widgetPlistableRepresentationWithParameters:(id)arg1 error:(id*)arg2;

@end
