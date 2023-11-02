
@interface PKExpiredPassesTableViewCell : UITableViewCell {
    struct configuration_t { 
        bool small; 
    }  _configuration;
    NSString * _detailText;
    bool  _isAccessibilityCategory;
    double  _minimumScaleFactor;
    PKPass * _pass;
    NSString * _primaryText;
    NSString * _secondaryDetailText;
    UILabel * _secondaryDetailTextLabel;
    bool  _showImage;
    PKPassThumbnailView * _thumbnailView;
}

@property (nonatomic, copy) NSString *detailText;
@property (nonatomic, retain) PKPass *pass;
@property (nonatomic, copy) NSString *primaryText;
@property (nonatomic, copy) NSString *secondaryDetailText;
@property (nonatomic) bool showImage;

+ (double)height;

- (void).cxx_destruct;
- (id)detailText;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)pass;
- (void)prepareForReuse;
- (id)primaryText;
- (id)secondaryDetailText;
- (void)setDetailText:(id)arg1;
- (void)setPass:(id)arg1;
- (void)setPrimaryText:(id)arg1;
- (void)setSecondaryDetailText:(id)arg1;
- (void)setShowImage:(bool)arg1;
- (bool)showImage;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
