
@interface UIWebTextPlaceholder : UITextPlaceholder {
    DOMElement * _element;
    UIWebDocumentView * _webDocumentView;
}

@property (nonatomic, retain) DOMElement *element;

+ (id)placeholderWithWebDocumentView:(id)arg1;

- (void)dealloc;
- (id)element;
- (id)rects;
- (void)setElement:(id)arg1;

@end
