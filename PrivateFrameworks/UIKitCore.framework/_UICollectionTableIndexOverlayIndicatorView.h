
@interface _UICollectionTableIndexOverlayIndicatorView : UIView {
    <_UICollectionTableIndexOverlayHost> * _host;
    UILabel * _label;
    UITapGestureRecognizer * _tapGestureRecognizer;
}

@property (nonatomic, copy) NSString *currentText;

- (void).cxx_destruct;
- (void)_tapGestureChanged:(id)arg1;
- (void)_willChangeToIdiom:(long long)arg1 onScreen:(id)arg2;
- (id)currentText;
- (id)initWithHost:(id)arg1;
- (void)layoutSubviews;
- (void)setCurrentText:(id)arg1;

@end
