
@interface REMMutableCRUndo : NSObject {
    NSMutableArray * _undoBlocks;
}

@property (nonatomic, readonly) NSMutableArray *undoBlocks;

- (void).cxx_destruct;
- (void)addUndoBlock:(id /* block */)arg1;
- (id)immutableCopy;
- (id)init;
- (id)undoBlocks;

@end
