
@interface AAUIProfileSummaryView : UIView {
    UILabel * _emailLabel;
    bool  _hidesPhoto;
    UILabel * _nameLabel;
    UIImageView * _profileImageView;
    double  _topPadding;
}

@property (nonatomic) bool hidesPhoto;
@property (nonatomic) double topPadding;

+ (double)desiredHeight;

- (void).cxx_destruct;
- (bool)hidesPhoto;
- (id)initWithName:(id)arg1 email:(id)arg2 image:(id)arg3;
- (void)layoutSubviews;
- (void)setHidesPhoto:(bool)arg1;
- (void)setTopPadding:(double)arg1;
- (double)topPadding;

@end
