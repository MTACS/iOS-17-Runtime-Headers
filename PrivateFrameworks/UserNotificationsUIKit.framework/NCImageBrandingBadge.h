
@interface NCImageBrandingBadge : UIImageView <NCImageBrandingBadging> {
    unsigned long long  _badgeLocation;
    NCBadgedIconView * _badgedIconView;
}

@property (nonatomic) unsigned long long badgeLocation;
@property (nonatomic, readonly) long long badgeType;
@property (nonatomic) NCBadgedIconView *badgedIconView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) UIImage *image;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)badgeLocation;
- (long long)badgeType;
- (id)badgedIconView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithImage:(id)arg1;
- (void)setBadgeLocation:(unsigned long long)arg1;
- (void)setBadgedIconView:(id)arg1;

@end
