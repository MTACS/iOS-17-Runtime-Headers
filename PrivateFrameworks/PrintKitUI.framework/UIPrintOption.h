
@interface UIPrintOption : NSObject {
    bool  _collapsed;
    UIPrintInfo * _printInfo;
    UIPrintPanelViewController * _printPanelViewController;
    bool  _shouldShow;
    NSString * _summary;
    UITableViewCell * _tableViewCell;
    NSString * _title;
}

@property (nonatomic) bool collapsed;
@property (nonatomic, retain) UIPrintInfo *printInfo;
@property (nonatomic) UIPrintPanelViewController *printPanelViewController;
@property (nonatomic) bool shouldShow;
@property (nonatomic, retain) NSString *summary;
@property (nonatomic, retain) UITableViewCell *tableViewCell;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (bool)canDismiss;
- (bool)collapsed;
- (void)didSelectPrintOption;
- (void)dismissKeyboard;
- (id)initWithPrintInfo:(id)arg1 printPanelViewController:(id)arg2;
- (bool)keyboardShowing;
- (id)printInfo;
- (id)printOptionDetailView;
- (id)printOptionTableViewCell;
- (id)printPanelViewController;
- (void)setCollapsed:(bool)arg1;
- (void)setPrintInfo:(id)arg1;
- (void)setPrintPanelViewController:(id)arg1;
- (void)setShouldShow:(bool)arg1;
- (void)setSummary:(id)arg1;
- (void)setTableViewCell:(id)arg1;
- (void)setTitle:(id)arg1;
- (bool)shouldShow;
- (id)summary;
- (id)tableViewCell;
- (id)title;
- (void)updatePrintOptionSummary;

@end
