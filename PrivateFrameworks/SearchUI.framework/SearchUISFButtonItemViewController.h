
@interface SearchUISFButtonItemViewController : UIViewController <SearchUIButtonItemViewDelegate> {
    SearchUICommandButtonItem * _buttonItem;
    SearchUIButtonItemView * _buttonItemView;
    unsigned long long  _buttonItemViewType;
    <SearchUIFeedbackDelegate> * _feedbackDelegate;
    SearchUIRowModel * _rowModel;
}

@property (nonatomic, retain) SearchUICommandButtonItem *buttonItem;
@property (nonatomic, retain) SearchUIButtonItemView *buttonItemView;
@property (nonatomic) unsigned long long buttonItemViewType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <SearchUIFeedbackDelegate> *feedbackDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic) SearchUIRowModel *rowModel;
@property (readonly) Class superclass;
@property (retain) NUIContainerBoxView *view;

+ (Class)searchUIButtonItemViewClass;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)buttonItem;
- (id)buttonItemView;
- (unsigned long long)buttonItemViewType;
- (void)buttonPressed;
- (id)feedbackDelegate;
- (id)init;
- (id)previewCommandHandler;
- (id)rowModel;
- (void)setButtonItem:(id)arg1;
- (void)setButtonItemView:(id)arg1;
- (void)setButtonItemViewType:(unsigned long long)arg1;
- (void)setFeedbackDelegate:(id)arg1;
- (void)setRowModel:(id)arg1;
- (void)updateWithButtonItem:(id)arg1 buttonItemViewType:(unsigned long long)arg2;

@end
