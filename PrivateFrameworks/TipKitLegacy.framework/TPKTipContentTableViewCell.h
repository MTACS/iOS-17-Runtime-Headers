
@interface TPKTipContentTableViewCell : UITableViewCell <TPKTipContentReusableView> {
    void tipView;
}

@property (nonatomic, readonly) TPKContentView *tipContentView;
@property (nonatomic, retain) TPKContentView *tipView;

- (void).cxx_destruct;
- (void)_bridgedUpdateConfigurationUsingState:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)setContent:(id)arg1 contentController:(id)arg2;
- (void)setTipView:(id)arg1;
- (id)tipContentView;
- (id)tipView;

@end
