
@interface DOMHTMLFrameElement : DOMHTMLElement {
    int  _height;
    int  _width;
}

@property (readonly) DOMDocument *contentDocument;
@property (nonatomic, readonly) WebFrame *contentFrame;
@property (readonly) DOMAbstractView *contentWindow;
@property (copy) NSString *frameBorder;
@property (readonly) int height;
@property (copy) NSString *location;
@property (copy) NSString *longDesc;
@property (copy) NSString *marginHeight;
@property (copy) NSString *marginWidth;
@property (copy) NSString *name;
@property bool noResize;
@property (copy) NSString *scrolling;
@property (copy) NSString *src;
@property (readonly) int width;

- (id)contentDocument;
- (id)contentFrame;
- (id)contentWindow;
- (id)frameBorder;
- (int)height;
- (id)location;
- (id)longDesc;
- (id)marginHeight;
- (id)marginWidth;
- (id)name;
- (bool)noResize;
- (id)scrolling;
- (void)setFrameBorder:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setLongDesc:(id)arg1;
- (void)setMarginHeight:(id)arg1;
- (void)setMarginWidth:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNoResize:(bool)arg1;
- (void)setScrolling:(id)arg1;
- (void)setSrc:(id)arg1;
- (id)src;
- (int)structuralComplexityContribution;
- (int)width;

@end