
@interface PRTypologyCorrection : NSObject {
    double  _closeTime;
    NSTextCheckingResult * _correctionResult;
    bool  _isOpen;
    NSMutableString * _logs;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _misspelledRange;
    NSString * _misspelling;
    double  _openTime;
}

+ (id)openTypologyCorrectionWithString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 inString:(id)arg3;

- (void)addTypologyCorrectionLog:(id)arg1;
- (void)closeTypologyCorrectionWithResult:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;

@end
