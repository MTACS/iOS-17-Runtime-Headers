
@interface TVMediaInfo : NSObject <NSCopying> {
    UIColor * _backgroundColor;
    UIView * _contentView;
    NSArray * _imageProxies;
    long long  _intent;
    UIView * _overlayView;
    TVPlaylist * _playlist;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, copy) NSArray *imageProxies;
@property (nonatomic) long long intent;
@property (nonatomic, retain) UIView *overlayView;
@property (nonatomic, retain) TVPlaylist *playlist;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)contentView;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)imageProxies;
- (long long)intent;
- (bool)isEqual:(id)arg1;
- (id)overlayView;
- (id)playlist;
- (void)setBackgroundColor:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setImageProxies:(id)arg1;
- (void)setIntent:(long long)arg1;
- (void)setOverlayView:(id)arg1;
- (void)setPlaylist:(id)arg1;

@end
