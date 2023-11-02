
@interface ICQSubtitleHeaderView : UIView <PSHeaderFooterView> {
    NSMutableArray * _subtitleLabels;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) NSArray *subtitleLabels;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)addSubtitle;
- (id)initWithSpecifier:(id)arg1;
- (void)layoutSubviews;
- (double)preferredHeightForWidth:(double)arg1;
- (void)removeSubtitleAtIndex:(unsigned long long)arg1;
- (void)setSubtitleLabels:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleAtIndex:(unsigned long long)arg1;
- (id)subtitleLabels;
- (id)titleLabel;

@end
