
@interface PKEditPassesTableViewCell : UITableViewCell {
    PKPass * _pass;
    bool  _showImage;
}

@property (nonatomic, retain) PKPass *pass;
@property (nonatomic) bool showImage;

+ (double)height;
+ (struct CGSize { double x1; double x2; })imageSizeNeeded;
+ (bool)needsFullPassImage;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })separatorInset;

- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)arg1 showImage:(bool)arg2;
- (void)layoutSubviews;
- (id)pass;
- (void)prepareForReuse;
- (void)setImage:(id)arg1 forPass:(id)arg2;
- (void)setPass:(id)arg1;
- (void)setShowImage:(bool)arg1;
- (bool)showImage;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
