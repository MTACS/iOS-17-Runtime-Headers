
@interface WDTableViewSection : NSObject {
    <WDTableViewSectionDelegate> * _delegate;
    unsigned long long  _section;
}

@property (nonatomic, readonly) <WDTableViewSectionDelegate> *delegate;
@property (nonatomic, readonly) unsigned long long section;

- (void).cxx_destruct;
- (void)accessoryButtonTappedForRow:(unsigned long long)arg1;
- (void)activate;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (id)cellForRow:(unsigned long long)arg1 table:(id)arg2;
- (void)deactivate;
- (id)delegate;
- (void)didSelectRow:(unsigned long long)arg1 representedByCell:(id)arg2 withCompletion:(id /* block */)arg3;
- (double)estimatedHeightForRow:(unsigned long long)arg1;
- (double)heightForFooter;
- (double)heightForHeader;
- (double)heightForRow:(unsigned long long)arg1;
- (id)initWithDelegate:(id)arg1 atSection:(unsigned long long)arg2;
- (unsigned long long)numberOfRows;
- (void)reloadAnimated:(bool)arg1;
- (unsigned long long)section;
- (void)setUpWithTableViewController:(id)arg1;
- (id)titleForFooter;
- (id)titleForHeader;
- (id)viewForFooter:(id)arg1;
- (id)viewForHeader:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (id)willSelectRow:(id)arg1;

@end
