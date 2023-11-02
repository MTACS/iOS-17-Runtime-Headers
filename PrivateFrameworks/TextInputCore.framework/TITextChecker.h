
@interface TITextChecker : NSObject {
    <_TIUITextChecking> * _checker;
}

@property (nonatomic, readonly) <_TIUITextChecking> *checker;

+ (id)_UITextCheckerWithAsynchronousLoading:(bool)arg1;

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })checkSpellingOfString:(id)arg1 startingAt:(long long)arg2 language:(id)arg3 wrap:(bool)arg4 correction:(id*)arg5;
- (id)checker;
- (bool)doneLoading;
- (id)init;
- (id)initWithAsynchronousLoading:(bool)arg1;

@end
