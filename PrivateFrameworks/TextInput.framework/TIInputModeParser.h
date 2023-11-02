
@interface TIInputModeParser : NSObject {
    NSMutableDictionary * _inputModeDicts;
    NSCharacterSet * _invalidCharacterSet;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)parseInputMode:(id)arg1;
- (id)stringByReplacingInvalidCharactersWithUnderscores:(id)arg1;

@end
