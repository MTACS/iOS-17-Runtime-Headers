
@interface ICUITextSuggestion : UITextSuggestion {
    NSString * _shortName;
    unsigned long long  _textSuggestionType;
    NSString * _uuidString;
}

@property (nonatomic, copy) NSString *shortName;
@property (nonatomic) unsigned long long textSuggestionType;
@property (nonatomic, copy) NSString *uuidString;

- (void).cxx_destruct;
- (id)initWithShortName:(id)arg1 uuidString:(id)arg2 displayText:(id)arg3 image:(id)arg4 textSuggestionType:(unsigned long long)arg5;
- (void)setShortName:(id)arg1;
- (void)setTextSuggestionType:(unsigned long long)arg1;
- (void)setUuidString:(id)arg1;
- (id)shortName;
- (unsigned long long)textSuggestionType;
- (id)uuidString;

@end
