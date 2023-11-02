
@protocol REMTTHashtagHosting

@required

- (void)enumerateHashtagInRange:(void *)arg1 options:(void *)arg2 usingBlock:(void *)arg3; // needs 3 arg types, found 10: struct _NSRange { unsigned long long x1; unsigned long long x2; }, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, REMTTHashtag *, struct _NSRange { unsigned long long x1; unsigned long long x2; }, bool*, void*
- (REMTTHashtag *)hashtagAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;

@end
