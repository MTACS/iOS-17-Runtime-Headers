
@interface UIDOMHTMLOptGroupSelectedItem : NSObject <UIWebSelectedItemPrivate> {
    DOMHTMLOptGroupElement * _node;
}

@property (nonatomic, retain) DOMHTMLOptGroupElement *_node;

- (id)_node;
- (void)dealloc;
- (id)initWithHTMLOptGroupNode:(id)arg1;
- (bool)isGroup;
- (id)node;
- (bool)selected;
- (void)setSelected:(bool)arg1;
- (void)set_node:(id)arg1;
- (void)unselect;

@end
