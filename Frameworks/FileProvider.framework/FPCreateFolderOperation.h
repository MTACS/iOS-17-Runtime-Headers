
@interface FPCreateFolderOperation : FPActionOperation {
    id /* block */  _createFolderCompletionBlock;
    NSString * _folderFilename;
    FPItem * _parentItem;
    FPItemID * _placeholderID;
    bool  _shouldBounceOnCollision;
}

@property (nonatomic, copy) id /* block */ createFolderCompletionBlock;
@property (nonatomic) bool shouldBounceOnCollision;

- (void).cxx_destruct;
- (void)actionMain;
- (id /* block */)createFolderCompletionBlock;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithParentItem:(id)arg1 folderName:(id)arg2;
- (void)presendNotifications;
- (void)setCreateFolderCompletionBlock:(id /* block */)arg1;
- (void)setShouldBounceOnCollision:(bool)arg1;
- (bool)shouldBounceOnCollision;

@end
