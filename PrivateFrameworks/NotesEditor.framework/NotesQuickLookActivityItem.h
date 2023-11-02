
@interface NotesQuickLookActivityItem : NSObject {
    <NotesQuickLookActivityItemDelegate> * _delegate;
    unsigned long long  _firstItemIndex;
    NSArray * _previewItems;
}

@property (nonatomic) <NotesQuickLookActivityItemDelegate> *delegate;
@property (nonatomic) unsigned long long firstItemIndex;
@property (nonatomic, retain) NSArray *previewItems;

- (void).cxx_destruct;
- (id)delegate;
- (unsigned long long)firstItemIndex;
- (id)previewItems;
- (void)setDelegate:(id)arg1;
- (void)setFirstItemIndex:(unsigned long long)arg1;
- (void)setPreviewItems:(id)arg1;

@end
