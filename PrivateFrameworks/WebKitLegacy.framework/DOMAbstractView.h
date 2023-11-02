
@interface DOMAbstractView : DOMObject

@property (readonly) DOMDocument *document;

- (void)_disconnectFrame;
- (void)dealloc;
- (id)document;

@end
