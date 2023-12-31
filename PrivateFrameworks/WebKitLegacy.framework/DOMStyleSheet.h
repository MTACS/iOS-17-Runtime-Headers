
@interface DOMStyleSheet : DOMObject

@property bool disabled;
@property (readonly, copy) NSString *href;
@property (readonly) DOMMediaList *media;
@property (readonly) DOMNode *ownerNode;
@property (readonly) DOMStyleSheet *parentStyleSheet;
@property (readonly, copy) NSString *title;
@property (readonly, copy) NSString *type;

- (void)dealloc;
- (bool)disabled;
- (id)href;
- (id)media;
- (id)ownerNode;
- (id)parentStyleSheet;
- (void)setDisabled:(bool)arg1;
- (id)title;
- (id)type;

@end
