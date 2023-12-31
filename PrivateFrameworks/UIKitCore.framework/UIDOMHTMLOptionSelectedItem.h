
@interface UIDOMHTMLOptionSelectedItem : NSObject <UIWebSelectedItemPrivate> {
    DOMHTMLOptionElement * _node;
    bool  _selected;
}

@property (nonatomic, retain) DOMHTMLOptionElement *_node;

- (id)_node;
- (void)dealloc;
- (id)initWithHTMLOptionNode:(id)arg1;
- (bool)isGroup;
- (id)node;
- (bool)selected;
- (void)setSelected:(bool)arg1;
- (void)set_node:(id)arg1;
- (void)unselect;

@end
