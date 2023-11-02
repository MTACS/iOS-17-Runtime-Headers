
@interface CACCommandRecognizerCustom : CACCommandRecognizer

+ (id)customCommandRecognizers;

- (void)_buildLanguageModelUsingCommands;

@end
