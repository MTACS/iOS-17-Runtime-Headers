
@interface UIPrintOptionSection : NSObject {
    UIPrintInfo * _printInfo;
    NSMutableArray * _printOptions;
    UIPrintPanelViewController * _printPanelViewController;
    bool  _shouldShow;
    UITableViewCell * _tableViewCell;
    NSString * _title;
}

@property (nonatomic, retain) UIPrintInfo *printInfo;
@property (nonatomic, retain) NSMutableArray *printOptions;
@property (nonatomic) UIPrintPanelViewController *printPanelViewController;
@property (nonatomic) bool shouldShow;
@property (nonatomic, retain) UITableViewCell *tableViewCell;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (bool)canDismiss;
- (void)didSelectPrintOptionSection;
- (void)dismissKeyboard;
- (id)initWithPrintInfo:(id)arg1 printPanelViewController:(id)arg2;
- (bool)keyboardShowing;
- (id)printInfo;
- (id)printOptions;
- (id)printPanelViewController;
- (void)setPrintInfo:(id)arg1;
- (void)setPrintOptions:(id)arg1;
- (void)setPrintPanelViewController:(id)arg1;
- (void)setShouldShow:(bool)arg1;
- (void)setTableViewCell:(id)arg1;
- (void)setTitle:(id)arg1;
- (bool)shouldShow;
- (id)summaryString;
- (id)tableViewCell;
- (id)title;
- (bool)updatePrintOptionsList;
- (void)updateSectionSummary;

@end
