
@interface DOMHTMLScriptElement : DOMHTMLElement

@property (copy) NSString *charset;
@property bool defer;
@property (copy) NSString *event;
@property (copy) NSString *htmlFor;
@property (copy) NSString *src;
@property (copy) NSString *text;
@property (copy) NSString *type;

- (bool)async;
- (id)charset;
- (id)crossOrigin;
- (bool)defer;
- (id)event;
- (id)htmlFor;
- (id)nonce;
- (void)setAsync:(bool)arg1;
- (void)setCharset:(id)arg1;
- (void)setCrossOrigin:(id)arg1;
- (void)setDefer:(bool)arg1;
- (void)setEvent:(id)arg1;
- (void)setHtmlFor:(id)arg1;
- (void)setNonce:(id)arg1;
- (void)setSrc:(id)arg1;
- (void)setText:(id)arg1;
- (void)setType:(id)arg1;
- (id)src;
- (id)text;
- (id)type;

@end
