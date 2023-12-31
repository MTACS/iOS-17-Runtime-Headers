
@interface DOMHTMLEmbedElement : DOMHTMLElement

@property (copy) NSString *align;
@property int height;
@property (copy) NSString *name;
@property (copy) NSString *src;
@property (copy) NSString *type;
@property int width;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

- (id)align;
- (int)height;
- (id)name;
- (void)setAlign:(id)arg1;
- (void)setHeight:(int)arg1;
- (void)setName:(id)arg1;
- (void)setSrc:(id)arg1;
- (void)setType:(id)arg1;
- (void)setWidth:(int)arg1;
- (id)src;
- (id)type;
- (int)width;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (bool)showsTapHighlight;

@end
