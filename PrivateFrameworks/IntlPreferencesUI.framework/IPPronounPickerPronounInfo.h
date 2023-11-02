
@interface IPPronounPickerPronounInfo : NSObject {
    UITextField * _entryField;
    UILabel * _exampleLabel;
    NSString * _examplePlaceholder;
    NSString * _exampleText;
    NSString * _language;
    NSMorphology * _morphology;
    bool  _textWasEnteredByUser;
    NSString * _validationErrorMessage;
    NSString * _value;
}

@property (nonatomic, retain) UITextField *entryField;
@property (nonatomic, retain) UILabel *exampleLabel;
@property (nonatomic, retain) NSString *examplePlaceholder;
@property (nonatomic, retain) NSString *exampleText;
@property (nonatomic, readonly) bool hasErrorMessage;
@property (nonatomic, readonly) bool hasValidValue;
@property (nonatomic, readonly) bool hasValue;
@property (nonatomic, retain) NSString *language;
@property (nonatomic, retain) NSMorphology *morphology;
@property (nonatomic) bool textWasEnteredByUser;
@property (nonatomic, retain) NSString *validationErrorMessage;
@property (nonatomic, retain) NSString *value;

- (void).cxx_destruct;
- (void)autofillValue:(id)arg1;
- (id)entryField;
- (void)entryFieldContentDidChange:(id)arg1 validator:(id)arg2 userEntered:(bool)arg3;
- (id)exampleLabel;
- (id)examplePlaceholder;
- (id)exampleText;
- (id)generateExampleLabelText;
- (bool)hasErrorMessage;
- (bool)hasValidValue;
- (bool)hasValue;
- (id)initWithExampleText:(id)arg1 examplePlaceholder:(id)arg2 morphology:(id)arg3 language:(id)arg4;
- (id)language;
- (id)morphology;
- (void)setEntryField:(id)arg1;
- (void)setExampleLabel:(id)arg1;
- (void)setExamplePlaceholder:(id)arg1;
- (void)setExampleText:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setMorphology:(id)arg1;
- (void)setTextWasEnteredByUser:(bool)arg1;
- (void)setValidationErrorMessage:(id)arg1;
- (void)setValue:(id)arg1;
- (bool)textWasEnteredByUser;
- (id)validationErrorMessage;
- (id)value;

@end
