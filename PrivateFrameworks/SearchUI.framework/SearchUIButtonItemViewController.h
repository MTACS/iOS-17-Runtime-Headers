
@interface SearchUIButtonItemViewController : NSObject {
    SFCommandButtonItem * _buttonItem;
    bool  _compact;
    <SearchUIFeedbackDelegate> * _feedbackDelegate;
    SearchUIRowModel * _rowModel;
    UIView * _view;
}

@property (nonatomic, retain) SFCommandButtonItem *buttonItem;
@property (nonatomic) bool compact;
@property (nonatomic) <SearchUIFeedbackDelegate> *feedbackDelegate;
@property (nonatomic, retain) SearchUIRowModel *rowModel;
@property (nonatomic, retain) UIView *view;

- (void).cxx_destruct;
- (id)buttonItem;
- (bool)compact;
- (id)feedbackDelegate;
- (id)rowModel;
- (void)setButtonItem:(id)arg1;
- (void)setCompact:(bool)arg1;
- (void)setFeedbackDelegate:(id)arg1;
- (void)setRowModel:(id)arg1;
- (void)setView:(id)arg1;
- (id)view;

@end
