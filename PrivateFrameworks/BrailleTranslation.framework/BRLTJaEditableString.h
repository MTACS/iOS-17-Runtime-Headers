
@interface BRLTJaEditableString : NSObject {
    BRLTJaEditableStringInternal * _underlyingObject;
}

@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } NSFocus;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } NSSelection;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } NSSuggestion;
@property (nonatomic, readonly, copy) NSString *string;
@property (nonatomic, readonly) NSDictionary *tokenDict;
@property (readonly) BRLTJaEditableStringInternal *underlyingObject;

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })NSFocus;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })NSSelection;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })NSSuggestion;
- (void)append:(id)arg1;
- (id)init;
- (id)initWithString:(id)arg1 selection:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 focus:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 suggestion:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 tokenRanges:(id)arg5;
- (id)initWithString:(id)arg1 selection:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 focus:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 token:(long long)arg4;
- (id)initWithString:(id)arg1 selection:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 focus:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 token:(long long)arg4 suggestion:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5;
- (id)string;
- (id)tokenDict;
- (long long)tokenForLocation:(long long)arg1;
- (id)underlyingObject;

@end
