
@interface PRTypologyCandidate : NSObject {
    NSString * _candidateString;
    double  _closeTime;
    bool  _isOpen;
    double  _openTime;
    NSTextCheckingResult * _result;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _selectedRange;
}

+ (id)openTypologyCandidate:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 inString:(id)arg3;

- (void)closeTypologyCandidateWithResult:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;

@end
