
@interface NTKCFaceDetailRowActionCell : NTKCDetailTableViewCell {
    bool  _showsTopSeparator;
    NTKCSeparatorView * _topSeparator;
}

@property (nonatomic) bool showsTopSeparator;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setShowsTopSeparator:(bool)arg1;
- (bool)showsTopSeparator;

@end
