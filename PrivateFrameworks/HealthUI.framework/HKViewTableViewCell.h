
@interface HKViewTableViewCell : UITableViewCell {
    UIView * _hostedView;
}

@property (nonatomic, readonly) UIView *hostedView;

- (void).cxx_destruct;
- (void)_pinViewToContent:(id)arg1;
- (id)hostedView;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)prepareForReuse;
- (void)setHostedView:(id)arg1;

@end
