
@interface PUPhotoSmilesCommentCell : UITableViewCell {
    bool  _isVideo;
    UILabel * _smileContentLabel;
    UIView * _styledSeparatorView;
    NSOrderedSet * _userLikes;
    bool  _usesCompactSeparators;
}

@property (nonatomic) bool isVideo;
@property (nonatomic, readonly, retain) UILabel *smileContentLabel;
@property (nonatomic, readonly, retain) UIView *styledSeparatorView;
@property (nonatomic, copy) NSOrderedSet *userLikes;
@property (nonatomic) bool usesCompactSeparators;

+ (id)_attributedStringForComments:(id)arg1 color:(id)arg2 isVideo:(bool)arg3;
+ (id)_smileStringForComments:(id)arg1;
+ (double)heightOfSmileCellWithComments:(id)arg1 forWidth:(double)arg2 isVideo:(bool)arg3 forInterfaceOrientation:(long long)arg4;

- (void).cxx_destruct;
- (void)_updateContent;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isVideo;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setIsVideo:(bool)arg1;
- (void)setUserLikes:(id)arg1;
- (void)setUsesCompactSeparators:(bool)arg1;
- (id)smileContentLabel;
- (id)styledSeparatorView;
- (id)userLikes;
- (bool)usesCompactSeparators;

@end
