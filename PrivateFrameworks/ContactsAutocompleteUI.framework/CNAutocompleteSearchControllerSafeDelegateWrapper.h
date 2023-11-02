
@interface CNAutocompleteSearchControllerSafeDelegateWrapper : NSObject <CNAutocompleteSearchControllerInternalDelegate> {
    <CNAutocompleteSearchControllerInternalDelegate> * _delegate;
    struct { 
        unsigned int didAddRecipient : 1; 
        unsigned int didRemoveRecipient : 1; 
        unsigned int composeRecipientForAddress : 1; 
        unsigned int willShowResultsView : 1; 
        unsigned int didShowResultsView : 1; 
        unsigned int willHideResultsView : 1; 
        unsigned int didHideResultsView : 1; 
        unsigned int textViewTextDidChange : 1; 
        unsigned int presentationOptionsForRecipient : 1; 
        unsigned int preferredRecipientForRecipient : 1; 
        unsigned int tintColorForRecipient : 1; 
        unsigned int textViewWillChangeSize : 1; 
        unsigned int textViewDidChangeSize : 1; 
        unsigned int didTapTextViewAccessoryButtonForSearchController : 1; 
        unsigned int didTapTextViewAccessoryButtonForSearchControllerAnchoredToView : 1; 
        unsigned int didTapTableAccessoryForRecipient : 1; 
        unsigned int contextMenuConfigurationForRecipient : 1; 
        unsigned int supplementalGroupsForSearchQuery : 1; 
        unsigned int imageDataForRecipient : 1; 
        unsigned int willDisplayRow : 1; 
        unsigned int didEndDisplayingRow : 1; 
        unsigned int didAddRecipientByResultsController : 1; 
        unsigned int didAddRecipientBySuggestionsController : 1; 
    }  _delegateFlags;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNAutocompleteSearchControllerInternalDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)log;

- (void).cxx_destruct;
- (id)delegate;
- (void)didTapTextViewAccessoryButtonForSearchController:(id)arg1;
- (void)didTapTextViewAccessoryButtonForSearchController:(id)arg1 anchoredToView:(id)arg2;
- (id)initWithDelegate:(id)arg1;
- (id)searchController:(id)arg1 composeRecipientForAddress:(id)arg2;
- (id)searchController:(id)arg1 contextMenuConfigurationForRecipient:(id)arg2;
- (void)searchController:(id)arg1 didAddRecipient:(id)arg2;
- (void)searchController:(id)arg1 didAddRecipientByResultsController:(id)arg2;
- (void)searchController:(id)arg1 didAddRecipientBySuggestionsController:(id)arg2;
- (void)searchController:(id)arg1 didEndDisplayingRowForRecipient:(id)arg2;
- (void)searchController:(id)arg1 didHideResultsView:(id)arg2;
- (void)searchController:(id)arg1 didRemoveRecipient:(id)arg2;
- (void)searchController:(id)arg1 didShowResultsView:(id)arg2;
- (void)searchController:(id)arg1 didTapTableAccessoryForRecipient:(id)arg2;
- (bool)searchController:(id)arg1 imageDataForRecipient:(id)arg2 imageUpdateBlock:(id /* block */)arg3;
- (id)searchController:(id)arg1 preferredRecipientForRecipient:(id)arg2;
- (unsigned long long)searchController:(id)arg1 presentationOptionsForRecipient:(id)arg2;
- (bool)searchController:(id)arg1 supplementalGroupsForSearchQuery:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)searchController:(id)arg1 textViewDidChangeSize:(struct CGSize { double x1; double x2; })arg2;
- (void)searchController:(id)arg1 textViewTextDidChange:(id)arg2;
- (void)searchController:(id)arg1 textViewWillChangeSize:(struct CGSize { double x1; double x2; })arg2;
- (id)searchController:(id)arg1 tintColorForRecipient:(id)arg2;
- (void)searchController:(id)arg1 willDisplayRowForRecipient:(id)arg2;
- (void)searchController:(id)arg1 willHideResultsView:(id)arg2;
- (void)searchController:(id)arg1 willShowResultsView:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
