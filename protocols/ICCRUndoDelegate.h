
@protocol ICCRUndoDelegate <NSObject>

@required

- (void)addUndoCommandsForObject:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 7: id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*
- (bool)wantsUndoCommands;

@end
