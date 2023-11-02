
@protocol PXSuggestLessPeopleSelectionViewControllerDelegate <NSObject>

@required

- (void)completeActionWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)didSelectPersonToSuggestLess:(void *)arg1 dismissViewController:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: PHPerson *, UIViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)dismissViewController:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: UIViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
