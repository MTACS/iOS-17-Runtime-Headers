
@interface WFTriggerSuggestionViewController : UIViewController <UISearchResultsUpdating> {
    void dataSource;
    void delegate;
    void hostingController;
    void searchController;
    void selectedEntryMetadataData;
    void selectedReference;
    void trigger;
}

@property (nonatomic) <WFTriggerSuggestionViewControllerDelegate> *delegate;

- (void).cxx_destruct;
- (id)contentScrollViewForEdge:(unsigned long long)arg1;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithTrigger:(id)arg1 selectedEntryMetadataData:(id)arg2 selectedReference:(id)arg3;
- (void)loadView;
- (void)setDelegate:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)viewDidLoad;

@end
