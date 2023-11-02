
@protocol IKJSMenuBarDocumentAppBridge <NSObject>

@required

- (IKAppDocument *)jsMenuBarDocument:(IKJSMenuBarDocument *)arg1 documentForEntityUniqueIdentifier:(id <NSCopying>)arg2;
- (void)jsMenuBarDocument:(IKJSMenuBarDocument *)arg1 setDocument:(IKAppDocument *)arg2 forEntityUniqueIdentifier:(id <NSCopying>)arg3 withOptions:(NSDictionary *)arg4;
- (void)jsMenuBarDocument:(IKJSMenuBarDocument *)arg1 setSelectedEntityUniqueIdentifier:(id <NSCopying>)arg2 withOptions:(NSDictionary *)arg3;
- (IKDOMElement *)selectedItemForJsMenuBarDocument:(IKJSMenuBarDocument *)arg1;

@end
