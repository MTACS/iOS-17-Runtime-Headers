
@interface SGPOSTagger : NSObject

+ (id)sharedInstance;

- (id)tokenizeTextContent:(id)arg1 languageHint:(id)arg2;
- (id)tokenizeTextContent:(id)arg1 languageHint:(id)arg2 gazetteer:(id)arg3;

@end
