
@interface PaperKit.CRTextStorage : CRTextStorageBase {
    void darkMode;
    void isFixingAttributes;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  mergeableString;
    void viewAttributedString;
}

- (void).cxx_destruct;
- (void)fixAttributesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)init;
- (id)initWithAttachment:(id)arg1 attributes:(id)arg2;
- (id)initWithAttributedString:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfMarkdownFileAtURL:(id)arg1 options:(id)arg2 baseURL:(id)arg3 error:(id*)arg4;
- (id)initWithData:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4;
- (id)initWithFileURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4;
- (id)initWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
- (id)initWithMarkdown:(id)arg1 options:(id)arg2 baseURL:(id)arg3 error:(id*)arg4;
- (id)initWithMarkdownString:(id)arg1 options:(id)arg2 baseURL:(id)arg3 error:(id*)arg4;
- (id)initWithString:(id)arg1;
- (id)initWithString:(id)arg1 attributes:(id)arg2;
- (id)initWithURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4;
- (id)mutableAttributedString;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withString:(id)arg2;
- (void)setAttributes:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;

@end
