
@interface SwiftUI.NSSwiftAttributedString : NSAttributedString {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _storage;
}

@property (nonatomic, readonly) NSString *string;

- (void).cxx_destruct;
- (id)attribute:(id)arg1 atIndex:(long long)arg2 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3;
- (id)attribute:(id)arg1 atIndex:(long long)arg2 longestEffectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (id)attributedSubstringFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)attributesAtIndex:(long long)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (id)attributesAtIndex:(long long)arg1 longestEffectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)enumerateAttribute:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 options:(unsigned long long)arg3 usingBlock:(id /* block */)arg4;
- (void)enumerateAttributesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 options:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (id)init;
- (id)initWithAttributedString:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfMarkdownFileAtURL:(id)arg1 options:(id)arg2 baseURL:(id)arg3 error:(id*)arg4;
- (id)initWithData:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4;
- (id)initWithFileURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4;
- (id)initWithHTML:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3;
- (id)initWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
- (id)initWithMarkdown:(id)arg1 options:(id)arg2 baseURL:(id)arg3 error:(id*)arg4;
- (id)initWithMarkdownString:(id)arg1 options:(id)arg2 baseURL:(id)arg3 error:(id*)arg4;
- (id)initWithString:(id)arg1;
- (id)initWithString:(id)arg1 attributes:(id)arg2;
- (id)initWithURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4;
- (bool)isEqualToAttributedString:(id)arg1;
- (id)string;

@end
