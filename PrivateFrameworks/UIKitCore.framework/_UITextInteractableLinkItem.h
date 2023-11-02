
@interface _UITextInteractableLinkItem : _UITextInteractableItem {
    NSURL * _link;
}

@property (nonatomic, retain) NSURL *link;

- (void).cxx_destruct;
- (id)_itemRepresentationWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)isEqual:(id)arg1;
- (bool)isLinkItem;
- (id)link;
- (void)setLink:(id)arg1;

@end
