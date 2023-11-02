
@protocol PXSuggestLessPeopleOptionSelectionViewControllerDelegate <NSObject>

@required

- (void)completeOptionSelectionActionWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)dismissOptionSelectionViewController:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: UIViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)suggestLessPeople:(void *)arg1 withSuggestLessOption:(void *)arg2 undoManager:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: NSArray *, long long, NSUndoManager *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
