
@interface CHContextualTextResult : NSObject {
    CHStrokeGroup * _strokeGroup;
    NSString * _terminatingSpecialCharacter;
    CHTokenizedTextResult * _textResult;
}

@property (nonatomic, retain) CHStrokeGroup *strokeGroup;
@property (nonatomic, retain) NSString *terminatingSpecialCharacter;
@property (nonatomic, retain) CHTokenizedTextResult *textResult;

+ (id)defaultWordTerminationCharacterForLocale:(id)arg1;

- (void).cxx_destruct;
- (id)initWithTextResult:(id)arg1 terminatingSpecialCharacter:(id)arg2 strokeGroup:(id)arg3;
- (void)setStrokeGroup:(id)arg1;
- (void)setTerminatingSpecialCharacter:(id)arg1;
- (void)setTextResult:(id)arg1;
- (id)strokeGroup;
- (id)terminatingSpecialCharacter;
- (id)textResult;

@end
