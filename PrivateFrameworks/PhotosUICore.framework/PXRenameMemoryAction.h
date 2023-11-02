
@interface PXRenameMemoryAction : PXPhotosAction {
    PHMemory * _memory;
    NSString * _redoSubtitle;
    NSString * _redoTitle;
    NSString * _undoSubtitle;
    NSString * _undoTitle;
}

@property (nonatomic, readonly) PHMemory *memory;
@property (nonatomic, readonly, copy) NSString *redoSubtitle;
@property (nonatomic, readonly, copy) NSString *redoTitle;
@property (nonatomic, readonly, copy) NSString *undoSubtitle;
@property (nonatomic, readonly, copy) NSString *undoTitle;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)actionNameLocalizationKey;
- (id)initWithMemory:(id)arg1 title:(id)arg2 subtitle:(id)arg3;
- (id)memory;
- (void)performAction:(id /* block */)arg1;
- (void)performUndo:(id /* block */)arg1;
- (id)redoSubtitle;
- (id)redoTitle;
- (id)undoSubtitle;
- (id)undoTitle;

@end
