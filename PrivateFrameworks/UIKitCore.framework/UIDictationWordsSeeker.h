
@interface UIDictationWordsSeeker : NSObject {
    bool  _reverse;
    NSString * _targetString;
    NSArray * _targetStringWords;
    NSString * _targetSubstring;
    NSArray * _targetSubstringWords;
}

@property (nonatomic) bool reverse;
@property (nonatomic, retain) NSString *targetString;
@property (nonatomic, retain) NSArray *targetStringWords;
@property (nonatomic, retain) NSString *targetSubstring;
@property (nonatomic, retain) NSArray *targetSubstringWords;

+ (bool)_isSubstringArray:(id)arg1 equalToSubstringArray:(id)arg2;
+ (id)_prepareAllWordsWithString:(id)arg1 reverse:(bool)arg2;

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_search;
- (id)initWithString:(id)arg1 substring:(id)arg2 reverse:(bool)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfSubstring:(id)arg1 fullString:(id)arg2 reverse:(bool)arg3;
- (bool)reverse;
- (void)setReverse:(bool)arg1;
- (void)setTargetString:(id)arg1;
- (void)setTargetStringWords:(id)arg1;
- (void)setTargetSubstring:(id)arg1;
- (void)setTargetSubstringWords:(id)arg1;
- (id)targetString;
- (id)targetStringWords;
- (id)targetSubstring;
- (id)targetSubstringWords;
- (bool)validateWordBoundariesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
