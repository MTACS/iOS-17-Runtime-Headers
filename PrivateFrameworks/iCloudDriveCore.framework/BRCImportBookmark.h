
@interface BRCImportBookmark : NSObject {
    bool  _isTrashBookmark;
    BRCItemID * _itemID;
    BRMangledID * _mangledID;
}

@property (nonatomic, readonly) bool isTrashBookmark;
@property (nonatomic, readonly) BRCItemID *itemID;
@property (nonatomic, readonly) BRMangledID *mangledID;

+ (id)extractBookmarkDataFromTemplateItem:(id)arg1 isTrashBookmark:(bool*)arg2;

- (void).cxx_destruct;
- (id)initWithBookmarkData:(id)arg1 isTrashBookmark:(bool)arg2 session:(id)arg3;
- (bool)isTrashBookmark;
- (id)itemID;
- (id)mangledID;

@end
