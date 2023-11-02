
@interface EKUIConferenceRoomSearchResultCell : UITableViewCell {
    NSString * _accessibilityLabel;
    UIImageView * _image;
    UIActivityIndicatorView * _spinner;
    UILabel * _title;
}

- (void).cxx_destruct;
- (id)description;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)reloadWithConferenceRoom:(id)arg1;
- (void)safeAreaInsetsDidChange;
- (void)updateSeparatorInset;

@end
