
@interface CKTranscriptDNDCell : UITableViewCell {
    UISwitch * _muteSwitch;
}

@property (nonatomic, retain) UISwitch *muteSwitch;

+ (id)identifier;
+ (double)preferredHeight;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)muteSwitch;
- (void)setMuteSwitch:(id)arg1;

@end
