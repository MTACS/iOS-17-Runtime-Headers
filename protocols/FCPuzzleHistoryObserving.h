
@protocol FCPuzzleHistoryObserving <NSObject>

@required

- (void)puzzleHistory:(FCPuzzleHistory *)arg1 didAddPuzzleItems:(NSArray *)arg2 modifiedPuzzleItems:(NSArray *)arg3 removedPuzzleItems:(NSArray *)arg4;

@end
