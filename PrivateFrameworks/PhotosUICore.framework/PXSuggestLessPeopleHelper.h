
@interface PXSuggestLessPeopleHelper : NSObject <PXSuggestLessPeopleOptionSelectionViewControllerDelegate, PXSuggestLessPeopleSelectionViewControllerDelegate> {
    <PXSuggestLessPeopleHelperDelegate> * _delegate;
    NSUndoManager * _undoManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXSuggestLessPeopleHelperDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUndoManager *undoManager;

- (void).cxx_destruct;
- (void)_showSuggestLessOptionForPerson:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_showSuggestLessPeopleSelectionForPeople:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_suggestLessPeople:(id)arg1 withSuggestLessOption:(long long)arg2 undoManager:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)completeActionWithCompletionHandler:(id /* block */)arg1;
- (void)completeOptionSelectionActionWithCompletionHandler:(id /* block */)arg1;
- (id)delegate;
- (void)didSelectPersonToSuggestLess:(id)arg1 dismissViewController:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)dismissOptionSelectionViewController:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dismissViewController:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithUndoManager:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)suggestLessPeople:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)suggestLessPeople:(id)arg1 withSuggestLessOption:(long long)arg2 undoManager:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)suggestLessPeopleFromAssets:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)undoManager;

@end
