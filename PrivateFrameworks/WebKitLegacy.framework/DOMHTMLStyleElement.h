
@interface DOMHTMLStyleElement : DOMHTMLElement

@property bool disabled;
@property (copy) NSString *media;
@property (readonly) DOMStyleSheet *sheet;
@property (copy) NSString *type;

- (bool)disabled;
- (id)media;
- (id)nonce;
- (void)setDisabled:(bool)arg1;
- (void)setMedia:(id)arg1;
- (void)setNonce:(id)arg1;
- (void)setType:(id)arg1;
- (id)sheet;
- (id)type;

@end
