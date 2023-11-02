
@protocol NSMergeableTransformableStringAttributeValue <NSMergeableTransformableAttributeValue>

@required

- (void)appendString:(NSString *)arg1;
- (void)insertString:(NSString *)arg1 atIndex:(unsigned long long)arg2;
- (void)removeSubrange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)replaceSubrange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withString:(NSString *)arg2;
- (void)setString:(NSString *)arg1;

@end
