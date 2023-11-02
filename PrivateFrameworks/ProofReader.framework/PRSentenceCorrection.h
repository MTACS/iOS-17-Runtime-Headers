
@interface PRSentenceCorrection : NSObject {
    int  _category;
    NSArray * _corrections;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    NSString * _word;
}

- (int)category;
- (id)corrections;
- (void)dealloc;
- (id)description;
- (id)initWithCategory:(int)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 word:(id)arg3 corrections:(id)arg4;
- (bool)presentAsAutocorrection;
- (bool)presentAsGrammarError;
- (bool)presentAsSpellingError;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (id)word;

@end
