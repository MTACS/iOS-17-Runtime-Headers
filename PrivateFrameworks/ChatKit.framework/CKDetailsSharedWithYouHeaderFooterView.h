
@interface CKDetailsSharedWithYouHeaderFooterView : UITableViewHeaderFooterView <CKDetailsHeaderFooterView> {
    UITextView * _sharedWithYouTextView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UITextView *sharedWithYouTextView;
@property (readonly) Class superclass;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setSharedWithYouTextView:(id)arg1;
- (id)sharedWithYouTextView;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
