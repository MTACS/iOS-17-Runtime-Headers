
@interface AVTSplashScreenConfiguration : NSObject {
    NSString * _buttonString;
    AVPlayerItem * _primaryPlayerItem;
    AVPlayerItem * _secondaryPlayerItem;
    NSString * _subTitleString;
    NSString * _titleString;
}

@property (nonatomic, retain) NSString *buttonString;
@property (nonatomic, retain) AVPlayerItem *primaryPlayerItem;
@property (nonatomic, retain) AVPlayerItem *secondaryPlayerItem;
@property (nonatomic, retain) NSString *subTitleString;
@property (nonatomic, retain) NSString *titleString;

- (void).cxx_destruct;
- (id)buttonString;
- (id)primaryPlayerItem;
- (id)secondaryPlayerItem;
- (void)setButtonString:(id)arg1;
- (void)setPrimaryPlayerItem:(id)arg1;
- (void)setSecondaryPlayerItem:(id)arg1;
- (void)setSubTitleString:(id)arg1;
- (void)setTitleString:(id)arg1;
- (id)subTitleString;
- (id)titleString;

@end
