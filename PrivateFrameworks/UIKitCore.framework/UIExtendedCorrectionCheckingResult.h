
@interface UIExtendedCorrectionCheckingResult : NSCorrectionCheckingResult {
    NSDictionary * _detail;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _sentenceRange;
}

- (void).cxx_destruct;
- (id)detail;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 replacementString:(id)arg2 sentenceRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 detail:(id)arg4;
- (bool)isPostEditingResult;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })sentenceRange;

@end
