
@interface CTAttributedStringWrapper : NSObject

+ (id)attributedStringFromData:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4;
+ (bool)containsAttachments:(id)arg1;
+ (id)dataFromAttributedString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 documentAttributes:(id)arg3 error:(id*)arg4;

@end
