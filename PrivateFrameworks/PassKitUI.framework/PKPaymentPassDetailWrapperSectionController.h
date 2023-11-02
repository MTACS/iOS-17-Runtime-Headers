
@interface PKPaymentPassDetailWrapperSectionController : NSObject <PKTableViewSectionController> {
    NSArray * _sectionIdentifiers;
    PKPaymentPassDetailViewController * _viewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *sectionIdentifiers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)editingStyleForRowAtIndexPath:(id)arg1 sectionIdentifier:(id)arg2;
- (double)estimatedHeightForRowAtIndexPath:(id)arg1 sectionIdentifier:(id)arg2;
- (id)init;
- (id)initWithViewController:(id)arg1;
- (id)sectionIdentifiers;
- (void)setSectionIdentifiers:(id)arg1;
- (bool)shouldDrawBottomSeparatorForSectionIdentifier:(id)arg1;
- (bool)shouldDrawTopSeparatorForSectionIdentifier:(id)arg1;
- (bool)shouldHighlightRowAtIndexPath:(id)arg1 sectionIdentifier:(id)arg2;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 sectionIdentifier:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 sectionIdentifier:(id)arg3;
- (id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(struct CGPoint { double x1; double x2; })arg3 sectionIdentifier:(id)arg4;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 sectionIdentifier:(id)arg3;
- (double)tableView:(id)arg1 heightForFooterInSectionIdentifier:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSectionIdentifier:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 sectionIdentifier:(id)arg3;
- (id)tableView:(id)arg1 leadingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2 sectionIdentifier:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSectionIdentifier:(id)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2 sectionIdentifier:(id)arg3;
- (id)tableView:(id)arg1 viewForFooterInSectionIdentifier:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSectionIdentifier:(id)arg2;
- (id)titleForFooterInSectionIdentifier:(id)arg1;
- (id)titleForHeaderInSectionIdentifier:(id)arg1;

@end
