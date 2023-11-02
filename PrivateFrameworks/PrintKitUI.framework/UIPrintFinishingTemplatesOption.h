
@interface UIPrintFinishingTemplatesOption : NSObject <UIPrintOptionListDelegate> {
    UITableView * _finishingOptionsTableView;
    NSMutableArray * _finishingTemplateNames;
    UITableViewCell * _finishingTemplatesCell;
    UIPrintInfo * _printInfo;
    UIPrintPanelViewController * _printPanelViewController;
    long long  _selectedTemplate;
    NSString * _summary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) UITableView *finishingOptionsTableView;
@property (nonatomic, retain) NSMutableArray *finishingTemplateNames;
@property (nonatomic, retain) UITableViewCell *finishingTemplatesCell;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIPrintInfo *printInfo;
@property (nonatomic) UIPrintPanelViewController *printPanelViewController;
@property (nonatomic) long long selectedTemplate;
@property (nonatomic, retain) NSString *summary;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)finishingOptionsTableView;
- (id)finishingTemplateNames;
- (id)finishingTemplatesCell;
- (id)initWithPrintInfo:(id)arg1 printPanelViewController:(id)arg2 finishingOptionsTableView:(id)arg3;
- (id)itemList;
- (long long)listItemSelected:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)printInfo;
- (id)printPanelViewController;
- (id)selectedItem;
- (long long)selectedTemplate;
- (void)setFinishingOptionsTableView:(id)arg1;
- (void)setFinishingTemplateNames:(id)arg1;
- (void)setFinishingTemplatesCell:(id)arg1;
- (void)setPrintInfo:(id)arg1;
- (void)setPrintPanelViewController:(id)arg1;
- (void)setSelectedTemplate:(long long)arg1;
- (void)setSummary:(id)arg1;
- (bool)shouldShow;
- (id)summary;
- (id)title;
- (void)updateFromPrintInfo;

@end
