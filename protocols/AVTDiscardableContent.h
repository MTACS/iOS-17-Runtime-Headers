
@protocol AVTDiscardableContent <NSObject>

@required

- (void)discardContent;
- (id /* block */)discardableContentHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, <AVTDiscardableContent> *, void*, id, SEL
- (void)setDiscardableContentHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <AVTDiscardableContent> *, void*

@end
