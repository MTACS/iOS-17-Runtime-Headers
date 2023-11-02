
@protocol ICAttachmentFindable <NSObject>

@required

- (void)drawCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inFindableString:(NSAttributedString *)arg2 forContentView:(UIView *)arg3;
- (NSArray *)rectsForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inFindableString:(NSAttributedString *)arg2;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withString:(NSString *)arg2 inFindableString:(NSAttributedString *)arg3;
- (void)scrollToRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inFindableString:(NSAttributedString *)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectedRangeWithinRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inFindableString:(NSAttributedString *)arg2;
- (void)setSelectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inFindableString:(NSAttributedString *)arg2;
- (UIView *)viewForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inFindableString:(NSAttributedString *)arg2;

@end
