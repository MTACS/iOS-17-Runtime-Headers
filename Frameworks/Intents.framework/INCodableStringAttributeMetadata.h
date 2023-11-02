
@interface INCodableStringAttributeMetadata : INCodableAttributeMetadata <INCodableAttributeDefaultValueProviding> {
    long long  _capitalization;
    NSString * _defaultValue;
    NSString * _defaultValueID;
    bool  _disableAutocorrect;
    bool  _disableSmartDashes;
    bool  _disableSmartQuotes;
    bool  _multiline;
}

@property (nonatomic) long long capitalization;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSString *defaultValue;
@property (nonatomic, copy) NSString *defaultValueID;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableAutocorrect;
@property (nonatomic) bool disableSmartDashes;
@property (nonatomic) bool disableSmartQuotes;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *localizedDefaultValue;
@property (getter=isMultiline, nonatomic) bool multiline;
@property (readonly) Class superclass;

+ (id)makeFromWidgetPlistableRepresentation:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)__INCodableDescriptionCapitalizationKey;
- (id)__INCodableDescriptionDefaultValueIDKey;
- (id)__INCodableDescriptionDefaultValueKey;
- (id)__INCodableDescriptionDisableAutocorrectKey;
- (id)__INCodableDescriptionDisableSmartDashesKey;
- (id)__INCodableDescriptionDisableSmartQuotesKey;
- (id)__INCodableDescriptionMultilineKey;
- (id)__INIntentResponseCodableDescriptionCapitalizationKey;
- (id)__INIntentResponseCodableDescriptionDefaultValueIDKey;
- (id)__INIntentResponseCodableDescriptionDefaultValueKey;
- (id)__INIntentResponseCodableDescriptionDisableAutocorrectKey;
- (id)__INIntentResponseCodableDescriptionDisableSmartDashesKey;
- (id)__INIntentResponseCodableDescriptionDisableSmartQuotesKey;
- (id)__INIntentResponseCodableDescriptionMultilineKey;
- (id)__INTypeCodableDescriptionCapitalizationKey;
- (id)__INTypeCodableDescriptionDefaultValueIDKey;
- (id)__INTypeCodableDescriptionDefaultValueKey;
- (id)__INTypeCodableDescriptionDisableAutocorrectKey;
- (id)__INTypeCodableDescriptionDisableSmartDashesKey;
- (id)__INTypeCodableDescriptionDisableSmartQuotesKey;
- (id)__INTypeCodableDescriptionMultilineKey;
- (long long)capitalization;
- (id)defaultValue;
- (id)defaultValueForIntentDefaultValueProvider;
- (id)defaultValueID;
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;
- (bool)disableAutocorrect;
- (bool)disableSmartDashes;
- (bool)disableSmartQuotes;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isMultiline;
- (id)localizedDefaultValue;
- (id)localizedDefaultValueWithLocalizer:(id)arg1;
- (void)setCapitalization:(long long)arg1;
- (void)setDefaultValue:(id)arg1;
- (void)setDefaultValueID:(id)arg1;
- (void)setDisableAutocorrect:(bool)arg1;
- (void)setDisableSmartDashes:(bool)arg1;
- (void)setDisableSmartQuotes:(bool)arg1;
- (void)setMultiline:(bool)arg1;
- (void)updateWithDictionary:(id)arg1;
- (id)widgetPlistableRepresentationWithParameters:(id)arg1 error:(id*)arg2;

@end
