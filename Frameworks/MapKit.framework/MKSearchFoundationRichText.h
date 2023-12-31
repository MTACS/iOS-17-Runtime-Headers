
@interface MKSearchFoundationRichText : SFRichText {
    id /* block */  _completionHandlers;
}

@property (nonatomic, copy) id /* block */ completionHandlers;

- (void).cxx_destruct;
- (void)_invokeCompletionHandlers;
- (id /* block */)completionHandlers;
- (id)initRichTextTitleWithMapItem:(id)arg1 resultsType:(unsigned long long)arg2;
- (id)initWithString:(id)arg1;
- (bool)isRichTextResolved;
- (void)loadRichTextWithCompletionHandler:(id /* block */)arg1;
- (void)setCompletionHandlers:(id /* block */)arg1;
- (void)setFormattedTextPieces:(id)arg1;
- (void)setText:(id)arg1;

@end
