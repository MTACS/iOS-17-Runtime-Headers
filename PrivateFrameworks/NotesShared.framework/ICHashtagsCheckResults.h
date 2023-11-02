
@interface ICHashtagsCheckResults : NSObject {
    NSSet * _matchingHashtagSuggestions;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _rangeOfHashtag;
}

@property (nonatomic, copy) NSSet *matchingHashtagSuggestions;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } rangeOfHashtag;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)init;
- (id)matchingHashtagSuggestions;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfHashtag;
- (void)setMatchingHashtagSuggestions:(id)arg1;
- (void)setRangeOfHashtag:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
