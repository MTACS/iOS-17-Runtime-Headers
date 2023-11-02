
@interface TKTonePickerTableView : UITableView {
    <TKTonePickerTableViewLayoutMarginsObserver> * _layoutMarginsObserver;
    <TKTonePickerTableViewSeparatorObserver> * _separatorObserver;
}

@property (nonatomic) <TKTonePickerTableViewLayoutMarginsObserver> *layoutMarginsObserver;
@property (nonatomic) <TKTonePickerTableViewSeparatorObserver> *separatorObserver;

- (void).cxx_destruct;
- (void)_handleSeparatorColorDidChange;
- (void)layoutMarginsDidChange;
- (id)layoutMarginsObserver;
- (void)layoutSubviews;
- (id)separatorObserver;
- (void)setLayoutMarginsObserver:(id)arg1;
- (void)setSeparatorColor:(id)arg1;
- (void)setSeparatorObserver:(id)arg1;

@end
