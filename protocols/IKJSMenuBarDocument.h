
@protocol IKJSMenuBarDocument <JSExport>

@required

- (IKDOMDocument *)getDocument:(IKJSObject *)arg1;
- (IKDOMElement *)getSelectedItem;
- (void)setDocument:(IKDOMDocument *)arg1 :(IKJSObject *)arg2 :(NSDictionary *)arg3;
- (void)setSelectedItem:(IKJSObject *)arg1 :(NSDictionary *)arg2;

@end
