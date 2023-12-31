
@interface QLEditedItem : NSObject {
    NSURL * _editedFileURL;
    <QLPreviewItem> * _item;
}

@property (nonatomic, copy) NSURL *editedFileURL;
@property (nonatomic, copy) <QLPreviewItem> *item;

- (void).cxx_destruct;
- (id)editedFileURL;
- (id)initWithItem:(id)arg1 editedFileURL:(id)arg2;
- (id)item;
- (void)setEditedFileURL:(id)arg1;
- (void)setItem:(id)arg1;

@end
