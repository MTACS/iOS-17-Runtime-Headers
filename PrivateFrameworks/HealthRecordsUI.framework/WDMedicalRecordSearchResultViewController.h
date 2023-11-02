
@interface WDMedicalRecordSearchResultViewController : WDMedicalRecordTimelineViewController {
    <WDMedicalRecordSearchResultViewControllerDelegate> * _delegate;
    NSPredicate * _predicate;
}

@property (nonatomic) <WDMedicalRecordSearchResultViewControllerDelegate> *delegate;
@property (nonatomic, retain) NSPredicate *predicate;

- (void).cxx_destruct;
- (id)delegate;
- (id)predicate;
- (void)setDelegate:(id)arg1;
- (void)setPredicate:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

@end
