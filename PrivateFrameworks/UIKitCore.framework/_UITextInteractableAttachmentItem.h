
@interface _UITextInteractableAttachmentItem : _UITextInteractableItem {
    NSTextAttachment * _attachment;
}

@property (nonatomic, retain) NSTextAttachment *attachment;

- (void).cxx_destruct;
- (id)_itemRepresentationWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)attachment;
- (bool)isAttachmentItem;
- (bool)isEqual:(id)arg1;
- (void)setAttachment:(id)arg1;

@end
