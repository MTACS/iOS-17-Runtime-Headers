
@interface EKUILocationEditItemCell : UITableViewCell {
    UIButton * _clearButton;
    UIImageView * _image;
    UIActivityIndicatorView * _spinner;
    UILabel * _title;
}

@property (nonatomic, readonly) UIButton *clearButton;

- (void).cxx_destruct;
- (id)clearButton;
- (id)description;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateWithName:(id)arg1 sourceSupportsAvailability:(bool)arg2 availabilityRequestInProgress:(bool)arg3 availabilityType:(long long)arg4;

@end
