
@interface NewsFeed.PuzzleHistoryService : NSObject <FCPuzzleHistoryObserving> {
    void puzzleHistory;
    void puzzleHistoryObservers;
    void puzzleService;
}

- (void).cxx_destruct;
- (id)init;
- (void)puzzleHistory:(id)arg1 didAddPuzzleItems:(id)arg2 modifiedPuzzleItems:(id)arg3 removedPuzzleItems:(id)arg4;

@end
