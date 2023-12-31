
@interface SUReviewsListingViewController : SUStructuredPageViewController {
    SUButtonAccessoryView * _accessoryView;
}

- (id)_accessoryView;
- (bool)_canWriteReview;
- (id)_headerItem;
- (void)_reloadHeaderView;
- (void)_writeAReview:(id)arg1;
- (void)dealloc;
- (void)loadView;
- (id)newTermsAndConditionsFooter;
- (void)reloadData;
- (void)reloadForChangedRowCount:(long long)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewWillAppear:(bool)arg1;

@end
