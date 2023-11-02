
@interface DOMHTMLIFrameElement : DOMHTMLElement

@property (copy) NSString *align;
@property (readonly) DOMDocument *contentDocument;
@property (nonatomic, readonly) WebFrame *contentFrame;
@property (readonly) DOMAbstractView *contentWindow;
@property (copy) NSString *frameBorder;
@property (copy) NSString *height;
@property (copy) NSString *longDesc;
@property (copy) NSString *marginHeight;
@property (copy) NSString *marginWidth;
@property (copy) NSString *name;
@property (copy) NSString *scrolling;
@property (copy) NSString *src;
@property (copy) NSString *width;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

- (id)align;
- (id)contentDocument;
- (id)contentFrame;
- (id)contentWindow;
- (id)frameBorder;
- (id)height;
- (id)longDesc;
- (id)marginHeight;
- (id)marginWidth;
- (id)name;
- (id)sandbox;
- (id)scrolling;
- (void)setAlign:(id)arg1;
- (void)setFrameBorder:(id)arg1;
- (void)setHeight:(id)arg1;
- (void)setLongDesc:(id)arg1;
- (void)setMarginHeight:(id)arg1;
- (void)setMarginWidth:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSandbox:(id)arg1;
- (void)setScrolling:(id)arg1;
- (void)setSrc:(id)arg1;
- (void)setSrcdoc:(id)arg1;
- (void)setWidth:(id)arg1;
- (id)src;
- (id)srcdoc;
- (int)structuralComplexityContribution;
- (id)width;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (bool)nodeCanBecomeFirstResponder;

@end
