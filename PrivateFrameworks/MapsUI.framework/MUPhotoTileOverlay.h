
@interface MUPhotoTileOverlay : NSObject {
    NSString * _attributionTitle;
    NSString * _badgeTitle;
    NSString * _tileTitle;
}

@property (nonatomic, retain) NSString *attributionTitle;
@property (nonatomic, retain) NSString *badgeTitle;
@property (nonatomic, readonly) bool shouldBeShown;
@property (nonatomic, retain) NSString *tileTitle;

- (void).cxx_destruct;
- (id)attributionTitle;
- (id)badgeTitle;
- (void)setAttributionTitle:(id)arg1;
- (void)setBadgeTitle:(id)arg1;
- (void)setTileTitle:(id)arg1;
- (bool)shouldBeShown;
- (id)tileTitle;

@end
