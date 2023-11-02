
@interface CNUIPRLikenessBadgeImageProvider : NSObject <CNUILikenessBadgeTypeProvider, CNUIPRLikenessProvider> {
    UIImage * _badgeImage;
    NSData * _badgeImageData;
    unsigned long long  _badgeType;
    CNCache * _cache;
}

@property (nonatomic, retain) UIImage *badgeImage;
@property (nonatomic, retain) NSData *badgeImageData;
@property (nonatomic) unsigned long long badgeType;
@property (nonatomic, readonly) CNCache *cache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGImage { }*)_cnui_imageForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (unsigned long long)_cnui_likenessType;
- (struct CGImage { }*)badgeCGImage;
- (id)badgeImage;
- (id)badgeImageData;
- (unsigned long long)badgeType;
- (id)cache;
- (id)initWithBadge:(id)arg1;
- (struct CGImage { }*)renderCircularImageForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (struct CGImage { }*)renderRoundedRectImageForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (void)setBadgeImage:(id)arg1;
- (void)setBadgeImageData:(id)arg1;
- (void)setBadgeType:(unsigned long long)arg1;

@end
