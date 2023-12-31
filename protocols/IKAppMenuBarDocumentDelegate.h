
@protocol IKAppMenuBarDocumentDelegate <NSObject>

@optional

- (void)menuBarDocument:(IKAppMenuBarDocument *)arg1 didReplaceDocumentForEntityWithUniqueIdentifier:(id <NSCopying>)arg2;
- (void)menuBarDocument:(IKAppMenuBarDocument *)arg1 didReplaceDocumentForMenuItem:(IKViewElement *)arg2;
- (void)menuBarDocument:(IKAppMenuBarDocument *)arg1 didSelectMenuItem:(IKViewElement *)arg2 animated:(bool)arg3;

@end
