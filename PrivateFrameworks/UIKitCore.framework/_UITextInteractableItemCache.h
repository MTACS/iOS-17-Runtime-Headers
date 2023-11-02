
@interface _UITextInteractableItemCache : NSObject {
    NSMutableSet * _attachmentItems;
    NSMutableSet * _linkItems;
    NSMutableSet * _tagItems;
}

@property (nonatomic, retain) NSMutableSet *attachmentItems;
@property (nonatomic, retain) NSMutableSet *linkItems;
@property (nonatomic, retain) NSMutableSet *tagItems;

- (void).cxx_destruct;
- (id)_cachedItemInSet:(id)arg1 predicate:(id /* block */)arg2;
- (void)addItem:(id)arg1;
- (id)attachmentItems;
- (id)init;
- (void)invalidate;
- (id)itemForAttachment:(id)arg1 range:(id)arg2;
- (id)itemForLink:(id)arg1 range:(id)arg2;
- (id)itemForTag:(id)arg1 range:(id)arg2;
- (id)linkItems;
- (void)removeItem:(id)arg1;
- (void)setAttachmentItems:(id)arg1;
- (void)setLinkItems:(id)arg1;
- (void)setTagItems:(id)arg1;
- (id)tagItems;

@end
