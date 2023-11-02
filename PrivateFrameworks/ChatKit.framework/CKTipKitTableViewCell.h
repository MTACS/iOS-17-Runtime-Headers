
@interface CKTipKitTableViewCell : UITableViewCell {
    TPKContentView * _tipKitContentView;
}

@property (nonatomic, retain) TPKContentView *tipKitContentView;

+ (id)identifier;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)setTipKitContentView:(id)arg1;
- (id)tipKitContentView;

@end
