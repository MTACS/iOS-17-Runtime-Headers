
@interface TUITypedStringCandidate : TIKeyboardCandidateSingle {
    NSString * _displayLabel;
}

@property (nonatomic, retain) NSString *displayLabel;

+ (id)typedStringCandidateWithLocale:(id)arg1 typedString:(id)arg2 rawTypedString:(id)arg3;

- (void).cxx_destruct;
- (id)displayLabel;
- (id)label;
- (void)setDisplayLabel:(id)arg1;

@end
