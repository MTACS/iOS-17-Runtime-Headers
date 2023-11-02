
@interface _UITextInteractableTagItem : _UITextInteractableItem {
    NSString * _tag;
}

@property (nonatomic, retain) NSString *tag;

- (void).cxx_destruct;
- (id)_itemRepresentationWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)_showsPreviewByDefault;
- (bool)isEqual:(id)arg1;
- (bool)isTagItem;
- (void)setTag:(id)arg1;
- (id)tag;

@end
