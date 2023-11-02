
@interface REMCRUndo : NSObject {
    NSArray * _undoBlocks;
}

@property (nonatomic, readonly) NSArray *undoBlocks;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithUndoBlocks:(id)arg1;
- (id)undoBlocks;

@end
