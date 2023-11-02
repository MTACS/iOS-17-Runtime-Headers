
@interface UIAutoFillTextSuggestion : UITextSuggestion {
    NSDictionary * _contents;
}

@property (nonatomic, readonly, copy) NSDictionary *contents;

+ (id)autoFillSuggestionWithContents:(id)arg1;

- (void).cxx_destruct;
- (id)_keyboardCandidate;
- (id)contents;
- (id)initWithContents:(id)arg1;

@end
