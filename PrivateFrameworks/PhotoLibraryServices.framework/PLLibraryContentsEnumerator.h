
@interface PLLibraryContentsEnumerator : NSObject {
    NSMutableArray * _albumHandlerBlocks;
    NSMutableArray * _assetHandlerBlocks;
    bool  _concurrent;
    NSMutableArray * _conversationHandlerBlocks;
    NSMutableArray * _endOfListHandlerBlocks;
    NSMutableArray * _faceHandlerBlocks;
    NSMutableArray * _personHandlerBlocks;
    NSMutableArray * _resourceHandlerBlocks;
    NSManagedObjectContext * _sourceContext;
}

@property (nonatomic, readonly) bool concurrent;
@property (nonatomic, readonly) NSManagedObjectContext *sourceContext;

- (void).cxx_destruct;
- (id)_setupAlbumController;
- (id)_setupAssetResourceFaceController;
- (id)_setupConversationController;
- (id)_setupPersonController;
- (void)addAlbumVisitor:(id /* block */)arg1;
- (void)addAssetVisitor:(id /* block */)arg1;
- (void)addConversationVisitor:(id /* block */)arg1;
- (void)addEndOfListVisitor:(id /* block */)arg1;
- (void)addFaceVisitor:(id /* block */)arg1;
- (void)addPersonVisitor:(id /* block */)arg1;
- (void)addResourceVisitor:(id /* block */)arg1;
- (bool)concurrent;
- (id)initWithSourceManagedObjectContext:(id)arg1 concurrent:(bool)arg2;
- (bool)processObjectsWithError:(id*)arg1;
- (id)sourceContext;

@end
