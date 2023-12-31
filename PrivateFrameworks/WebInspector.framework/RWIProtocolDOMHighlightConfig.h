
@interface RWIProtocolDOMHighlightConfig : RWIProtocolJSONObject

@property (nonatomic, retain) RWIProtocolDOMRGBAColor *borderColor;
@property (nonatomic, retain) RWIProtocolDOMRGBAColor *contentColor;
@property (nonatomic, retain) RWIProtocolDOMRGBAColor *marginColor;
@property (nonatomic, retain) RWIProtocolDOMRGBAColor *paddingColor;
@property (nonatomic) bool showInfo;

- (id)borderColor;
- (id)contentColor;
- (id)marginColor;
- (id)paddingColor;
- (void)setBorderColor:(id)arg1;
- (void)setContentColor:(id)arg1;
- (void)setMarginColor:(id)arg1;
- (void)setPaddingColor:(id)arg1;
- (void)setShowInfo:(bool)arg1;
- (bool)showInfo;

@end
