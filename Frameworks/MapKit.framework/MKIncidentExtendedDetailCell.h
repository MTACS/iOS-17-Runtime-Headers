
@interface MKIncidentExtendedDetailCell : MKTableViewCell <UITextViewDelegate> {
    GEOComposedRouteAdvisoryItem * _advisoryItem;
    <IncidentExtendedDetailCellDelegate> * _delegate;
    UIImageView * _imageView;
    UIStackView * _stackView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <IncidentExtendedDetailCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didTapActionButton;
- (void)_setConstraints;
- (void)configureWithAdvisoryItem:(id)arg1;
- (id)customBodyTextView;
- (id)delegate;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;

@end
