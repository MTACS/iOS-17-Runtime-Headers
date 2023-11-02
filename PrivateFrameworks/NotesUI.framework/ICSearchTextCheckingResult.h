
@interface ICSearchTextCheckingResult : NSTextCheckingResult {
    NSString * _csEvaluatorMatchString;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _ic_range;
}

@property (nonatomic, retain) NSString *csEvaluatorMatchString;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } ic_range;

- (void).cxx_destruct;
- (id)csEvaluatorMatchString;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })ic_range;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 csEvaluatorMatchString:(id)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setCsEvaluatorMatchString:(id)arg1;
- (void)setIc_range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
