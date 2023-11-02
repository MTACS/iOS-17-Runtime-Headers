
@interface BRLTJaEditableStringInternal : NSObject <NSCopying> {
    void focus;
    void selection;
    void string;
    void suggestion;
    void tokenRanges;
}

@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } NSFocus;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } NSSelection;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } NSSuggestion;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, copy) NSString *string;
@property (nonatomic, readonly) NSDictionary *tokenDict;

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })NSFocus;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })NSSelection;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })NSSuggestion;
- (void)append:(id)arg1;
- (id)copyWithZone:(void*)arg1;
- (id)description;
- (id)init;
- (id)initWithString:(id)arg1 NSSelection:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 NSFocus:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 NSSuggestion:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 tokenRangeDict:(id)arg5;
- (id)initWithString:(id)arg1 selection:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 focus:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 token:(long long)arg4;
- (id)initWithString:(id)arg1 selection:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 focus:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 token:(long long)arg4 suggestion:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5;
- (bool)isEqual:(id)arg1;
- (void)setString:(id)arg1;
- (id)string;
- (id)tokenDict;
- (long long)tokenForLocation:(long long)arg1;

@end
