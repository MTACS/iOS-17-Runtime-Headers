
@interface TranslationResultItem : INObject

@property (nonatomic, copy) NSString *definition;
@property (nonatomic, copy) NSString *romanization;
@property (nonatomic, copy) NSString *translatedSantitizedText;
@property (nonatomic, copy) NSString *translatedText;
@property (nonatomic, copy) NSString *wordType;

+ (bool)supportsSecureCoding;

- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3;

@end
