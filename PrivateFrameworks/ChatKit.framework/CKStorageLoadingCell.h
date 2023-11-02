
@interface CKStorageLoadingCell : UITableViewCell {
    UIActivityIndicatorView * _spinner;
}

@property (nonatomic, retain) UIActivityIndicatorView *spinner;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setSpinner:(id)arg1;
- (id)spinner;

@end
